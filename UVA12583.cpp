#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,k,cnt=0,sum=0,z;
    string x;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        cin>>n>>k>>x;
        for(j=1;j<n;j++)
        {
            cnt=0;
            for(z=j-k;z<j;z++)
            {
                if(z<0) z=0;
                if(x[j]==x[z])
                {
                    cnt++;
                    break;
                }
            }
            if(cnt>0) sum++;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
}
