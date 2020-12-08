#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	string s;
	ll nodd=0;
	cin>>s;
	map<char,ll>m;
	for(int i=0;s[i];i++)
	{
		if(m[s[i]]&1)
			nodd--;
		else
			nodd++;

		m[s[i]]++;
	}
	if(nodd&1 || nodd==0)
		cout<<"First";
	else
		cout<<"Second";
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