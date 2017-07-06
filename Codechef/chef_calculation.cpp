#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    int t;
   //cout<<"enter no of test cases \n";
    cin>>t;
    while(t--)
    {
        int c,i,j,ty[101],sc,type[101][101],l,ma=0,temp;
        //cout<<"enter no of people \n";
        cin>>c;set<int>a;set<int>b;
        for(i=0;i<c;i++)
        {
           // cout<<"enter no of cookies \n";
            cin>>ty[i];sc=ty[i];
            for(j=0;j<ty[i];j++)
            {
                cin>>type[i][j];
                a.insert(type[i][j]);

                }
                l= a.size();
               // cout<<"size of data set is "<<l<<"\n";
                if(l>=4)
                {
                if(l==6)
                    sc+=4;
                else if(l==4)
                    sc+=1;
                else if(l==5)
                    sc+=2;
              // cout<<"final score is"<<sc<<"\n";
                }
                b.insert(sc);
                a.clear();

                if(sc>ma)
                {
                    ma=sc;
                    temp= i;
                }

                }
                //cout<<"size of score set is"<<b.size()<<"\n";
               if(b.size()==1)
                    cout<<"tie"<<"\n";
               else
               {
                   if(temp==0)
                    cout<<"chef"<<"\n";
                   else
                    cout<<temp+1<<"\n";
               }
               b.clear();
    }
}
