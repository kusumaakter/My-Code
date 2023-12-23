#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int l = n;
    int i;
    for(i = 0; i < l/2; i++)
    {
        if(a[i] != a[l-1-i]) {
            cout << "NO" << endl;
            break;
        }
    }

    if(i == l/2)
    {
        cout << "YES" << endl;
    }


    return 0;
}
