#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int GetNumber(vector<pair<int, string>>& arr, string str) {
    int right_index = arr.size() - 1;
    int left_lndex = 0;
    while (left_lndex <= right_index) {
        int mid_index = (right_index + left_lndex) / 2;
        if (arr[mid_index].second == str) return arr[mid_index].first;
        else if (arr[mid_index].second > str) right_index = mid_index - 1;
        else left_lndex = mid_index + 1;
    }    
}

string GetName(vector<pair<int, string>>& arr, int n) {
    int right_index = arr.size() - 1;
    int left_lndex = 0;
    while (left_lndex <= right_index) {
        int mid_index = (right_index + left_lndex) / 2;
        if (arr[mid_index].first == n) return arr[mid_index].second;
        else if (arr[mid_index].first > n) right_index = mid_index - 1;
        else left_lndex = mid_index + 1;
    }
}

bool cmp(pair<int, string> a, pair<int, string> b) {
    return a.second < b.second;
}

bool IsNumber(const string& str)
{
    for (char const& c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    string str;
    vector<pair<int, string>> arrA, arrB;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> str;
        arrA.emplace_back(make_pair(i + 1, str));
    }
    arrB = arrA;
    sort(arrA.begin(), arrA.end(), cmp);
    
    for (int i = 0; i < m; i++) {
        cin >> str;
        if (IsNumber(str) == false) cout << GetNumber(arrA, str) << "\n";
        else cout << GetName(arrB, stoi(str)) << "\n";
    }
}