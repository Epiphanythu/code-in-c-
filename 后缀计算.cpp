#include<iostream>
#include<stack>
#include<cstring>

using namespace std;
int	cal(string s)
{
	stack<char>A;
	int len =s.size();
	for(int i =0;i<len;i++)
	{ 
		if(s[i]>='0'&&s[i]<='9')
		{
			//×ª»»×Ö·û¸ñÊ½£» 
			A.push(s[i]-'0');
		}
		else if(s[i]=='+')
		{
			int t1 =A.top();
			A.pop();
			int t2 =A.top();
			A.pop();
			A.push(t1+t2);
		}
		else if(s[i]=='-')
		{
			int t1 =A.top();
			A.pop();
			int t2 =A.top();
			A.pop();
			A.push(t1-t2);
		}
		else if(s[i]=='*')
		{
			int t1 =A.top();
			A.pop();
			int t2 =A.top();
			A.pop();
			A.push(t1*t2);
		}
		else if(s[i]=='/')
		{
			int t1 =A.top();
			A.pop();
			int t2 =A.top();
			A.pop();
			A.push(t1/t2);
		}
	}
	return A.top();
}
int main()

{
	string expression;
	cin>>expression;
	cout<<cal(expression);
	return 0;
 } 
