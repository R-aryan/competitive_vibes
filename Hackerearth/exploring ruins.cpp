#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int l,i;l= s.size();
	//cout<<l;
	
	
	for(i=0;i<l;i++)
	{
		if(s[i]=='?')
		{
			
			if(s[i-1]=='a')
			s[i]='b';
			
			
			else if(s[i-1]=='b')
			s[i]='a';
			
		}
	}
	cout<<s;
}
