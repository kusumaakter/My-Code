#include<bits/stdc++.h>
using namespace std;

vector<int>vec[1000];
bool visited[1000];

void dfs(int s)
{
     cout<<s<<" ";
     visited[s]=true;
}

int main()
{
     
     int n,m;
     cin>>n>>m;
     for(int i=0;i<m;i++)
     {
        int u,v;
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);

     }
     dfs(1);
}