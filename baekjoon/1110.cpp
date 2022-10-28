#include <iostream>
using namespace std;

int main() {
    int num, answer = 0;
    int cnt = 0;
    int a, b, c;
    cin >> num;
    while (answer != num) {
        if (cnt != 0) {
            a = answer / 10;
            b = answer % 10;
        }
        else {
            a = num / 10;
            b = num % 10;
        }
        answer = b * 10 + (a + b) % 10;
        cnt++;
    }
    if(cnt == 0) cnt++;
    cout << cnt;
}