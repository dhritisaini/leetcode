#include <bits/stdc++.h>
using namespace std;

vector <int> ar[10001];
int vis[10001];

void dfs(int n)
{
	vis[n]=1;
	for(int child: ar[n])
	{
		if(!vis[child])
			dfs(child);
	}
}
int main() {
	int n,m,a,b;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	}

	int cc=0;
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			dfs(i);
			cc++;
		}
	}
	cout<<cc;
}

