#include<bits/stdc++.h>
using namespace std;

vector<int>vec[1000];
bool visited[1000];

void bfs(int s)
{
     queue<int>q;
     q.push(s);
     visited[s]=true;

     while(!q.empty())
     {
        int u=q.front();
        q.pop();
        cout<<u<<" ";

        for(int v:vec[u])
        {
            if(!visited[v])
            {
                q.push(v);
            }
            visited[v]=true;
        }
     }
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
     bfs(1);
}