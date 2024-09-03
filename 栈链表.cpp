#include<iostream>
#include<stack>
using namespace std;
struct Node
{
	int data;
	Node *next;
}; 
Node *head =NULL;
void reverse()
{
	if(head ==NULL)		return ;
	stack<Node *> S;
	Node *temp = head;
	while(temp != NULL)
	{
		S.push(temp);
		temp = temp->next;
	}
	temp = S.top();
	head =temp;
	S.pop();
	while(!S.empty())
	{
		temp->next =S.top();
		S.pop();
		temp = temp ->next;	
	} 
	temp ->next =NULL; 
}
int main()
{
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		Node * temp = new Node;
		temp ->data =x;
		temp->next =head;
		head =temp;
	}
	reverse();
	Node *temp =head;
	while(temp !=NULL)
	{
		cout<<temp ->data;
		temp =temp ->next;
	}
	return 0;
}
