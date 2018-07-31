#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,s19=0,s20=0,s=0; cin>>n;
while(n--){
string a; getline(cin,a);
if(a[0]=='G'){
for(int i=0;i<a.length();i++){
int x=a[i]-'0',y=a[i+1]-'0';
if((x*10)+y ==19) s19+=2;
else if((x*10)+y ==20) s20+=2;
else if((x>=0 and x<=9) and ( y>=0 and y<=9 )) s+=2;
}
}
else if(a[0]=='M'){
for(int i=0;i<a.length();i++){
int x=a[i]-'0',y=a[i+1]-'0';
if((x*10)+y ==19) s19+=1;
else if((x*10)+y ==20) s20+=1;
else if((x>=0 and x<=9) and ( y>=0 and y<=9 )) s+=1;
}
}
}
if(s19==s20) cout<<"No Date";
else if(s19>s||s20>s) cout<<"Date";
else cout<<"No Date";
return 0;
}
