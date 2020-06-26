#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[1007];
ll n;
ll m;
bool getvalue(int l)
{
    int i,ans=1;
    int v=0;
    for(i=0;i<n;i++)
    {
        if(v+a[i]<=l){
            v+=a[i];
        }
        else {
                  ans++;
               v=a[i];
        }
    }
    if(ans>m) return false;
    else return true;
}
int binarysearch(int n,int ma)
{
    int l=ma,mid,ans;
    int h=n;
    while(l<=h)
    {
        mid=(l+h)/2;
        bool v=getvalue(mid);
      if(getvalue(mid))
      {
          ans=mid;
          h=mid-1;
      }
      else
      {
          l=mid+1;
      }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,j,d;
    ll ma=0;
   while(cin>>n>>m){
            ma=0;
            ll sum=0;
        for(j=0;j<n;j++){
            cin>>a[j];
          sum+=a[j];
          if(a[j]>ma) ma=a[j];
        }
        ll v=binarysearch(sum,ma);
        printf("%d\n",v);
    }
}

