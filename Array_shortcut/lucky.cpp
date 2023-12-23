#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min=INT_MAX;
    std::unordered_map<int, int> freqMap;
    for(int i=0;i<n;i++)
    {
         freqMap[a[i]]++;

        if(a[i]<min)
        {
            min=a[i];
        }
    }
    if(freqMap[min]%2==0){
    {
        cout<<"Unlucky"<<endl;
        }
    else
        {
            cout<<"lucky"<<endl;
        }
    }
}
