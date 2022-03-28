#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

#define width 7            // 幾乘幾
#define gridSize width+2
#define modalNum 128       // 2 的 width 次方

int correct = 1;
int now = 1;
int guess[modalNum][gridSize][gridSize];
int ans[modalNum];

void show(int id, int map[gridSize][gridSize]) {
    for(int i = 1; i <= width; i++) {
        for(int k = 1; k <= width; k++) {
            if(map[i][k] == -1) {
                cout << map[i][k] << " ";
            }
            else {
                cout << " " << map[i][k] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "目前展示模型：#" << id << endl;
    cout << "正確模型代號：";
    for(int i = 0; i < correct; i++) {
        cout << "#" << ans[i] << " ";
    }
    cout << "（共 " << correct << " 組）" << endl;
}

int check(int map[gridSize][gridSize]) {
    int total;
    for(int i = 1; i < gridSize-1; i++) {
        for(int k = 1; k < gridSize-1; k++) {
            total = 1;
            if(map[i-1][k] != 0) {
                total = total * map[i-1][k];
            }
            if(map[i+1][k] != 0) {
                total = total * map[i+1][k];
            }
            if(map[i][k-1] != 0) {
                total = total * map[i][k-1];
            }
            if(map[i][k+1] != 0) {
                total = total * map[i][k+1];
            }
            if(total != map[i][k]) {
                return 0;
            }
        }
    }
    return 1;
}

void comb(int N, int K) {
    string data(K, 1); // 建立 K 大小的字串陣列，並填滿 1
    data.resize(N, 0); // 將字串陣列調整大小為 N，並將空缺部分填滿 0
    do {
        for(int i = 0; i < N; ++i) {
            if(data[i]) { // 如果資料為 1 (true)
                guess[now][1][i+1] = -1;
            }
            else {
                guess[now][1][i+1] = 1;
            }
        }
        now++;
    }
    while(prev_permutation(data.begin(), data.end())); // 將字串陣列中的資料重新排序成每種可能
}
 
int main() {
    // 建立最初模型
    for(int i = 1; i <= width; i++) {
        for(int k = 1; k <= width; k++) {
            guess[0][i][k] = 1;
        }
    }
    for(int i = 1; i <= width; i++) {
        comb(width, i);
    }
    // 開填
    for(int i = 1; i < modalNum; i++) {
        for(int k = 1; k <= width - 1; k++) {
            for(int j = 1; j <= width; j++) {
                guess[i][k+1][j] = guess[i][k][j];
                if((k-1) >= 1) {
                    guess[i][k+1][j] = guess[i][k+1][j] / guess[i][k-1][j];
                }
                if((j-1) >= 1) {
                    guess[i][k+1][j] = guess[i][k+1][j] / guess[i][k][j-1];
                }
                if((j+1) <= width) {
                    guess[i][k+1][j] =  guess[i][k+1][j] / guess[i][k][j+1];
                } 
            }
        }
        if(check(guess[i])) {
            ans[correct] = i;
            correct++;
        }
    }
    system("clear");
    show(0, guess[0]);
    // 顯示模型
    int target;
    while(cin >> target) {
        if(target >= modalNum || target < 0) target = 0;
        system("clear");
        show(target, guess[target]);
    }
}
