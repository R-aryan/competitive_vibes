#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,q,i,c;
    cin>>n;
    stack<int>s;
    for(i=0;i<n;i++)
    {
    	cin>>q;
    	if(q==2)
    	{
    		cin>>c;
    		s.push(c);
    	}
    	else if(q==1)
    	{
    		if(s.empty())
    		cout<<"No Food \n";

    		else
    		{
    			cout<<s.top()<<"\n";
    			s.pop();
    		}
    	}

    }

    return 0;
}
