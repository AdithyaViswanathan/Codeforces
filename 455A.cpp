#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n;
	cin>>n;
	map<ll,ll>m;
	ll maxi=INT_MIN;
	vector<ll>v(n);
	vector<ll>cnt(100001,0);
	for(auto &t:v)
		cin>>t,cnt[t]++,maxi=max(maxi,t);
	vector<ll>sum(maxi+2,0);
	ll index = 0;
	ll maxi2=INT_MIN;
	for(index=0;index<=maxi;index++)
	{	if(index==0)
			sum[0]=cnt[0];
		else if(index==1)
			sum[1]=max(cnt[index]*1,sum[index-1]);
		else
			sum[index]=max(sum[index-2]+cnt[index]*index,sum[index-1]);
		maxi2 = max(maxi2,sum[index]);
	}
	cout<<maxi2;
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