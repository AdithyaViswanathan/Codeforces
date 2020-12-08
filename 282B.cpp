#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n;
	ll A,G;
	ll tA=0,tG=0;
	string s="";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A>>G;
		if(((A+tA)-tG)<=500)
			s+="A",tA+=A;
		else
			s+="G",tG+=G;
	}
	cout<<s;
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