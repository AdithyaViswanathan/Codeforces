#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	string a;
	string b;
	cin>>a>>b;
	if(a==b){
		cout<<"YES";return;}
	if(a.length()!=b.length()){
		cout<<"NO";return;
	}
	ll flag1=0,flag2=0;
	for(int i=0;a[i];i++)
	{
		if(a[i]=='1')
			flag1=1;
		if(b[i]=='1')
			flag2=1;
		if(flag1 && flag2)
		{
			cout<<"YES";
			return;
		}
	}
	cout<<"NO";
	return;
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