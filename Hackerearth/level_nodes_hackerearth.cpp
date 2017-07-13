#include<bits/stdc++.h>
using namespace std;
vector<int> vec[100001];
queue<int> qu;
int main()
{
int N,tem;
//scanf("%d",&N);
cin>>N;
int visit[99999]={0},level[100000];
queue<int> qu;
for(int A=0;A<N-1;A++)
{
int X,Y;
//scanf("%d %d",&X,&Y);
cin>>X>>Y;
vec[X].push_back(Y);
vec[Y].push_back(X);
}
qu.push(1);
int fre[99999]={0};
level[1]=1;
visit[1]=1;
fre[1]++;
while(!qu.empty())
{
tem=qu.front();
//	cout<<tem<<endl;
qu.pop();
for(int B=0;B<vec[tem].size();B++)
{
if(visit[vec[tem][B]]==0)
{
visit[vec[tem][B]]=1;
//	cout<<vec[tem][B]<<endl;
qu.push(vec[tem][B]);
level[vec[tem][B]]=level[tem]+1;
fre[level[vec[tem][B]]]++;
}
}
}
int level_to;
cin>>level_to;
cout<<fre[level_to];
//scanf("%d",&level_to);
//printf("%d",fre[level_to]);
}
