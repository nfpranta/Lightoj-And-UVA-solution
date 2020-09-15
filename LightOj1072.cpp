#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int t,n,i,j;
    double r,R;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>R>>n;
        cout<<"Case "<<i<<": ";
        double c=pi/n;
        r=(R*sin(c))/(1+sin(c));
        cout<<fixed<<setprecision(7)<<r<<endl;
    }
}
