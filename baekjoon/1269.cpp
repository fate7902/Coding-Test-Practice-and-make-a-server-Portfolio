#include <iostream>
#include <algorithm>
#include <vector>
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
    int cnt = 0;
    vector<int> arrA, arrB;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arrA.emplace_back(temp);
    }
    sort(arrA.begin(), arrA.end());
    
    for (int i = 0; i < m; i++) {
        cin >> temp;
        arrB.emplace_back(temp);
    }
    sort(arrB.begin(), arrB.end());

    for (int i = 0; i < arrA.size(); i++) {
        if (IsGet(arrB, arrA[i]) == true) cnt++;
    }

    cout << arrA.size() + arrB.size() - (2 * cnt);
}