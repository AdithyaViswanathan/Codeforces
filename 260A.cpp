/*
Vasya has got two number: a and b. However, Vasya finds number a too short. So he decided to repeat the operation of lengthening number a n times.
One operation of lengthening a number means adding exactly one digit to the number (in the decimal notation) to the right provided that the resulting number is divisible by Vasya's number b. If it is impossible to obtain the number which is divisible by b, then the lengthening operation cannot be performed.
Your task is to help Vasya and print the number he can get after applying the lengthening operation to number a n times.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
	ll a,b,n;
	cin >> a >> b >> n;
	int i = 0;
	for(i=0;i<10;i++)
	{
		if((a*10+i)%b==0)
		{
			string s(n-1,'0');
			cout<<a*10+i<<s;
			i = 11;
			break;
		}
	}
	if(i!=11)
	{
		cout<<-1;
	}
}
int main()
{	
	long testcase = 1;
	//cin >> testcase ;
	while(testcase--)
		solve();
	return 0;
}