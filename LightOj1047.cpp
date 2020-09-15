#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[100][100];
ll col[100][100];
ll n;
ll dp(ll i,ll j)
{
    if(i==n) return a[i][j];
    if(col[i][j]!=-1) return col[i][j];
    ll r1,r2,k1,k2;
    if(j==1)
    {
        r1=2;
        r2=3;
    }
     else  if(j==2)
    {
        r1=1;
        r2=3;
    }
      else if(j==3)
    {
        r1=1;
        r2=2;
    }
    k1=a[i][j]+dp(i+1,r1);
    k2=a[i][j]+dp(i+1,r2);
    col[i][j]=min(k1,k2);
    return col[i][j];
}

int main()
{
    ll i,j,t,k,r1,r2,r3,r;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        memset(col,-1,sizeof(col));
         cin>>n;
        for(j=1;j<=n;j++)
        {
              for(k=1;k<=3;k++){
                cin>>a[j][k];
              }
             }
          r1=dp(1LL,1LL);
         r2=dp(1LL,2LL);
         r3=dp(1LL,3LL);
         r=min(r1,min(r2,r3));
    cout<<"Case "<<i<<": "<<r<<endl;
    }
}
