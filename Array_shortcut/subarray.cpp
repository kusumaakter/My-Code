#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int A[N];

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }


        for (int i = 0; i < N; ++i) {
            int mx = A[i];
            for (int j = i; j < N; ++j) {
                mx= max(mx, A[j]);
                std::cout << mx << " ";
            }
        }

        cout <<endl;
    }

    return 0;
}

