#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll getvalue(ll n)
{
    ll x=0;
    if(n<=100) return n*2;
    x+=100*2;
     if(n<=10000) return x+(n-100)*3;
     x+=(10000-100)*3;
      if(n<=1000000) return x+(n-10000)*5;
     x+=(1000000-10000)*5;
     return x+(n-1000000)*7;
}
int main()
{
    ll n,m,i,j,d,x,y;
    while(cin>>n>>m){
        if(n==0 && m==0) break;
        ll l=0,h=n,mid;
        while(l<=h){
            mid=(h+l)/2;
            d=getvalue(mid);
           if(d==n) break;
           else if(d>n) h=mid-1;
           else l=mid+1;
        }
        l=0,h=mid;
        ll value=mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            x=getvalue(mid);
            y=getvalue(value-mid);
            if(y-x==m){
                cout<<x<<endl;
            }
            if(x>y || y-x<m) h=mid-1;
            else l=mid+1;
        }
    }
}
