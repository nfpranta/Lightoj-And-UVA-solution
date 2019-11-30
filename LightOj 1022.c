#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double a,pi;
    pi=acos(-1);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&a);
        printf("Case %d: %.2lf\n",i+1,(a+a)*(a+a)-pi*(a*a));
    }
}
