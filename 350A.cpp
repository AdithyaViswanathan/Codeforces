#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool comp(ll a,ll b)
{
	return a<b;
}
void solve()
{
	ll n,m,temp,maxA=0,minA=INT_MAX,minB=INT_MAX;
	vector<ll>a,b;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>temp,a.push_back(temp),maxA = max(maxA,a[i]),minA = min(minA,a[i]);
	for(int i=0;i<m;i++)
		cin>>temp,b.push_back(temp),minB = min(minB,b[i]);
	maxA = max(minA*2,maxA);
	if(maxA>=minB)
		cout<<-1;
	else
		cout<<maxA;
		

	
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