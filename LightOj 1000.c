#include<stdio.h>
int main()
{
    int n,a,b,i,cas=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d%d",&a,&b);
          printf("Case %d: %d\n",cas++,a+b);
    }
}
