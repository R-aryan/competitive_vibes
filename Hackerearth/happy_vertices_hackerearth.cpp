#include <bits/stdc++.h>
using namespace std;
vector<int> v[100005];
bool mark[100001],check=false;
int nodes,edges,x,y,c=0;
//DFS
void dfs(int s)
{

mark[s]=true;
for(vector<int>::iterator it=v[s].begin();it!=v[s].end();++it)
{

if(mark[*it]==false)
{
if(check==false){if(v[*it].size()-1>v[s].size())c++;
check=true; }
else if(v[*it].size()>v[s].size())c++;
dfs(*it);
}
}
}
int main()
{
// cout << "Hello World!" << endl;
cin>>nodes>>edges;
memset(mark,false,sizeof(mark));
for(int i=0;i<edges;i++)
{
cin>>x>>y;
v[x].push_back(y);
v[y].push_back(x);
}
for(int i=1;i<=nodes;i++)
{
if(mark[i]==false)
dfs(i);
check=false;
}
cout<<c;
return 0;
}
