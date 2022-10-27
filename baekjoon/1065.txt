#include <iostream>
using namespace std;

int countHansu(int a) {
    int cnt = 0, start = 1;
    int x, y, z;
    while (start <= a) {
        if (start >= 100) {
            x = start / 100;
            y = (start - x * 100) / 10;
            z = (start - (x * 100 + y * 10));
            if (y - x == z - y) {
                cnt++;
            }
            start++;
        }
        else {
            cnt++;
            start++;
        }
    }
    return cnt;
}

int main() {
    int num;
    cin >> num;
    cout << countHansu(num);
}