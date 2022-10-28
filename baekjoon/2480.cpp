#include <iostream>
using namespace std;

int main() {
	int num[6][1] = { 0, };
	int a, b, c;
	int max = 0, index = 0;
	cin >> a >> b >> c;

	num[a - 1][0]++;
	num[b - 1][0]++;
	num[c - 1][0]++;

	bool flag = false;
	for (int i = 0; i < 6; i++) {
		if (num[i][0] > 1) {
			flag = true;
			max = i + 1;
			index = num[i][0];
		}
	}

	if (true == flag) {
		switch (index) {
		case 2:
			cout << 1000 + (max * 100);
			break;
		case 3:
			cout << 10000 + (max * 1000);
			break;
		}		
	}
	else {
		for (int i = 0; i < 6; i++) {
			if (num[i][0] > 0) max = i + 1;
		}
		cout << max * 100;
	}
}