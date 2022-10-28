#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int case_num, num;
    cin >> case_num;
    map<int, int> array;
    for (int i = 0; i < case_num; i++) {
        cin >> num;
        if (array.find(num) != array.end()) {
            array[num]++;
        }
        else {
            array.emplace(num, 1);
        }
    }

    vector<pair<int, int>> answer(array.begin(), array.end());

    for (const auto& m : answer) {
        for (int i = 0; i < m.second; i++) {
            cout << m.first << "\n";
        }
    }
}