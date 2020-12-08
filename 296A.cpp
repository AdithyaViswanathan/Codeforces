#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n,temp;
	map<ll,ll>m;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>temp,m[temp]++;
	for(auto i:m)
	{
		if(i.second>(n+1)/2)
		{
			cout<<"NO";
			return;
		}
	}
	cout<<"YES";
	return;
}
int main()
{	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	long testcase = 1;
	//cin >> testcase ;
	while(testcase--)
		solve();
	return 0;
}