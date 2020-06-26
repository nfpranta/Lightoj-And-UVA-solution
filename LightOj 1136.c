#include<stdio.h>
int main()
{
    int T,a,b,i,j,ans=0,ans1=0;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d",&a,&b);
      ans1=(b/3)*2;
        if(b%3==2)  ++ans1;
        ans=((a-1)/3)*2;
        if((a-1)%3==2) ++ans;
        printf("Case %d: %d\n",i,ans1-ans);
    }
}
