#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll i,n,t,a,m,cnt=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       scanf("%lld %lld",&n,&m);
           cnt=1;
           a=m;
        while(m%n!=0)
        {
            m=(m*10+a)%n;        //m=(m*10+a)%n;
            cnt++;
        }
       printf("Case %lld: %lld\n",i,cnt);
    }
}
