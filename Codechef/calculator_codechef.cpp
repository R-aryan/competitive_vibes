#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
   long long int t;
    cin>>t;
    while(t--)
    {
       long long int n,b,ans,y;
        cin>>n>>b;
        y=n/2;
        y=y-(y%b);
        ans=0;
        while(y<=(n/2))
        {
            ans=max(ans,(n-y)*(y/b));
            y+=b;
        }
        ans=max(ans,(n-y)*(y/b));
        cout<<ans<<"\n";
    }
}
