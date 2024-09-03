#include<iostream>
using namespace std;
struct  Node
{
	int data;
	Node *next;
} ;
Node * head =NULL ;
void insert(int x,int n )
{
	Node *temp = new Node;
	temp ->data =x;
	temp ->next =NULL;
	if(n==1)
	{
		temp->next =head;
		head =temp;
		return ;
	}
	Node *temp1 =head;
	for(int i=0;i<n-2;i++)
	{
		temp1=temp1->next;
	}
	temp->next =temp1->next;
	temp1->next = temp;
};
void deletenode(int n)
{
	Node *temp =head;
	if(n==1)
	//删除首段; 
	{
		head = temp ->next;
		delete temp;
		return ;
	}
	for(int i=0;i<n-2;i++)
	{
		temp=temp->next;
	}
	Node *temp1 =temp->next;
	temp->next = temp1->next;
	delete temp1;
};
void print()
{
	Node *temp =head;
	while(temp!=NULL)
	{
		cout<<temp->data<<' ';
		temp = temp->next;
	}
	cout<<endl;
};
//逆转链表 
void reverse()
{
	Node *temp = head,*next,*prev= NULL;
	while(temp!=NULL)
	{
		next =temp->next;
		temp->next = prev;
		prev = temp;
		temp = next;
	}
	head = prev;
}
//正向递归遍历
void  digui( struct Node * p )
{
	if(p ==NULL)
	{
		cout<<endl;
		return ;
	}
	cout<<p->data<<' ';
	digui(p->next);
 } ; 
int main ()
{
	insert(2,1);
	insert(3,2);
	insert(4,3);
	deletenode(1);
	print();
	return 0;
 } 
