#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i,j,a[10004],b[10003],cas=1,x;
    while(1){
        cin>>n>>q;
        if(!n && !q){
            break;
        }
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<"CASE# "<<cas<<":"<<endl;
        for(i=0;i<q;i++){
        cin>>x;
        j=binary_search(a,a+n,x);
        auto r=lower_bound(a,a+n,x)-a;
        if(j!=1){
            cout<<x<<" not found"<<endl;
        }
        else {
            cout<<x<<" found at "<<r+1<<endl;
        }
        }
        cas++;
    }
}
