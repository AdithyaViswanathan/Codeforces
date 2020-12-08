/*
Sereja and his friends went to a picnic. The guys had n soda bottles just for it. Sereja forgot the bottle opener as usual, so the guys had to come up with another way to open bottles.
Sereja knows that the i-th bottle is from brand a i, besides, you can use it to open other bottles of brand b i. You can use one bottle to open multiple other bottles. Sereja can open bottle with opened bottle or closed bottle.
Knowing this, Sereja wants to find out the number of bottles they've got that they won't be able to open in any way. Help him and find this number.
Input
The first line contains integer n (1 ≤ n ≤ 100) — the number of bottles. The next n lines contain the bottles' description. The i-th line contains two integers a i, b i (1 ≤ a i, b i ≤ 1000) — the description of the i-th bottle.
Output
In a single line print a single integer — the answer to the problem.

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{	
	ll n;
	ll a[100],b[100];
	cin >> n;

	ll x = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j] && i!=j)
			{
				x++;
				break;
			}
		}
	}
	cout<<n-x<<endl;

}
int main()
{	
	long testcase = 1;
	//cin >> testcase ;
	while(testcase--)
		solve();
	return 0;
}