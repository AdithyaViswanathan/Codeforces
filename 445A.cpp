#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<char>mat[1001];
vector<ll>adj[10001];
vector<bool>visited(10001,false);
char color='W';
ll n,m;
void dfs(int s)
{	
	// cout<<s<<endl;
	visited[s] = true;
	ll row = int(s/m);
	ll col = s%m;
	if(mat[row][col]=='.')
	mat[row][col]=color;

	for(int i=0;i<adj[s].size();i++)
	{
		if(!visited[adj[s][i]])
		{	
			
			if(mat[row][col]=='W')
				color='B';
			else if(mat[row][col]=='B')
				color='W';
			dfs(adj[s][i]);
		}
	}
}
void solve()
{

	cin>>n>>m;
	char temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>temp;
			mat[i].push_back(temp);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(mat[i][j]=='.')
			{	
				if(i>0)
				{	
					 if(mat[i-1][j]=='.')
					 {	
					 	// cout<<(i-1)*m+j<<" <----> "<<(i*m)+j;
					 	adj[(i-1)*m+j].push_back((i*m)+j);
					 	adj[(i*m)+j].push_back((i-1)*m+j);
					 }
				}
				// cout<<endl;
				if(j>0)
				{
					if(mat[i][j-1]=='.')
					 {	
					 	// cout<<(i)*m+j<<" <----> "<<(i*m)+(j-1);
					 	adj[(i)*m+j].push_back((i*m)+(j-1));
					 	adj[(i*m)+(j-1)].push_back((i)*m+j);
					 }	
				}
				// cout<<endl;	

			}
		}
		
	}
	// for(int i=0;i<n*m;i++)
	// {
	// 	for(int j=0;j<adj[i].size();j++)
	// 		cout<<i<<" ---> " <<adj[i][j]<<" ";
	// 	cout<<endl;
	// }
	for(int i=0;i<n*m;i++)
	{	color='W';
		if(!visited[i])
			dfs(i);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<mat[i][j];
		}
		cout<<endl;
	}
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