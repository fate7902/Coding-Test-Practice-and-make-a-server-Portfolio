#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool IsGet(vector<string>& arr, string str) {
    int right_index = arr.size() - 1;
    int left_index = 0;
    while (left_index <= right_index) {
        int mid_index = (right_index + left_index) / 2;
        if (arr[mid_index] == str) return true;
        else if (arr[mid_index] > str) right_index = mid_index - 1;
        else left_index = mid_index + 1;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, cnt = 0;
    string str;
    vector<string> arrA, arrB;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> str;
        arrA.emplace_back(str);
    }
    sort(arrA.begin(), arrA.end());
    
    for (int i = 0; i < m; i++) {
        cin >> str;
        if (IsGet(arrA, str) == true) {
            cnt++;
            arrB.emplace_back(str);
        }
    }
    sort(arrB.begin(), arrB.end());
    cout << cnt << "\n";
    for (int i = 0; i < arrB.size(); i++) {
        cout << arrB[i] << "\n";
    }
}