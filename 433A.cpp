#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n;
	ll temp;vector<ll>v(201,0);
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>temp,v[temp]++;
	if(v[200]!=0)
	{
		v[100]=v[100]-((v[200]%2)*2);
		if(v[100]<0)
		{
			cout<<"NO";
			return;
		}
		if(v[100]&1)
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES";
		}

	}
	else
	{
		if(v[100]&1)
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES";
		}
	}
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