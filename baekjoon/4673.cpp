#include <iostream>
using namespace std;

int selfNumber(int a) {
    int answer = 0;
    answer = a
        + a % 10
        + a / 10 % 10
        + a / 100 % 10
        + a / 1000 % 10
        + a / 10000 % 10;
    return answer;
}

bool array[10000] = { false, };

int main() {   
    int num = 1;
    while (num <= 10000) {
        array[selfNumber(num++) - 1] = true;
    }
    for (int i = 0; i < 10000; i++) {
        if (false == array[i]) cout << i + 1 << endl;
    }
}