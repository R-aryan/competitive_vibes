#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int val[1005];
vector<int>adj[1005];
bool cmp(int u,int v){
if(val[u]!=val[v])
    return val[u]>val[v];
    return u>v;
}

int main()
{
    //cout << "Hello World!" << endl;
    int n,m,k,i,x,y,va;
    cin>>n>>m>>k;



    for(i=1;i<=n;i++)
    {
        cin>>val[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }

    for(i=1;i<=n;i++)
    {
        if(adj[i].size()<k)
        {
            cout<<"-1 \n";continue;
        }

        sort(adj[i].begin(),adj[i].end(),cmp);
        cout<<adj[i][k-1]<<"\n";
    }

    return 0;
}
