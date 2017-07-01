#include<bits/stdc++.h>
using namespace std;

int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}

int main()
{

    long int l,r,g,i,j,c=0;
    cin>>l>>r>>g;
    for(i=l;i<=r;i++)
    {
        for(j=l;j<=r;j++)
        {
            int f= GCD(i,j);
            if(f==g)
                c++;
        }
    }
    cout<<c;
}
