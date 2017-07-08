#include<bits/stdc++.h>
#include<cstring>
#include<string>

using namespace std;

int main()
{
    istream& ignore (streamsize n = 1, int delim = EOF);

    int t,i,l;cin>>t;cin.ignore();
    string a,b,ci;char ch;
    while(t--)
    {
        b=' ';int co=0;

        //cout<<"enter your name \n";
        getline(cin,a);
        l=a.length();
        for(i=0;i<l;i++)
        {
            a[i]=tolower(a[i]);
        }
        //cout<<"after conversion "<<a<<"\n";
        //cout<<"your name is \n"<<a<<"\n";
        //cin.ignore();
        int c= count(a.begin(),a.end(),' ');
        //cout<<"no of spsce is "<<c<<"\n";
        if(c==0)
        {
            a[0]=toupper(a[0]);
            cout<<a<<"\n";
        }
        else if(c==1)
        {
           int in= a.find(b);//cout<<"position of index is "<<in;
           a[in+1]=toupper(a[in+1]);a[0]=toupper(a[0]);
           cout<<a[0]<<". ";ci=a.substr(in+1,l);cout<<ci<<"\n";
        }

        else if(c==2)
        {

            int in= a.find(b);//cout<<"position of index is "<<in<<"\n";
             int inf= a.rfind(b);//cout<<"last position of index is "<<inf<<"\n";
           a[in+1]=toupper(a[in+1]);a[0]=toupper(a[0]);a[inf+1]=toupper(a[inf+1]);
           cout<<a[0]<<". "<<a[in+1]<<". ";ci=a.substr(inf+1,l);cout<<ci<<"\n";

        }


        }
        }
