#include<stdio.h>
int main()
{
    int i,j,n,a,b;
    scanf("%d",&n);
    for(i=0,j=0;i<n;i++,j++){
        scanf("%d",&a);
        if(a>10) printf("%d %d\n",a-10,10);

        else printf("%d %d\n",0,a);
    }
return 0;
}
