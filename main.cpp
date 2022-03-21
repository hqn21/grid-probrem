#include <iostream>
#include <stdlib.h>

using namespace std;

int map[7][7] = {0};

void show() {
	for(int i = 0; i < 7; i++) {
		for(int j = 0; j < 7; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
}

void init() {
	for(int i = 0; i < 7; i++) {
		for(int j = 0; j < 7; j++) {
			map[i][j] = 0;
		}
	}
}

int check() {
	int total;
	for(int i = 0; i < 7; i++) {
		for(int j = 0; j < 7; j++) {
			total = 1;
			if((i - 1) >= 0) {
				total = total * map[i-1][j];
			}
			if((i + 1) <= 6) {
				total = total * map[i+1][j];
			}
			if((j - 1) >= 0) {
				total = total * map[i][j-1];
			}
			if((j + 1) <= 6) {
				total = total * map[i][j+1];
			}
			if(total != map[i][j]) {
				return 0;
			}
		}
	}
	return 1;
}

int main() {
	int nowA = 0, nowB = 0;
	while(nowB <= 6) {
		if(nowB == 6 && nowA != 6) {
			nowB = 0;
			nowA = nowA + 1;
		}
	}
	return 0;
}
