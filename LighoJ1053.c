#include<stdio.h>
int main()
{
    int n,i,a,b,c,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
      if(c>a&& c>b){
                if(a*a+b*b==c*c) printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
      }
      else if(a>b && a>c){
         if(c*c+b*b==a*a) printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
      }
      else {
        if(a*a+c*c==b*b) printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
      }
    }
}
