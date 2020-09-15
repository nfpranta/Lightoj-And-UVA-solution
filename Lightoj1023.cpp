#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define INF 1e9+100
#define pair<int,int> pii
#define ff first
#define ss second
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define FOR(i,n) for(i=0;i<n;i++)
#define REP(i,n) for(i=1;i<=n;i++)
#define pb push_back
main()
{
    int t,n,k,i;
	cin>>t;
	int cas=1;
	while(t--)
	{
		cin>>n>>k;
		string x;
		for(i=0;i<n;i++)
		{
			x+=('A'+i);
		}
		int j=1;
		cout<<"Case "<<cas++<<":"<<endl;
		do
		{
			cout<<x<<endl;
			j++;
		} while(next_permutation(x.begin(),x.end()) and j<=k);
	}
}
