#include<bits/stdc++.h>
using namespace std;
#define speedforce ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    speedforce
    int n,m,i,j,s=0,x;
    int t;
      scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
     scanf("%d",&n);
        s=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&x);
            if(x>0) s+=x;
        }
       printf("Case %d: %d\n",i,s);
    }
}
