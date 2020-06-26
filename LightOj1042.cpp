#include<bits/stdc++.h>
using namespace std;
#define speedforce ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef long long int ll;
 int cnt(ll n)
{
    int c=0;
     while(n)
     {
         n=n&(n-1);
         c++;
     }
    return c;
}

int main()
{
    speedforce
    int t,j;
    scanf("%d",&t);
   for(j=1;j<=t;j++)
    {
       ll n,ans,i;
        scanf("%lld",&n);
for(i=1;i<=n;i*=2)
            if(n&i)
            {
                ans=n+i;
                break;
            }
        int diff=cnt(n)-cnt(ans);
        for(int i=0; i<diff; i++){
            ans=ans | (1<<i);
        }
        printf("Case %d: %lld\n",j,ans);
    }
}

