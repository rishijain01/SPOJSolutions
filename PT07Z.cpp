#include<bits/stdc++.h>
using namespace std;
vector<long int>graph[10000];
long int n,xx;
long int maxx=INT_MIN;
void Do_DFS(long int countt,long int src,bool visited[])
{
    visited[src]=true;
    countt++;
    vector < long int > ::iterator it;
    for(it=graph[src].begin();it!=graph[src].end();it++)
    {
        if(!visited[*it])
        {
          if(countt>=maxx)
          {
              maxx=countt;
              xx=*it;
          }
          Do_DFS(countt,*it,visited);
        }
    }
}
void DFS(long int src)
{
    bool visited[n];
    for(long int i=0;i<n;i++) visited[i]=false;
    long int count=0;
    Do_DFS(count,src,visited);
}
void find_diameter()
{
    DFS(0);
    DFS(xx);
}
void addedge(long int x,long int y)
{
    graph[x].push_back(y);
    graph[y].push_back(x);
}
int main()
{
    //long int n;
    cin>>n;
    long int i;
    long int x,y;
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        x--,y--;
        addedge(x,y);
    }
    find_diameter();
    cout<<maxx;
}
