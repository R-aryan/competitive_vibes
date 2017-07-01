#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,x,i,k=0,a[100005];
    cin>>n>>x;
    queue<long int>q;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        q.push(i);
    }

    while(k<x)
    {
        long int maxx= -1,maxi,ar[x+1],j=0,s;
        s=q.size();
        for(i=0;i<min(x,s);i++)
        {
            ar[i]=q.front();
            q.pop();
            if(a[ar[i]]>maxx)
            {
                maxx= a[ar[i]];
                maxi=ar[i];
            }
        }
        cout<<maxi+1<<" ";
        for(i=0;i<min(x,s);i++)
        {
            if(ar[i]==maxi)
                continue;
            else
            {
                if(a[ar[i]])
                    a[ar[i]]--;
                q.push(ar[i]);
            }
        }


        k++;
    }
}
