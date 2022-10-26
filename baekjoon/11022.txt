#include <iostream>
using namespace std;

int main(){
    int case_num;
    int a, b;
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> case_num;
    for(int i = 0; i < case_num; i++){
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << "\n";
    }
}