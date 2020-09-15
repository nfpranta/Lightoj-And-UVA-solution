#include<bits/stdc++.h>
using namespace std;
#define int long long int
//typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef vector<pii> vii;
// std::mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
#define shuf(v) shuffle(v.begin(),v.end(),rng)
#define vsort(v) sort(v.begin(),v.end())
#define sz(a) int((a).size())
#define Max 400005
#define mod 1000000007
#define INF 1e9+100
#define ff first
#define ss second
#define cy cout<<"yes"<<endl;
#define cn cout<<"no"<<endl;
#define urs(r...)             typename decay<decltype(r)>::type
#define fi(i,n)                  for(urs(n) i=0;i<n;i++)
#define rep(i,n)               for(urs(n) i=1;i<=n;i++)
#define pb push_back
#define gap ' '
#define endl '\n'
//#define mx 100008
#define what_is(x)              cerr << #x << " is " << x << endl;

#define bintotalones(x)         __builtin_popcountll(x)
#define binleadingzeroes(x)     __builtin_clzll(x)
#define bintrailingzeroes(x)    __builtin_ctzll(x)
int dx[5]={0,0,-1,1};
int dy[5]={1,-1,0,0};
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;*/
/*
 TIPS:
 1.) Check for corner cases (like 0 is exception case)
 2.) Check for global memory sizes,memory refreshments and its complexity
 3.) Check for sorting criteria (if used 1-based indexing) like don't use sort(a+1,a+n+1) if there is  a chance of
 4.) Check for numbers overflow (while multiplying and doing MOD)
 5.) Check for typecasting issues like int to float( while dividing numbers)
 6)  Check for increasing efficieny like flipping all the character upto a certain point through only flipping the first or last character to avoid reversing
 7)  Check for min,max and odd/even cases
 8)  Check for proper using of i,j in forloop
 9)  Check for the mx variable if it is set to -1 but negative value is allowed in the problem
 10)Check if we can do something upto taking the array upto n-1 except upto n and also check if we can something taking the array in reverse order and keeping the first element untouched
 11) Check if you are using | or & operator use bracket () since otherwise precedence error occur
12) Check if you are using ceil you use 1.0 multiplier to the numerator to remove error and activate the ceil funtion properly
13) Check if they is something cocerning 1,2 and 3 in cost minimization because 3=1*3=2*1+1
*/
//N%P=(N&(P-1)) where P is a power of 2
main()
{
    int t;
    cin>>t;
    rep(k,t)
    {
    	int n,width;
    	cin>>n>>width;
    	vector<int>v;
    	fi(i,n)
    	{
    		int x,y;
    		cin>>x>>y;
    		v.pb(y);
    	}
    	sort(v.begin(),v.end());//the brush moves along the x axis so in first test case in one move he sweeps all the dusts in y coordinates from 0 to 2
    	int w=v[0];//in second test case in one move he sweeps only dusts from 0 to 1 and in second move he sweeps all the dusts from 2 to 3 since width of brush is one less than previous
    	int ans=1;
    	for(int i=1;i<n;i++)
		{
			if(v[i]-w>width)
			{
				w=v[i];
				ans++;
			}
		}
		cout<<"Case "<<k<<": "<<ans<<endl;
    }
}
