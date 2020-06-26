#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,j,n,t,q,b,c;
     scanf("%d",&t);
    for(i=1;i<=t;i++){
       scanf("%d %d",&n,&q);
        int a[n+1];
        for(j=0;j<n;j++){
           scanf("%d",&a[j]);
        }
      printf("Case %d:\n",i);
    for(j=0;j<q;j++){
         scanf("%d %d",&b,&c);
        auto it1=lower_bound(a,a+n,b)-a;
         auto it2=upper_bound(a,a+n,c)-a;
         printf("%d\n",it2-it1);
        }
    }
             }
