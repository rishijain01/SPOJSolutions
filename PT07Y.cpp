#include<bits/stdc++.h>
using namespace std;
vector<long int>graph[10000];
long int n,m,i,j;
bool iscycle(long int s,bool visited[],long int parent)
{
    visited[s]=true;
    vector<long int>::iterator it;
    for(it=graph[s].begin();it!=graph[s].end();it++)
    {
        if(visited[*it]==false)
        {
            if(iscycle(*it,visited,s))
                return true;
        }
         else if(*it!=parent)
                return true;
    }
    return false;
}
bool istree(long int s)
{
    bool visited[n];
    memset(visited,false,sizeof(visited));
    //cout<<"here";
    if(iscycle(i,visited,-1))
       return false;
    for(long int i=0;i<n;i++)
        if(visited[i]==false)
           return false;
    return true;
}
void addedge(long int i,long int j)
{
    graph[i].push_back(j);
    graph[j].push_back(i);
}
int main()
{
    cin>>n>>m;
    //long int i,j;
    while(m--)
    {
        cin>>i>>j;
        i--,j--;
        addedge(i,j);
    }
    //cout<<i;
    if(istree(i))
    {
     cout<<"YES";
    }
    else cout<<"NO";
}
