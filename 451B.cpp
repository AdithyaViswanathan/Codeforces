/*
Being a programmer, you like arrays a lot. For your birthday, your friends have given you an array a consisting of n distinct integers.

Unfortunately, the size of a is too small. You want a bigger array! Your friends agree to give you a bigger array, but only if you are able to answer the following question correctly: is it possible to sort the array a (in increasing order) by reversing exactly one segment of a? See definitions of segment and reversing in the notes.

Input
The first line of the input contains an integer n (1 ≤ n ≤ 105) — the size of array a.

The second line contains n distinct space-separated integers: a[1], a[2], ..., a[n] (1 ≤ a[i] ≤ 109).

Output
Print "yes" or "no" (without quotes), depending on the answer.

If your answer is "yes", then also print two space-separated integers denoting start and end (start must not be greater than end) indices of the segment to be reversed. If there are multiple ways of selecting these indices, print any of them.
*/

/*
Mistake I did...
I did not read the question properly...
It said I had to reverse an entire segment..
But I was reversing only the last and first numbers alone
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n=0;
ll flag = 0;
vector<ll>a;
ll p,fI=-1,sI=-1,c=1;
void asc()
{
	for(int i=1 ;i<a.size();i++)
	{
		if(a[i-1]>a[i])
			c=0;
	}
	if(c)
		cout<<"yes"<<endl<<min(fI,sI)+1<<" "<<max(sI,fI)+1;
	else
		cout<<"no"<<endl;

}
void solve()
{	cin>>n;
	ll temp;
	for(int i=0;i<n;i++){
	cin>>temp;
	a.push_back(temp);
	}

	if(n==1){

		fI=0,sI=0;
		asc();
		return;
	}

	for(int i=1;i<n;i++)
	{	
		p = a[i-1];
		if(p>a[i] && flag==0)
			flag=1,fI=i-1,sI=i-1;
		else if(flag == 1 && p<a[i])
		{	sI=i-1;
			reverse(a.begin()+fI,a.begin()+sI+1);
			asc();
			return;
		}
		if(i==n-1)
		{	if(fI==-1)
				fI=i;
			sI = i;
			reverse(a.begin()+fI,a.begin()+sI+1);
			asc();
			return;
		}
	}
	asc();
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