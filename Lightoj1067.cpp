#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000003
int fact[1000000];
int Mod(int v,int p)
{
    if(p==0) return 1;
    if(p%2==0)
    {
        int n=Mod(v,p/2);
        return ((n%mod)*(n%mod))%mod;
    }
    else
    {
        return ((v%mod)*Mod(v,p-1))%mod;
    }
}
main()
{
	int i,j,m,n;
	int t;
	int cas=1;
	fact[0]=1;
	for(i=1;i<=1000000;i++)
	{
		fact[i]=(fact[i-1]%mod*(i%mod))%mod;
	}
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int ses=(fact[n-m]*fact[m])%mod;
		int ans=Mod(ses,mod-2);
		 ses=(fact[n]*ans)%mod;
		cout<<"Case "<<cas<<": "<<ses<<endl;
		cas++;
	}
}
