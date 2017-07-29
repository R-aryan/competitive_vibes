#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    //cout << "Hello World!" << endl;
    long int t,n,i,in,r,sm,smin,co,ri;
    cin>>t;
    while(t--)
    {
        sm=smin=co=0;
        vector<long int>a,b;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>in;
            a.push_back(in);b.push_back(in);
        }
        sort(a.rbegin(),a.rend());
        sort(b.begin(),b.end());
        for(i=0;i<n/2;i++)
        {
            r=a[i]-b[i];
            //cout<<"contents of a are "<<a[i]<<"\n";
             //cout<<"contents of b are "<<b[i]<<"\n";
             ri= a[co]-a[co+1];
             smin+=ri;co+=2;


            sm+=r;

        }
        cout<<smin<<" "<<sm<<"\n";

    }
    return 0;
}
