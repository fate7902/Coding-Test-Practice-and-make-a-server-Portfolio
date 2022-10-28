#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int case_num, num;
    cin >> case_num;
    vector<int> array;
    for(int i = 0; i < case_num; i++){
        cin >> num;
        array.emplace_back(num);
    }
    sort(array.begin(), array.end());
    for(const auto& a : array){
        cout << a << "\n";
    }
}