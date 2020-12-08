/*Kuriyama Mirai has killed many monsters and got many (namely n) stones. She numbers the stones from 1 to n. The cost of the i-th stone is v i. Kuriyama Mirai wants to know something about these stones so she will ask you two kinds of questions:

She will tell you two numbers, l and r (1 ≤ l ≤ r ≤ n), and you should tell her .
Let u i be the cost of the i-th cheapest stone (the cost that will be on the i-th place if we arrange all the stone costs in non-decreasing order). This time she will tell you two numbers, l and r (1 ≤ l ≤ r ≤ n), and you should tell her .
For every question you should give the correct answer, or Kuriyama Mirai will say "fuyukai desu" and then become unhappy.

Input
The first line contains an integer n (1 ≤ n ≤ 105). The second line contains n integers: v 1, v 2, ..., v n (1 ≤ v i ≤ 109) — costs of the stones.

The third line contains an integer m (1 ≤ m ≤ 105) — the number of Kuriyama Mirai's questions. Then follow m lines, each line contains three integers type, l and r (1 ≤ l ≤ r ≤ n; 1 ≤ type ≤ 2), describing a question. If type equal to 1, then you should output the answer for the first question, else you should output the answer for the second one.

Output
Print m lines. Each line must contain an integer — the answer to Kuriyama Mirai's question. Print the answers to the questions in the order of input.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
	ll n,temp;
	vector<ll>v,u,type1,type2;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>temp,v.push_back(temp),u.push_back(temp);
	sort(u.begin(),u.end());
	type1.push_back(0);
	type2.push_back(0);
	type1.push_back(v[0]);
	type2.push_back(u[0]);
	for(int i=1;i<v.size();i++)
	{
		type1.push_back(type1[i]+v[i]);
		type2.push_back(type2[i]+u[i]);
	}
	ll m,type,l,r;
	cin>>m;

	while(m--)
	{	
		cin>>type>>l>>r;
		if(type==1)
		{	
			cout<<type1[r]-type1[l-1];
		}
		else
			cout<<type2[r]-type2[l-1];
		cout<<endl;
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