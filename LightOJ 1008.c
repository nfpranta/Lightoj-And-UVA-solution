#include<stdio.h>
#include<math.h>
int main()
{
 long long int i,n,a,b,l;
  scanf("%lld",&n);
  for(i=1;i<=n;i++){
    scanf("%lld",&a);
    b=ceil(sqrt(a));
    l=a-(b-1)*(b-1);
    if(b%2==0){
            if(l>b) printf("Case %lld: %lld %lld\n",i,b,1+b*b-a);
    else printf("Case %lld: %lld %lld\n",i,l,b);
  }
  else{
    if(l>b) printf("Case %lld: %lld %lld\n",i,1+b*b-a,b);
        else printf("Case %lld: %lld %lld\n",i,b,l);
  }
  }
}
