/*
Little penguin Polo has an n × m matrix, consisting of integers. Let's index the matrix rows from 1 to n from top to bottom and let's index the columns from 1 to m from left to right. Let's represent the matrix element on the intersection of row i and column j as a ij.

In one move the penguin can add or subtract number d from some matrix element. Find the minimum number of moves needed to make all matrix elements equal. If the described plan is impossible to carry out, say so.

Input
The first line contains three integers n, m and d (1 ≤ n, m ≤ 100, 1 ≤ d ≤ 104) — the matrix sizes and the d parameter. Next n lines contain the matrix: the j-th integer in the i-th row is the matrix element a ij (1 ≤ a ij ≤ 104).

Output
In a single line print a single integer — the minimum number of moves the penguin needs to make all matrix elements equal. If that is impossible, print "-1" (without the quotes).
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{	vector<ll>v;
	ll m,n,d;
	cin>>m>>n>>d;
	ll a[100][100];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j],v.push_back(a[i][j]);
	ll ans=0;
	int mod = v[0]%d;
	sort(v.begin(),v.end());
	ll flag = 1;
	if(m==1 && n==1)
	{
		cout<<0<<endl;
		return;
	}
	for(int i=0;i<m*n;i++)
	{
		if(v[i]%d != mod)
		{
			flag = 0;
		}
	}
	if(flag==0)
	{
		ans = -1;
	}
	else
	{
		ll median = 0;
		if(m*n % 2 ==0)
		{
			median = v[m*n/2];
		}
		else
			median = (v[(m*n-1)/2]+v[(m*n)/2])/2;
		for(int i=0;i<m*n;i++)
		{
			ans+=abs(median-v[i])/d;
		}

	}
	cout<<ans;

}
int main()
{	
	long testcase = 1;
	//cin >> testcase ;
	while(testcase--)
		solve();
	return 0;
}