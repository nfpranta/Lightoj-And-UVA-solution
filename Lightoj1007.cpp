#include<bits/stdc++.h>
using namespace std;
#define M 5000000
int phi[M+3];
#define int unsigned long long int
int sum[M+3];
int calculatephi()
{
	int i,j,k;
	for(i=2;i<=M;i++) phi[i]=i;
	for(i=2;i<=M;i++)
	{
		if(phi[i]==i)
		{
			for(j=i;j<=M;j+=i)
			{
				phi[j]-=(phi[j])/i;
			}
		}
	}
}
int calculatesum()
{
	sum[1]=0;
	int i,j;
	for(i=2;i<=M;i++)
	{
		sum[i]=phi[i];
		sum[i]=sum[i]*sum[i];
		sum[i]+=sum[i-1];
	}
}
main()
{
	int test,i,j,a,b;
	calculatephi();
	calculatesum();
	cin>>test;
     for(i=1;i<=test;i++)
	{
		cin>>a>>b;
		cout<<"Case "<<i<<": "<<sum[b]-sum[a-1]<<endl;
	}
}
