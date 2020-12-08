#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n;
	cin>>n;
	ll index = 0;
	map<ll,ll>m;
	vector<ll>v(n);
	vector<ll>occ(100001,-1);
	for(auto &t:v)
		cin>>t;
	for(auto t:v){
		if(occ[t]==-1) //First Occ of the number... store the index 
			occ[t]=index,m[t]=0;
		else
		{
			if(m[t]==0) // Second occ of the number .. Store curr index - prev index 
			{	m[t]=index - occ[t];
				occ[t]=index; //Save the last occurence in occ
			}
			else if(m[t]!=-1) // More than one occ ... 
			{
				if(m[t] != index - occ[t]) //Check curr index - prev index equal to m[t] 
					m[t]=-1;
				else
					occ[t]=index; // if same update occ[t]
			}
		}
		index++;
	}
	ll cnt=0;
	for(auto i:m)
	{
		if(i.second!=-1)
			cnt++;
	}
	if(cnt>0){
		cout<<cnt<<endl;
		for(auto i:m)
		{
			if(i.second!=-1)
				cout<<i.first<<" "<<i.second<<endl;
		}
	}
	else
		cout<<0<<endl;
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