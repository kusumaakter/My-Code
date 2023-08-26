#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int t;
    cin>>t;
    while(t--){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    
    if(((a+b+c+n)%3==0) && (a<=(a+b+c+n)/3) && (b<=(a+b+c+n)/3) && (c<=(a+b+c+n)/3))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    
}}