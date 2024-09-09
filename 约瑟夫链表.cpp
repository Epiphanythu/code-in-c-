#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
void code(int n,int k)
{
	Node *head,*p=NULL,*r=NULL;
	head=new Node;
	head->data=1;
	head->next=NULL;
	p=head;
	for(int i=2;i<=n;i++)
	{
		r =new Node;
		r->data = i;
		r->next =NULL;
		p->next=r;
		p=r;
	}
	p->next =head;
	p=head;
	while(p->next!= p)
	{
		for(int i=1;i<k;i++)
		{
			r=p;
			p=p->next;
		}
		cout<<p->data<<" ";
		r->next=p->next;
		p=p->next;
	}
	cout<<p->data;
}
int main()
{
	code(8,5);
	return 0;
}
