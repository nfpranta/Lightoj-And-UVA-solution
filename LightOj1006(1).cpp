#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a,b,c,d,e,f;
ll g[1000000];
ll dp(ll n)
{
    if(g[n]>=0) return g[n];
     g[0]=a;
     g[1]=b;
     g[2]=c;
     g[3]=d;
     g[4]=e;
     g[5]=f;
     if(n<=5 && n>=0) return g[n];
    g[n]=( dp(n-1) + dp(n-2) + dp(n-3) + dp(n-4) + dp(n-5) + dp(n-6) )%10000007;
    return g[n];
}
int main()
{
    ll i,j,t,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        memset(g,-1,sizeof(g));
        cin>>a>>b>>c>>d>>e>>f>>n;
        j=dp(n)%10000007;
        cout<<"Case "<<i<<": "<<j<<endl;
       // memset(g,-1,sizeof(g));
    }
}
