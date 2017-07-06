#include<bits/stdc++.h>
using namespace std;
long int a[110];
int binarySearch(int low,int high,int key)
{
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
   }
   return -1;                //key not found
 }
/*int main()
{

     cout<<"enter number of numbers u want to insert in integer the array \n";
    int i,n,b,c;cin>>n;
    cout<<"enter numbers in integer the array \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"enter number you want to search in integer array \n";
    cin>>b;
    c= binarySearch(0,n,b);
    if(c!= -1)
        cout<<"found";
    else
        cout<<"not Found";


} */


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,k,i,c,key;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];}
            cin>>k;
            key=a[k-1];
        sort(a,a+n);
        c= binarySearch(0,n,key)+1;
        cout<<c<<"\n";

    }
}

