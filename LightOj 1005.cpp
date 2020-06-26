#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long int
int dp[80][80];
int combination(int n,int r)
{
    if(n==r) return 1;
    if(r==1) return n;
    if(dp[n][r]!=-1) return dp[n][r];
    dp[n][r]=combination(n-1,r-1)+combination(n-1,r);
    return dp[n][r];
}
/*int a[100000];
int factorial(int n)
{
 if(n==0 || n==1) return 1;
  if(a[n]!=0) return a[n];
  else {
    a[n]=factorial(n-1)*n;
    return a[n];
  }
}
int permutation(int n,int r)
{
    return factorial(n)/factorial(n-r);
} */
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,i,j,t,r;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
//        memset(a,0,sizeof(a));
         cin>>n>>r;
      // scanf("%llu %llu",&n,&r);
        cout<<"Case "<<i<<": ";
        if(r>n)
        {
            cout<<0<<endl;
           // continue;
        }
        else if(r==0)
        {
            cout<<1<<endl;
        }
       else{
                int fact=1;
        for(j=n-r+1;j<=n;j++)
        {
            fact*=j;
        }
        int result=combination(n,r)*fact;
        cout<<result<<endl;
       }
    }
}
