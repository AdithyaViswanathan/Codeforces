#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n,k,temp,mini=INT_MAX,ind=0;
	vector<ll>a,b;
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>temp,a.push_back(temp);
	temp = 0;
	for(int i=0;i<n;i++)
	{	
		if(i==0)
			b.push_back(a[i]);
		else
			b.push_back(a[i]+b[i-1]);
	}
	mini = b[k-1];
	for(int i=0;i<n-k;i++)
	{	
		temp = b[i+k]-b[i];
		// cout<<temp<<endl;
		mini = min(mini,temp);
		if(mini == temp)
			ind = i+1;
	}
	cout<<ind+1<<endl;
	
	
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