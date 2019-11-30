#include<bits/stdc++.h>
using namespace std;
const int high = 20009;
const int BLACK = 1;//Vampire
const int RED = 2;//Lycan
const int WHITE = 0;
vector<int>adj[high];  // adjacency list representation
int lycan,vampire;
int colour[high];
void bfs(int s)
{
queue<int> q;
q.push(s);
colour[s]=BLACK;
vampire++;
while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (auto v : adj[u]) {

        if(colour[v]==WHITE){
            q.push(v);

        if(colour[u]==BLACK)
        {
            colour[v]=RED;
            lycan++;
        }
        else {
            colour[v]=BLACK;
            vampire++;
        //    cout<<u<<" "<<v<<endl;

        }
    }
}
}
}

int main(){
    int  i,j,n,sum=0,u,v,t;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&t);
       memset(adj,0,sizeof(adj));
       memset(colour,0,sizeof(colour));
       for(j=0;j<t;j++)
       {
          scanf("%d %d",&u,&v);
           adj[u].push_back(v);
           adj[v].push_back(u);
       }
       int ans=0;
       for(j=1;j<high;j++)
       {
           if(!adj[j].empty() && colour[j]==WHITE) //White
           {
               lycan=0;
               vampire=0;
               bfs(j);
              // cout<<vampire<<" "<<lycan<<endl;
               ans+=max(vampire,lycan);
           }
       }
       printf("Case %d: %d\n",i,ans);
   }
}
