#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    int n,i,a,s=0;
    cin>>n;
    vector<int>b,c;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a%2==0)
        b.push_back(a);

        else
        c.push_back(a);
    }
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    for(i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
        s+=b[i];
    }
    cout<<s<<" ";
    s=0;

    for(i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
        s+=c[i];
    }
    cout<<s<<" ";
    return 0;
}
