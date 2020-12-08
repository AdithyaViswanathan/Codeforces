#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n,k,sum=0;
	string s;
	cin>>n>>k;
	cin>>s;
	ll abc[26]={0};
	for(int i=0;s[i];i++)
	{
		abc[int(s[i])-65]++;
	}
	sort(abc,abc+26,greater<ll>());
	for(int i=0;i<26;i++)
	{	if(k<=0)break;
		if(abc[i]>k)
		{
			sum+=(k*k);
			k-=abc[i];
		}
		else if(abc[i]<=k)
		{
			sum+=abc[i]*abc[i];
			k-=abc[i];
		}
	}
	cout<<sum;
}
int main()
{	
	long testcase = 1;
	while(testcase--)
		solve();
	return 0;
}