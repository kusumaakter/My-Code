#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mn = min_element(a, a + n) - a;
    int mx = max_element(a, a + n) - a;

    swap(a[mn], a[mx]);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

