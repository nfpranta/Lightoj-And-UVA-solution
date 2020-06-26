#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,t;
    string x;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>x;
        cout<<"Case "<<i<<": ";
        if(n%3==0) cout<<"Alice"<<endl;
        else if(n%3==1) cout<<"Bob"<<endl;
        else cout<<x<<endl;
    }
}
