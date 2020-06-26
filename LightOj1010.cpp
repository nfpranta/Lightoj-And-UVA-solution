#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,ans;
    int row,col,ma;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>row>>col;
        cout << "Case " <<i<< ": " ;
        ans=row*col;
        if(row==1 || col==1)
        {
           cout<<max(row,col)<<endl;
          }
          else if(row==2 || col==2)
          {
              ma=max(row,col);
              ans=ma;
              if(ma%4==3 || ma%4 == 1 )
              {
                  ans++;
              }
              else if(ma%4 == 2) ans+=2;
              cout<<ans<<endl;
          }
          else if(ans%2==0)
          {
             cout<<ans/2<<endl;
          }
          else cout<<(ans/2)+1<<endl;
    }

}
