#include<stdio.h>
int main()
{
    int n,a,i,t,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&n,&a);
       if(n<=a){ sum=0;
        sum= 4*a+19;
       }
       else {
        sum=(2*n-a)*4+19;
       }
         printf("Case %d: %d\n",i,sum);
    }
}
