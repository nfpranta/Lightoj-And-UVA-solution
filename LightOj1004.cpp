#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[305][305];
ll dp[400][400];
ll n,x;
ll ma(int i,int j)
{
    if(i>=0 && i<2*n-1 && j>=0 && j<n)
    {
        if(a[i][j]==0) return 0;
        if(i==x-1) return a[i][j];
     if(dp[i][j]!=-1) return dp[i][j];
     ll t1=0,t2=0;
     t1=a[i][j]+ma(i+1,j);
     t2=a[i][j]+ma(i+1,j+1);
     dp[i][j]=max(t1,t2);
     return dp[i][j];
    }
    else return 0;
}
int main()
{
    ll i,j,t,x,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        memset(a,0LL,sizeof(a));
        memset(dp,-1LL,sizeof(dp));
        cin>>n;
        x=2*n-1;
        for(j=0;j<n;j++)
        {
            for(k=0;k<=j;k++)
            {
                cin>>a[j][k];
            }
        }
        ll l=1;
        for(j=n;j<2*n-1;j++)
        {
            for(k=l;k<n;k++)
            {
                cin>>a[j][k];
            }
            l++;
        }
        cout<<"Case "<<i<<": "<<ma(0,0)<<endl;
    }
}
