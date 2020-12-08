#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll prime[100004]={0};
ll nearestprime[100004]={0};
void sieve()
{	
	// cout<<"HERE\n";
	prime[0]=1;
	prime[1]=1;
	for(int p=2;p*p<=100003;p++)
	{
		for(int j=p*p;j<=100003;j+=p)
		{
			if(!prime[j])
			{
				prime[j]=1;
			}
		}
	}
	ll nearest = 0;
	for(int i=100003;i>=0;i--)
	{
		if(!prime[i])
			nearest = i,nearestprime[i]=i;
		else
			nearestprime[i]=nearest;
	}

}
void solve()
{	sieve();
	ll n,m;
	cin>>n>>m;
	vector<vector<ll> >v;
	for(int i=0;i<n;i++)
	{
		vector<ll>temp(m);
		for(auto &t:temp)
			cin>>t;
		v.push_back(temp);
	}
	ll sum[n]={0};
	ll sum2[m]={0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(prime[v[i][j]])
			{
				sum[i] += (nearestprime[v[i][j]]-v[i][j]);
				sum2[j]+= (nearestprime[v[i][j]]-v[i][j]); 
			}				
		}
	}
	ll mini=INT_MAX;
	for(int i=0;i<n;i++)
		mini=min(mini,sum[i]);
	for(int i=0;i<m;i++)
		mini=min(mini,sum2[i]);
	cout<<mini;
}
int main()
{	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long testcase = 1;
	//cin >> testcase ;
	while(testcase--)
		solve();
	return 0;
}