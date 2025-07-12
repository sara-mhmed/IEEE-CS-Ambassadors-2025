// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    if (s.length() != a + b + 1 || s[a] != '-') {
        cout << "No";
         return 0;
    }
    for (int i = 0; i < s.length(); i++) {
        if (i == a) continue; 

        if (s[i] < '0' || s[i] > '9') {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
