#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[1000000];
int main()
{
   ll i,j,k,m,cas=0;
   int n;
    cin>>m;
     while(m--){
            scanf("%lld %lld %lld %lld %lld %lld %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&n);
        for(j=6;j<=n;j++)
        {
              a[j]=(a[j-1]+a[j-2]+a[j-3]+a[j-4]+a[j-5]+a[j-6])%10000007;
        }
      cout<<"Case "<<++cas<<": "<<a[n]%10000007<<endl;
}
}
