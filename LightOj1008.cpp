#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t,i,j;
    ll n,m,l,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        printf("Case %d: ",i);
        a=ceil(sqrt(n));
        b=n-(a-1)*(a-1);
        if(a%2==0)
        {
            if(a>=b) printf("%lld %lld\n",b,a);
            else printf("%lld %lld\n",a,1+a*a-n);
        }
        else {
            if(b>=a) printf("%lld %lld\n",1+a*a-n,a);
            else printf("%lld %lld\n",a,b);
        }
    }
}
