#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    double a,b,c,d,ans;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a>>b>>c>>d;
        d=d/(d+1);
       cout<<"Case "<<i<<": "<<fixed<<setprecision(7)<<a*sqrt(d)<<endl;
    }
}
