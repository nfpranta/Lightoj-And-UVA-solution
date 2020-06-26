#include<stdio.h>
int main()

{
    int i,t,a,b,x1,x2,y1,y2,n,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&n);
        printf("Case %d:\n",i);
        for(j=1;j<=n;j++){
            scanf("%d%d",&a,&b);
            if(a<x1 || b<y1 || a>x2 || b>y2) printf("No\n");
            else printf("Yes\n");
        }
    }
}
