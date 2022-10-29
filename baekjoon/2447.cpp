#include <iostream>
using namespace std;

void star(bool** flag, int x, int y, int len) {

    int blank_x = x + len / 3;
    int blank_y = y + len / 3;
    int blank_num = len / 3;
    for (int i = x; i < x + len; i++) {
        for (int j = y; j < y + len; j++) {
            if (blank_x <= i && i < blank_x + blank_num && blank_y <= j && j < blank_y + blank_num) {
                flag[i][j] = false;
            }
        }
    }

    if (len / 3 != 1) {
        int next_len = len / 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                star(flag, x + next_len * i, y + next_len * j, next_len);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    bool** flag = new bool* [n];
    for (int i = 0; i < n; i++) {
        flag[i] = new bool[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            flag[i][j] = true;
        }
    }

    star(flag, 0, 0, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (flag[i][j] == true) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++) {
        delete[] flag[i];
    }
    delete[] flag;
}