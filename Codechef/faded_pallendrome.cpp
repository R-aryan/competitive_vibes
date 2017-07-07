#include<bits/stdc++.h>
using namespace std;
bool pallendrome(string s,int e)
{
    string c;
    int i;
    for(i=e-1;i>=0;i--)
    {
        c=c+s[i];
    }
    if(c==s)
        return true;
    else
        return false;
}
int main()
{
int t;
cin>>t;
cout<<"\n";
while(t--)
{
    string s,e,b=""; int l,c,d;
    cin>>s;
    l=s.length();
    if(s[l/2]=='.'&& l%2!=0)
    {
        s[l/2]='a';
        if(count(s.begin(),s.end(),'.')==1){

            if(pallendrome(s,l))
                cout<<s<<"\n";
                }
                else
                {
                    c=0;d=l-1;
        while(c!=l/2)
        {
            if(s[c]=='.'&&s[d]=='.')
            {
                s[c]='a';s[d]='a';b+="a";
            }
            else if(s[c]=='.'&&s[d]!='.'){
                s[c]=s[d];b+=s[d];}
            else if(s[d]=='.'&&s[c]!='.'){
                s[d]=s[c];b+=s[c];}

            c+=1;d-=1;
        }
        if(pallendrome(s,l))
        cout<<s<<"\n";
        else
            cout<<"-1"<<"\n";
                }

    }
    else
    {
        c=0;d=l-1;
        while(c!=l/2)
        {
            if(s[c]=='.'&&s[d]=='.')
            {
                s[c]='a';s[d]='a';b+="a";
            }
            else if(s[c]=='.'&&s[d]!='.'){
                s[c]=s[d];b+=s[d];}
            else if(s[d]=='.'&&s[c]!='.'){
                s[d]=s[c];b+=s[c];}

            c+=1;d-=1;
        }
        if(pallendrome(s,l))
        cout<<s<<"\n";
        else
            cout<<"-1"<<"\n";
    }


}
}
