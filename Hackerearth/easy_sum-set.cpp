#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
#include<string.h>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int n,m,i,j;
    cin>>n;
    int a[n],fr[100009]={0};
    
    for(i=0;i<n;i++)
    cin>>a[i];
    
    cin>>m;
    int c[m];
    for(i=0;i<m;i++)
    {
    	cin>>c[i];
    	fr[c[i]]=1;
	}
	sort(a,a+n);
	sort(c,c+m);
	
	int l=c[m-1]-a[n-1];
//	cout<<c[m-1]<<" "<<a[n-1]<<" "<<l<<endl;
	for(i=1;i<=l;i++)
	{	int tt=0;
		for(j=0;j<n;j++)
		{
			if(fr[a[j]+i]==0)
			{
				tt++;
				break;
			}
		}
		if(tt==0)
		cout<<i<<" ";
	}
}
