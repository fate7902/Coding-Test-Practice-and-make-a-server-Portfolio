#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    for (int i = 0; i < 26; i++) {
        char ch = i + 'a';
        if (str.find(ch) == string::npos) {
            cout << "-1 ";
        }
        else {
            cout << str.find(ch) << " ";
        }
    }
}

// 찾는 문자 및 문자열이 있는지 string.find() 함수를 이용하여 string::npos[정의된 값 -1]과 비교해서 알아보고
// string.find() 함수로 인덱스의 위치도 찾는다.