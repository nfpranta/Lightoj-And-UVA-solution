#include<stdio.h>
#include<math.h>
int main()
{
    double casee=0,i,a,b,c,d,e,f,angle,n1,n2;
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
        n1=sqrt((c-a)*(c-a) +(d-b)*(d-b));
        n2=sqrt((e-c)*(e-c) +(f-d)*(f-d));
        angle=acos(((2*n1*n1)-(n2*n2))/(2*n1*n1));
        printf("Case %.0lf: %lf\n",++casee,angle*n1);
    }
    return 0;
}
