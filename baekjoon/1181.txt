#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
    if (a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int case_num;
    string str;
    vector<string> arr;
    cin >> case_num;
    for (int i = 0; i < case_num; i++) {
        cin >> str;
        if (find(arr.begin(), arr.end(), str) == arr.end()) {
            arr.emplace_back(str);
        }
    }
    stable_sort(arr.begin(), arr.end(), cmp);
    for (const auto& s : arr) {
        cout << s << "\n";
    }
}