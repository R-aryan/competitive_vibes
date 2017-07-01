#include<iostream>
using namespace std;

int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}


int main()
{

long long i,t, m,n,first, second, next, a[1000002];  ]
first=0; 
second=1; 

cin>>t;
while(t--)
{
	cin>>m>>n;
	for(i=0;i<n;i++) 
{ 
 //cout<<first<<"  ";
 if(first< 100000007)
 a[i]=first;
 else
 a[i] = first%100000007; 
 next=first+second;
 first=second;
 second=next; 
}
	int g;
	g= GCD(a[m],a[n]);
	cout<<g<<"\n";
}
 
} 
