#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int width = 7;

int mangi = width * width;

int minusWidth = width - 1;

int map[7][7];

int ans[49][7][7];

int howMany = 0;

unsigned int tryTime = 0;

void save(int data[7][7]) {
    for(int i = 0; i < width; i++) {
        for(int k = 0; k < width; k++) {
            ans[howMany][i][k] = data[i][k];
        }
    }
}

void show(int progress) {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < width; j++) {
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
    cout << progress << " / " << mangi << endl;
}

void init() {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < width; j++) {
            map[i][j] = 1;
        }
    }
}

void check() {
    int wrong = 0;
    int total;
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < width; j++) {
            total = 1;
            if ((i - 1) >= 0) {
                total = total * map[i - 1][j];
            }
            if ((i + 1) <= minusWidth) {
                total = total * map[i + 1][j];
            }
            if ((j - 1) >= 0) {
                total = total * map[i][j - 1];
            }
            if ((j + 1) <= minusWidth) {
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
        save(map);
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
                map[i/width][i%width] = -1;
            }
        }
        check();
        show(K);
    }
    while(std::prev_permutation(bitmask.begin(), bitmask.end()));
}
 
int main() {
    init();
    check();
    show(0);
    for(int i = 1; i <= mangi; i++) {
        comb(mangi, i);
    }
    int modalId;
    while(cin >> modalId) {
        for(int i = 0; i < width; i++) {
            for(int k = 0; k < width; k++) {
                map[i][k] = ans[modalId][i][k];
            }
        }
        system("clear");
        show(mangi);
    }
}