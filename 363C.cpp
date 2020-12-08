#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	string g;
	int temp=1;
	int prev=0;
	g+=s[0];
	for(int i=1;i<s.length();i++)
	{	
		if(s[i]==s[i-1] && temp<2 && prev!=2)
		{
			g+=s[i];
			temp++;
		}
		else if(s[i]!=s[i-1]){
			g+=s[i];
			prev=temp;
			temp=1;
 
		}
 
	}
	cout<<g;
}