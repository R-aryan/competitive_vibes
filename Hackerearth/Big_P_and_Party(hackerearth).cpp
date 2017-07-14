#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int a,b,x,y,temp,i;
    cin>>a>>b;
    vector<long int>adj[a];

    for(i=0;i<b;i++)
    {
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<long int>q;
    bool vis[a];
    long int luckiness[a];
    for(i=0;i<a;i++)
    {
        vis[i]=false;
        luckiness[i]=10000000;

    }

    q.push(0);
    vis[0]=true;
    luckiness[0]=0;

    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        for(i=0;i<adj[temp].size();i++)
        {
            if(vis[adj[temp][i]]==false)
            {
                q.push(adj[temp][i]);
                vis[adj[temp][i]]=true;
                 luckiness[adj[temp][i]]= luckiness[temp]+1;

            }
        }

    }

    for(i=1;i<a;i++)
    {
        if(luckiness[i]!=10000000)
            cout<<luckiness[i]<<"\n";
        else
            cout<<"-1 \n";
    }

}
