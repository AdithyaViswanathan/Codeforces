#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll search(vector<ll>sum,ll start,ll end,ll flag)
{
	if(flag<0)
		return INT_MAX;
	ll mid = start+(end-start)/2;
	while(start<=end)
	{	mid = start+(end-start)/2;
		
		if(flag < sum[mid])
			end = mid - 1;
		else if(flag > sum[mid])
			start = mid + 1;
		else return mid;


	}
	return end+1;
}
void solve()
{
	ll n,t;
	cin>>n>>t;
	vector<ll>v(n);
	vector<ll>sum(n);
	sum.push_back(0);
	for(int i=0;i<v.size();i++)
	{	cin>>v[i];
		sum[i+1]=sum[i]+v[i];
	
	}

	// for(auto t:sum)	
	// 	cout<<t<<" ";cout<<endl;

	// cout<<"SAVE :-- "<<save;

	ll index = 0,start = index,end = 0;
	ll maxi = INT_MIN;
	for(int i=1;i<sum.size();i++)
	{	
		if(sum[i]>=t){
			start = 0;
			end = i;
			ll pos = search(sum,start,end,sum[i]-t);
			maxi = max(maxi,end-pos);
		}

	}
	cout<<maxi;
	
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