#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	stack<long long> A;
	string s;
	getline(cin,s);
	long long temp = 0;
	for(int i=0;s[i]!='@';i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			temp = temp*10 + s[i]-'0';
		}
		else if(s[i]==' ')
		{
			A.push(temp);
			temp =0;
		}
		else 
		{
			long long  x=A.top();
			A.pop();
			long long  y=A.top();
			A.pop();
			if(s[i]=='+')
				A.push(x+y);
			else if(s[i]=='*')
				A.push(y*x);
			else if(s[i]=='-')
				A.push(y-x);
			else if(s[i]=='/')
				A.push(y/x);
		}
	} 
	cout<<A.top();
	
	return 0;
 } 
