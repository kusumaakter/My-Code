#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = 0; i <= 9; i++) {
        string s;
        cin >> s;

        if (a + 1 < 0 || (a + b + 1) < 0) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
