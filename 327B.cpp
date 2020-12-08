#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v(10000000,1);
ll n;
void solve()
{
	
	cin >> n;
	for(int i=0;i<n;i++)cout<<i+n*10<<" "; 
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