#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i=0;
        string s[4];
        cin>>s[i];
        while(s[i]!='\0')
        {
            i++;
        }
        if(((s[0]=='Y')||(s[0]=='y'))&&((s[1]=='e')||(s[1]=='E'))&&((s[2]=='s')||s[2]=='S'))
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }


    }
}