#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,temp1,temp2;
	cin>>n;
	ll uo=0,lo=0,oe=0,eo=0;
	for(int i=0;i<n;i++)
	{
		cin>>temp1>>temp2;
		if(temp1&1){
			uo++;
			if(!(temp2&1))
				oe++;
			else
				lo++;
		}
		else if(temp2&1)
		{	lo++;
			eo++;
		}
	}
	if(uo&1)
	{
		if((oe>0 && lo&1) || (eo>0 && (lo&1)))
			cout<<1;
		else
			cout<<-1;
	}
	else if(lo&1)
	{
		if((eo>0 && uo&1) || (oe>0 && (uo&1)))
			cout<<1;
		else
			cout<<-1;

	}
	else
		cout<<0;
	return;
}

int main()
{	
	long testcase = 1;
	//cin >> testcase ;
	while(testcase--)
		solve();
	return 0;
}