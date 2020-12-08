#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{	ll count=0;
	ll n;
	double c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			c = sqrt(i*i+j*j);
			if(c>n)continue;
			if(c == int(c))
			{
				if(i+j>c)
					count++;
			}
		}
	}
	cout<<count;
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