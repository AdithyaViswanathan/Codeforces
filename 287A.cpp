#include<bits/stdc++.h>
using namespace std;
void solve()
{	string temp;
	vector<char>a[4];
	for(int i=0;i<4;i++)
	{	cin>>temp;
		for(int j=0;j<4;j++)
			a[i].push_back(temp[j]);
	}
	char tl,tr,bl,br;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{	int hash = 0;
			int dot = 0;
			tl = a[i][j];
			tr = a[i][j+1];
			bl = a[i+1][j];
			br = a[i+1][j+1];

			if(tl == '#')
				hash++;
			else
				dot++;

			if(tr == '#')
				hash++;
			else
				dot++;

			if(bl == '#')
				hash++;
			else
				dot++;

			if(br == '#')
				hash++;
			else
				dot++;

			if(hash == 4 || dot == 4)
			{
				cout<<"YES";return;
			}
			else if(hash == 3 || dot == 3)
			{
				cout<<"YES";return;
			}
		}
	}
	cout<<"NO";
}
int main()
{	
	long testcase = 1;
	//cin >> testcase ;
	while(testcase--)
		solve();
	return 0;
}