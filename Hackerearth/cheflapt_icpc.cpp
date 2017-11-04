#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,i,b;
    vector<int>a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>b;
        a.push_back(b);
    }
    sort(a.begin(),a.end());

    for(i=0;i<n;i++)
    {
        if(count(a.begin(),a.end(),a[i])==1){
            cout<<a[i]<<"\n";
            break;}

    }
    }


}
