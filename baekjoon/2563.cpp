#include <iostream>
using namespace std;

int main() {
    int num;
    bool check[100][100] = { false, };
    int answer = 0;
    cin >> num;
    int x, y;

    for (int i = 0; i < num; i++) {
        cin >> x >> y;
        for (int j = x; j < x + 10; j++) {
            for (int k = y; k < y + 10; k++) {
                if (false == check[j][k]) {
                    check[j][k] = true;
                    answer++;
                }
            }
        }
    }
    cout << answer;
}

// 넓이를 직접 구하는 것 보다는 플래그를 활용하는 방식이 좀더 편할 수도 있다.