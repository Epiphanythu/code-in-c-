#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
bool arepare(char s,char exp)
{
	if(s=='('&&exp==')')	return true;
	else if(s=='{'&&exp=='}')	return true;
	else if(s=='['&&exp==']')	return true;
	return false;
}
bool areparetheses(string exp,int len)
{
	stack<char>S;
	for(int i=0;i<len;i++)
	{
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
			S.push(exp[i]);
		else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
		{
			if(S.empty()||!arepare(S.top(),exp[i]))
				return false;
			else 
				S.pop();
		}
	}
	return S.empty() ? true : false;
}
int main()
{
	string expression;
	cin>>expression;
	int len = expression.size();
	if(areparetheses(expression,len))
		cout<<"OK"<<endl;
	else
		cout<<"Wrong"<<endl; 
	return 0;
 } 
