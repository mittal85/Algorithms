#include<bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int>>> g;
vector<pair<int,pair<int,int>>> output;
int findParent(int v,int *parent)
{
    if(parent[v]==v)
        return v;
    return findParent(parent[v],parent);
}    
void kruskal(int n,int e)
{
    int i;
    sort(g.begin(),g.end());             // sort weight in ascending order
    int count=0;
    int parent[n+1];                     // for loop detection
    for(i=0;i<n;i++)
        parent[i]=i;
    i=0;
    while(count!=n-1)
    {
        int sourceParent = findParent(g[i].second.first,parent);
        int destParent = findParent(g[i].second.second,parent);
        if(sourceParent!=destParent)                                
        {
            output.push_back({g[i].first,{g[i].second.first,g[i].second.second}});
            parent[sourceParent]=destParent;
            count++;
        }    
        i++;
    }
    for(i=0;i<n-1;i++)
    {
        cout<<output[i].first<<" "<<output[i].second.first<<" "<<output[i].second.second<<endl;
    }    
}        
int main()
{
    int w,s,d,i,n,e;
    cin>>n>>e;                                     // Enter No. Vertices and Edges.
    for(i=0;i<e;i++)
    {
        cin>>w>>s>>d;                              // w-weight of edges, s-source vertices , d-destination vertices 
        g.push_back({w,{s,d}});
    }    
    kruskal(n,e);
}    