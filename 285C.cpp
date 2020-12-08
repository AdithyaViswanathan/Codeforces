#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
	ll n,temp;
	vector<ll>a;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>temp,a.push_back(temp);
	sort(a.begin(),a.end());
	temp = 0;
	for(int i=0;i<a.size();i++)
		temp += abs(a[i]-(i+1));
	cout<<temp;
}
int main()
{	
	long testcase = 1;
	//cin >> testcase ;
	while(testcase--)
		solve();
	return 0;
}