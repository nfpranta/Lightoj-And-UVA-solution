#include<bits/stdc++.h>
using namespace std;
#define eps 1e-7
main()
{
    int i,k,j,t;
    double ab,ac,bc,ad,ratio;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>ab>>ac>>bc>>ratio;
        double s=(ab+ac+bc)/2;
        double ABC=sqrt(s*(s-ab)*(s-bc)*(s-ac));
        double low=0;
        double high=ab;
        while(high-low>eps)
        {
            double mid=(low+high)/2;
           double ae=(mid/ab)*(ac);
           double de=(mid/ab)*bc;
           double s1=ae+de+mid;
           s1/=2;
           double ADE=sqrt(s1*(s1-ae)*(s1-mid)*(s1-de));
           double BDEC=ABC-ADE;
           double temp=(ADE/BDEC);
           if(temp<ratio)
           {
               low=mid;
           }
           else {
            high=mid;
           }
        }
        cout<<"Case "<<i<<": "<<fixed<<setprecision(9)<<low<<endl;
    }
}
