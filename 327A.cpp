/*
Iahub got bored, so he invented a game to be played on paper.

He writes n integers a 1, a 2, ..., a n. Each of those integers can be either 0 or 1. He's allowed to do exactly one move: he chooses two indices i and j (1 ≤ i ≤ j ≤ n) and flips all values a k for which their positions are in range [i, j] (that is i ≤ k ≤ j). Flip the value of x means to apply operation x = 1 - x.

The goal of the game is that after exactly one move to obtain the maximum number of ones. Write a program to solve the little game of Iahub.

Input
The first line of the input contains an integer n (1 ≤ n ≤ 100). In the second line of the input there are n integers: a 1, a 2, ..., a n. It is guaranteed that each of those n values is either 0 or 1.

Output
Print an integer — the maximal number of 1s that can be obtained after exactly one move.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,flag=1;
	cin>>n;
	vector<ll>a,b;
	ll c =0;
	ll temp =0;
	for(int i=0;i<n;i++)
	{	cin>>temp;
		a.push_back(temp);
		if(a[i]==1)
			c++;
	}
	for(int i=0;i<n;i++)
	{	ll front = i;
		for(int j=i;j<n;j++)
		{	
			
			ll end = j;
			temp = 0;
			
			for(int x = front;x<=end;x++)
				if(a[x]==1)temp -- ;
					else temp++;
			temp = max(c,c+temp);
			b.push_back(temp);
		}

	}
	temp =INT_MIN;
	for(int i=0;i<b.size();i++)
	{
		temp = max(temp,b[i]);
	}
	if(c==temp)temp--;	
	cout<<temp<<endl;
}
int main()
{	
	long testcase = 1;
//	cin >> testcase ;
	while(testcase--)
		solve();
	return 0;
}
