#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,sum=0,flag=1,c,a1,a2;
   while( cin>>n){
        int a[n+1];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cin>>m;
        for(i=0;i<n;i++){
             c=m-a[i];
             c=lower_bound(a+i,a+n,c)-a;
             if(a[i]+a[c]==m) {
                a1=a[i];
                a2=a[c];
             }
        }
        cout<<"Peter should buy books whose prices are "<<a1<<" and "<<a2<<"."<<endl<<endl;
    }
}
