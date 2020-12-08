/*
Sereja has an array a, consisting of n integers a 1, a 2, ..., a n. The boy cannot sit and do nothing, he decided to study an array. Sereja took a piece of paper and wrote out m integers l 1, l 2, ..., l m (1 ≤ l i ≤ n). For each number l i he wants to know how many distinct numbers are staying on the positions l i, l i + 1, ..., n. Formally, he want to find the number of distinct numbers among a l i, a l i + 1, ..., a n.?

Sereja wrote out the necessary array elements but the array was so large and the boy was so pressed for time. Help him, find the answer for the described question for each l i.

Input
The first line contains two integers n and m (1 ≤ n, m ≤ 105). The second line contains n integers a 1, a 2, ..., a n (1 ≤ a i ≤ 105) — the array elements.

Next m lines contain integers l 1, l 2, ..., l m. The i-th line contains integer l i (1 ≤ l i ≤ n).

Output
Print m lines — on the i-th line print the answer to the number l i.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m;
	map<ll,ll>ma;
	cin>>n>>m;
	vector<ll>a,l,b;
	ll temp;
	for(int i=0;i<n;i++)
		cin>>temp,a.push_back(temp);
	for(int i=0;i<m;i++)
		cin>>temp,l.push_back(temp);
	int j =1 ;
	b.push_back(0);
	for(int i=n-1;i>=0;i--)
	{
		if(ma[a[i]]==0)
			b.push_back(b[j-1]+1);
		else
			b.push_back(b[j-1]);
		ma[a[i]]++;
		j++;
	}
	b.erase(b.begin());
	reverse(b.begin(),b.end());
	for(int i=0;i<l.size();i++)
		cout<<b[l[i]-1]<<endl;
}
int main()
{	
	long testcase = 1;
	//cin >> testcase ;
	while(testcase--)
		solve();
	return 0;
}