#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int map[7][7];

int howMany = 0;

unsigned int tryTime = 0;

void show() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (map[i][j] == 1) {
                cout << " " << map[i][j] << " ";
            }
            else {
                cout << map[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << "已嘗試 " << tryTime << " 次檢查。" << endl;
    cout << "目前總共有 " << howMany << " 組符合條件。" << endl;
}

void init() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            map[i][j] = 1;
        }
    }
}

void check() {
    int wrong = 0;
    int total;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            total = 1;
            if ((i - 1) >= 0) {
                total = total * map[i - 1][j];
            }
            if ((i + 1) <= 6) {
                total = total * map[i + 1][j];
            }
            if ((j - 1) >= 0) {
                total = total * map[i][j - 1];
            }
            if ((j + 1) <= 6) {
                total = total * map[i][j + 1];
            }
            if (total != map[i][j]) {
                wrong++;
                break;
                break;
            }
        }
    }
    tryTime++;
    if (!wrong) {
        howMany++;
    }
}

void comb(int N, int K) {
    std::string bitmask(K, 1); // K leading 1's
    bitmask.resize(N, 0); // N-K trailing 0's
 
    // print integers and permute bitmask
    do {
        system("clear");
        init();
        for(int i = 0; i < N; ++i) {// [0..N-1] integers
            if(bitmask[i]) {
                map[i/7][i%7] = -1;
            }
        }
        check();
        show();
    }
    while(std::prev_permutation(bitmask.begin(), bitmask.end()));
}
 
int main() {
    for(int i = 1; i <= 49; i++) {
        comb(49, i);
    }
}
