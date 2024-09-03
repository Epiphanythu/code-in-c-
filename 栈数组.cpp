#include<iostream>
#include<stack> 
#include<cstring>
using namespace std;
void reverse(char s[],int n)
{
	stack<char>c;
	for(int i=0;i<n;i++)
	{
		c.push(s[i]);
	}
	for(int i=0;i<n;i++)
	{
		s[i]=c.top();
		c.pop();
	}
}
int main()
{
	char s[51];
	cin>>s;
	int n =strlen(s);
	reverse(s,n);
	cout<<s;
	return 0;
 } 
