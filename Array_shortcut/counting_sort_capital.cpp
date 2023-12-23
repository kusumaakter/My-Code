#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,frq[26]={0};
    char cnt;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        frq[a-65]++;
        frq[a-97]++;
    }{

    for(char i=65;i<=90;i++)
    {
        if(frq[i-65]>0)
        {
            for(int j=0;j<frq[i-65];j++)
            {
                cnt++;
            }
        }
    }
    for(char i=97;i<=123;i++)
    {
        if(frq[i-97]>0)
        {
            for(int j=0;j<frq[i-97];j++)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;}

}
