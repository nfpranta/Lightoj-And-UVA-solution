#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i,x;
    cin>>n;
    int a[n+2];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>q;
    for(i=0;i<q;i++){
        cin>>x;
        auto r=lower_bound(a,a+n,x)-a-1;
        auto y=upper_bound(a,a+n,x)-a;
        if(r>=0 && y>=n){
            cout<<a[r]<<" "<<"X"<<endl;
        }
       else if(r>=0 && y<n && y>=0){
            cout<<a[r]<<" "<<a[y]<<endl;
        }
        else if(r<0 && y<n){
            cout<<"X"<<" "<<a[y]<<endl;
        }
        else {
            cout<<"X"<<" "<<"X"<<endl;
        }
    }
}
