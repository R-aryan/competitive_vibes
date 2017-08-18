#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    long int n,k,r,xi,yi,i;vector<long int>v,x,y;
    cin>>n>>k;
   // v.resize(n);
    for(i=0;i<n;i++){
        cin>>xi;
        x.push_back(xi);
        }
    for(i=0;i<n;i++)
    {
        cin>>yi;
        y.push_back(yi);

    }
    for(i=0;i<n;i++)
    {
       // cout<<"xi "<<x[i]<<"yi "<<y[i]<<"\n";

        r= x[i]*x[i] + y[i]*y[i];//cout<<r<<"\n";
        v.push_back(r);
    }
    sort(v.begin(),v.end());
    cout<<ceil(sqrt(v[k-1]));
    //cout << "Hello World!" << endl;
    return 0;
}
