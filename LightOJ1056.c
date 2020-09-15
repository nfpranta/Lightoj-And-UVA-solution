#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,i,a,b;
    double sum,total,sum1;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d : %d",&a,&b);
        sum1=sqrt(a*a+b*b)/2.0;
        total=sum1*((acos((2*sum1*sum1-b*b)/(2*sum1*sum1))));
        sum=400/(2*a+2*total);
        printf("Case %d: %.8lf %.8lf\n",i,sum*a,sum*b);
    }
}
