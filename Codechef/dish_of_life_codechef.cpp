#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    int t,n,k,l;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        l=k+1;
        int rec[l],i,tem,ing,coun=0,j,ma=0;
        memset(rec,0,sizeof(rec));
        for(i=0;i<n;i++)
        {
            cin>>tem;
            if(tem==k){
                ma=tem;
            }

            for(j=0;j<tem;j++)
            {
                cin>>ing;
                rec[ing]+=1;

            }
        }

        sort(rec+1,rec+l);
        if(rec[1]==0)
            cout<<"sad \n";

        else
            cout<<"some \n";



    }
}
