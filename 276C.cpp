#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool comparison(pair<ll,ll>&a,pair<ll,ll>&b)
{
	return a.first>=b.first;
}
void solve()
{
	ll n, q, total = 0;

	cin>>n>>q;
	vector<ll>v(n);
	vector<ll>l(200002,0);
	vector<ll>r(200002,0);
	vector<ll>count(200002,0);

	for(auto &t:v)
		cin>>t;
	sort(v.begin(),v.end(),greater<int>());

	while(q--)
	{
		ll start;
		ll end;
		cin>>start>>end;
		l[start-1]++;
		r[end-1]++;
	}
	for(int i=0;i<n;i++)
	{	if(i==0)
			count[i]=l[i];
		else
			count[i]=count[i-1]+l[i]-r[i-1];
	}

	sort(count.begin(),count.begin()+n,greater<int>());
	
	for(int i=0;i<n;i++)
	{		total+=(v[i]*count[i]);
	}
	
	cout<<total;
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