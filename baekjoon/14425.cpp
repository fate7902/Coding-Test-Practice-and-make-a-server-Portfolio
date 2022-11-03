#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool IsGet(vector<string>& arr, string str) {
    int right_index = arr.size() - 1;
    int left_lndex = 0;
    while (left_lndex <= right_index) {
        int mid_index = (right_index + left_lndex) / 2;
        if (arr[mid_index] == str) return true;
        else if (arr[mid_index] > str) right_index = mid_index - 1;
        else left_lndex = mid_index + 1;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, answer = 0;
    string str;
    vector<string> arr;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> str;
        arr.emplace_back(str);
    }
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < m; i++) {
        cin >> str;
        if (IsGet(arr, str) == true) answer++;
    }

    cout << answer;
}