#include<bits/stdc++.h>
using namespace std;
#define mx 1000010  //10000007
typedef long long int ll;
double lo[mx];
int main()
{
    ll i,j,m,n,t,x,ba;
    for(i=1;i<=mx;i++) lo[i]=lo[i-1]+log(i);
      cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x>>ba;
        cout<<"Case "<<i<<": ";
        m=(lo[x]/log(ba))+1;
        cout<<m<<endl;
    }
}
