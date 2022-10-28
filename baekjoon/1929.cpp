#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    bool* flag = new bool[n + 1];
    for (int i = 0; i <= n; i++) {
        flag[i] = true;
    }
    flag[0] = flag[1] = false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (flag[i] == false) continue;
        for (int j = i * i; j <= n; j += i) {
            flag[j] = false;
        }
    }

    for (int i = m; i <= n; i++) {
        if (flag[i] == true) cout << i << '\n';
    }
    
    delete[] flag;
}

// 에라토스테네스의 체를 이용하여 푸는 문제이다