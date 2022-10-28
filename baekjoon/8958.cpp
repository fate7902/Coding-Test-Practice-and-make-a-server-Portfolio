#include <iostream>
#include <numeric>
using namespace std;

void result(string& str)
{
    int point = 0;
    int* array = new int[str.size()];
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'O') point++;
        else point = 0;
        array[i] = point;
    }
    cout << accumulate(array, array + str.size(), 0) << endl;
    delete[] array;
}

int main() {
    int case_num;
    string str;
    cin >> case_num;
    for (int i = 0; i < case_num; i++) {
        cin >> str;
        result(str);
    }
}