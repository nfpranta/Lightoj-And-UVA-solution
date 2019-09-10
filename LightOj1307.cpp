#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,n,i,j,t,k,cnt,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        int a[n+2];
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        cnt=0;
        ans=0;
        int m=0;
        sort(a,a+n);
        for(j=0;j<n;j++){
            for(k=j+1;k<n-1;k++){
                    cnt=a[j]+a[k];
                ans=lower_bound(a,a+n,cnt)-a;
                m+=ans-k-1;
                  cout<<cnt<<" "<<ans<<" "<<m<<" "<<endl;
            }
        }
        cout<<"Case "<<i<<": "<<m<<endl;
    }
}
