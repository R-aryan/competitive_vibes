#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,a,r[100];
    cin>>t;cout<<"\n";
    while(t--)
    {
        cin>>n;int c=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            r[i]= a%10;

        }
        sort(r,r+n);
        for(i=0;i<n;i++)
        {
            if(r[i]==r[i+1])
                c+=1;
        }
        cout<<c<<"\n";

    }
}
