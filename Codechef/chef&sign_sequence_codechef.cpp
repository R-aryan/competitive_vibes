#include<bits/stdc++.h>


using namespace std;

int main()
{
    long int t,l,i;
    cin>>t;
    string s,s1;
    while(t--)
    {
        cin>>s;
        l=s.length();long int j=0,coun=0,ma=0;
        char b[100006]="",comp;

        for(i=0;i<l;i++)
        {
            if(s[i]!='=')
            {
                b[j]=s[i];j+=1;
            }


        }
        //cout<<b;
        l=j;
        if(l!=0)
        {
            i=0;
            while(i<j)
            {
                comp=b[i];
                i++;
                coun=1;

                while(i<l&&b[i]==comp)
                {
                    coun++;
                    i++;

                }
                ma=ma>coun?ma:coun;
            }
        }
        cout<<ma+1<<"\n";
        //s1=b;l=s1.length();

}
}
