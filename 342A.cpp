#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	
	map<ll,ll> m;
	ll n;
	cin>>n;
	string s="";
	ll temp;
	vector<ll>v;
	for(int i=0;i<n;i++){
		cin>>temp;m[temp]++;
		if((m[temp]>(n/3)) || temp == 7 || temp == 5){cout<<-1;return;}
	}
	// for(auto i:m)
	// 	cout<<i.first<<" "<<i.second<<endl;
	for(int i=0;i<(n/3);i++)
	{	ll flag = 1;
		if(m[1])
			s+="1 ",flag=1,m[1]--;
		else{
			cout<<-1;
			return;
		}
		if(m[2] || m[3])
		{
			if(m[2]){
				s+="2 ";flag=2;m[2]--;
			}
			else{
				s+="3 ";flag=3;m[3]--;
			}
		}
		else
		{
			cout<<-1;
			return;
		}
		if(m[4] || m[6])
		{
			if(flag == 2 && m[4])
			{	s+="4 ";m[4]--;
			}
			else if(flag == 2 && m[6])
			{
				s+="6 ";
				m[6]--;
			}
			else if(flag ==3 && m[6]==0)
			{
				cout<<-1;
				return;
			}
			else {
				s+="6 ";m[6]--;
			}
		}
		else
		{
			cout<<-1;
			return;
		}
		s+="\n";
	}
	cout<<s;

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