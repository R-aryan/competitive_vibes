#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool mark[100000];
vector <int> v[100000];
int c=0;
void dfs(int s)
{
mark[s]=true;
for(vector<int>::iterator it=v[s].begin();it!=v[s].end();++it)
{
if(mark[*it]==false)dfs(*it);
}
}
int main()
{
memset(mark,false,sizeof(mark));
int nodes,edges,x,y,s;
cin>>nodes>>edges;
for(int i=1;i<=edges;i++)
{
cin>>x>>y;
v[x].push_back(y);
v[y].push_back(x);
}
cin>>s;
dfs(s);
for(int i=1;i<=nodes;i++)if(mark[i]==false)c++;
cout<<c;
return 0;
}
