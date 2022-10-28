#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    char ch;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> ch;
        sum += (int)(ch - '0');
    }
    cout << sum;
}

// 문자를 숫자로 바꿀때는 '0' 을 빼서 구해준다.