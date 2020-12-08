#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n,k;
	cin>>n>>k;
	vector<ll>v(n);
	vector<ll>sum(n,0);
	ll index = 0;
	for(auto&t:v)
	{	cin>>t;
		if(index==0)
			sum[index]=t;
		else
			sum[index]=sum[index-1]+t;
		index++;
	}
	vector<ll>l;
	for(int i=k-1;i<n;i++)
	{
		if(i==k-1)
			l.push_back(sum[i]);
		else
			l.push_back(sum[i]-sum[i-(k)]);
	}
	for(auto t:l)
		cout<<t<<" ";
	// cout<<a<<" "<<b;
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
