#include <iostream>
#include <algorithm>
using namespace std;

int arr[20000000] = { 0, };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, temp;    

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[10000000 + temp]++;
    }    
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        cout << arr[10000000 + temp] << " ";
    }
}