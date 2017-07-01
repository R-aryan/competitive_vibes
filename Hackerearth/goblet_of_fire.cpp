#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
    queue<int>q,q1[5];
    int a,i,x,y;
    cin>>a;
    for(i=0;i<a;i++)
    {
        char c;
        cin>>c;
        if(c=='E')
        {
            cin>>x>>y;
            if(q1[x].size()==0)
        q.push(x);
        q1[x].push(y);
            }
        else
        {
        x = q.front();
        y = q1[x].front();
        q1[x].pop();
        if(q1[x].empty()) q.pop();
        cout<<x<<" "<<y<<"\n";
        }



    }
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n ;
scanf("%d",&n);
queue<int> q,q1[5];
for(int i=0;i<n;i++)
{
    int x , y ;
    char ch ;
    scanf("%s",&ch);
    if(ch=='E')
    {
        scanf("%d",&x);
        scanf("%d",&y);
if(q1[x].size()==0)
        q.push(x);
        q1[x].push(y);
    }
    else{
        x=q.front();
        y=q1[x].front();
        q1[x].pop();
        if(q1[x].empty())
        q.pop();
        cout<<x<<' ';
        cout<<y<<endl;
    }
}
    return 0 ;
}

*/
