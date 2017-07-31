#include <iostream>
using namespace std;

bool checkprime(int N){
        int count = 0;
        for( int i = 1;i <= N;++i )
            if( N % i == 0 )
                count++;
        if(count == 2)
            return true;
        else
            return false;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    //cout << "Hello World!" << endl;
    int i,j,n,co=0,top,bottom,right,left,s,to,le,ri,bo;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        s=0;
         top=i-1;bottom=i+1;left=j-1;right=j+1;
         //s+=a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1];
         to=le=ri=bo=0;
         if(top>=0)
         to=a[top][j];

         if(left>=0)
         le=a[i][left];

         if(bottom!=n)
         bo=a[bottom][j];

         if(right!=n)
         ri=a[i][right];

         s+=to+le+bo+ri;
         if(checkprime(s)==true)
         co+=1;


           }
        }

        cout<<co<<endl;


    return 0;
}
