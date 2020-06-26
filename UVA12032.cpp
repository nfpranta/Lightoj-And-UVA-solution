#include<bits/stdc++.h>
using namespace std;
 int a[1000000];
int main()
{
    int i,j,n,t,ma=1e-9,k;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
    for(j=1;j<=n;j++){
        cin>>a[j];
    }
    ma=1e-9;
    sort(a+1,a+n+1);
    int dif=-1;
    for(j=1;j<=n;j++){
            dif=a[j]-a[j-1];
    if(dif>ma) ma=dif;
    }
    k=ma;
      for ( int j=1;j<=n;j++ ) {
             dif=a[j]-a[j-1];
            if( dif==ma ) ma--;
            else if( dif>ma ) {
                    k++;
                   break;
            }
        }
cout<<"Case "<<i<<": "<<k<<endl;
}
}
