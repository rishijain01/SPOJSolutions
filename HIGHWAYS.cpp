#include<bits/stdc++.h>
using namespace std;
long int n,m,s,e;
//list< pair<long int ,long int> >*graph;
vector < pair <long int,long int > >graph[100000];
void SortestD(long int src)
{
    vector<long int>dist(n,INT_MAX);
    set<pair<long int,long int> >data;
    data.insert(make_pair(0,src));
    dist[src]=0;
    while(!data.empty())
    {
        pair<long int ,long int >temp;
        temp=*(data.begin());
        data.erase(data.begin());
        long int u,we;
        u=temp.second;
        //we=temp.first;
        vector < pair <long int ,long int> >::iterator it;
        for(it=graph[u].begin();it!=graph[u].end();it++)
        {
            long int v,weight;
            v=(*it).first;
            weight=(*it).second;
            if(dist[v]>dist[u]+weight)
            {
                dist[v]=dist[u]+weight;
                data.insert(make_pair(dist[v],v));
            }
        }
    }
    //for(int i=0;i<=e;i++)
    //cout<<dist[i]<<" ";//endl;
    if(dist[e]!=INT_MAX)
    cout<<dist[e]<<endl;
    else cout<<"NONE\n";
}
void insertedge(long int i,long int j,long int w)
{
    //cout<<"here\n";
    graph[i].push_back(make_pair(j,w));
    graph[j].push_back(make_pair(i,w));
}
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>s>>e;
        s--,e--;
          for(long int i=0;i<n;i++)
            graph[i].clear();
        //graph; //g(n);
        while(m--)
        {
            long int i,j,w;
            cin>>i>>j>>w;
            i--,j--;
            insertedge(i,j,w);
        }
        //cout<<endl;
        //graph.clear();
        vector < pair <long int ,long int> >::iterator it;
        /*for(int i=0;i<n;i++)
        {
            for(it=graph[i].begin();it!=graph[i].end();++it)
            {
                cout<<i<<" "<<(*it).first<<" "<<(*it).second<<endl;
            }
        }
        cout<<endl;*/
        SortestD(s);
    }
}
 
