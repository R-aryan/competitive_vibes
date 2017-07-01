#include<bits/stdc++.h>
using namespace std;
bool check_prime(int n)
{
    int c=0,i;
    for(i=1;i*i<=n;++i)
    {
        if(n%i==0)
        {
            if(i*i==n)
                c+=1;
            else
                c+=2;
        }
    }
    if(c==2)
        return true;
    else
        return false;

}
int main()
{
    long int t,n,i,c=0;
    cin>>t;cout<<"\n";
    while(t--)
    {
        cin>>n;
        int ma = -1,b;vector<int>a;
        for(i=0;i<n;i++)
        {
            cin>>b;
            if(check_prime(b)==true){
            a.push_back(b);}
                cout<<"\n";
        }if(a.size()!=0){
        sort(a.rbegin(),a.rend());
        ma = a[0]*a[0];cout<<ma<<"\n";}
        else
            cout<<ma<<"\n";


    }
}
