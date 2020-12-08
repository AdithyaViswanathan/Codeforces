#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll t,sx,sy,ex,ey;
	cin>>t>>sx>>sy>>ex>>ey;
	ll top2bottom = ex-sx;
	ll left2right = ey-sy;
	ll total = abs(top2bottom)+abs(left2right);
	ll time = 0,cnt=0;
	map<char,ll>m;
	if(top2bottom > 0)
		m['E']=top2bottom;
	else
		m['W']=top2bottom;
	if(left2right>0)
		m['N']=left2right;
	else
		m['S']=left2right;
	for(int i=0;i<t;i++)
	{	char dir;
		cin>>dir;
		if(m[dir])
			cnt++,m[dir]--,time++;
		else
			time++;
		if(cnt==total)
			break;
	}
	if(cnt!=total)
		cout<<-1;
	else
		cout<<time;
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