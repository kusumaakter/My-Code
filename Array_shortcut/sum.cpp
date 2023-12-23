#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long Sum = 0;

    for (int i = 0; i < N; ++i) {
        long long num;
        cin >> num;


        Sum += abs(num);
    }


    cout << Sum << endl;

    return 0;
}

