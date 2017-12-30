#include<bits/stdc++.h>
#define ll long long
#define MAX 50000
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define IOS ios::sync_with_stdio(false)
#define vi vector < ll >
#define pb push_back
#define mod 1000000007
#define MIN -50000
using namespace std;
ll dp[105][5005];
vi a;
int main()
{
    ll t;
    cin>>t;
    rep(z,0,t)
    {
        ll n;
        cin>>n;
        a.clear();
        a.pb(0);
        ll s=0;
        rep(i,1,n+1)
          {
              ll k;
              cin>>k;
              a.pb(k);
              s+=k;
          }

        if(s%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }

        rep(i,0,105)
            rep(j,0,5005)
                dp[i][j]=0;
        rep(i,1,n+1)
            rep(j,1,s/2+1)
            {
                dp[i][j]=dp[i-1][j];
                if(j>=a[i])
                    dp[i][j]=max(dp[i][j],dp[i-1][j-a[i]]+a[i]);
            }

        if(dp[n][s/2]==s/2)
            cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}
