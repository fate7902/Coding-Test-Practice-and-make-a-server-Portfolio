#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string str;
    int num = 0;
    getline(cin, str);
    char* temp = strtok(const_cast<char*>(str.c_str()), " ");

    while (temp != NULL) {
        temp = strtok(NULL, " ");
        num++;
    }
    cout << num;
}

// 헤더 확인 잘하기