#include<bits/stdc++.h>
using namespace std;
const int mx=100005;
const int inf=0x3f3f3f3f;
#define node second
#define dis first
#define pb push_back
#define pii pair<int,int>
vector<pii>adj[mx];
int dis[mx];
void dijksatra(int start)
{
    int temp;
    priority_queue<pii,vector<pii>,greater<pii>>q;
    q.push(pii(0,start));
    dis[start]=0;
    while(!q.empty())
    {
        int n=q.top().node;
        int d=q.top().dis;
        q.pop();
        for(int i=0;i<adj[n].size();i++)
        {
            int a=adj[n][i].node;
            int b=adj[n][i].dis;
            temp=max(d,b);
            if(temp<dis[a]) {
                    dis[a]=temp;
                    q.push(pii(dis[a],a));
        }
    }
}
}
int main()
{
    int node,edge,t,n,m,i,j,u,v,w,start;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>node>>edge;
        for(j=0;j<edge;j++)
        {
            cin>>u>>v>>w;
            adj[u].pb(pii(w,v));
            adj[v].pb(pii(w,u));
        }
        cin>>start;
     //  memset(dis,200001,sizeof(dis));
     for(j=0;j<=node;j++) dis[j]=200001;
        dijksatra(start);
        cout<<"Case "<<i<<":"<<endl;
        for(j=0;j<node;j++)
        {
            if(dis[j]==200001) cout<<"Impossible"<<endl;
            else cout<<dis[j]<<endl;
        }

         memset(adj,0,sizeof(adj));
    }
}
