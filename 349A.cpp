#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,temp;
	cin>>n;
	vector<ll>a;
	map<ll,ll>m;
	for(int i=0;i<n;i++)
	{	cin>>temp,a.push_back(temp);
		if(a[i]>25){
			if(a[i]==50)
			{	
				if(m[25]==0)
				{
					cout<<"NO";
					return;
				}
				else
				{	m[25]--;
				}
				m[50]++;
			}
			else if(a[i]==100)
			{
				if(m[50]>=1 && m[25]>=1)
				{
					m[50]--;
					m[25]--;
				}
				else if(m[25]>=3)
				{
					m[25]-=3;
				}
				else
				{
					cout<<"NO";
					return;
				}
				m[100]++;
			}
		}
		else
		{	m[25]++;
		}
	}
	cout<<"YES";
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