#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool IsGet(vector<int>& arr, int n) {
    int right_index = arr.size() - 1;
    int left_index = 0;
    while (left_index <= right_index) {
        int mid_index = (right_index + left_index) / 2;
        if (arr[mid_index] == n) return true;
        else if (arr[mid_index] > n) right_index = mid_index - 1;
        else left_index = mid_index + 1;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, temp;
    vector<int> arr;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.emplace_back(temp);
    }
    sort(arr.begin(), arr.end());

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        if (IsGet(arr, temp) == true) cout << "1 ";
        else cout << "0 ";
    }
}