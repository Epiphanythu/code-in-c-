#include<iostream>
using namespace std;
struct  Node
{
	int data;
	Node *next;
	Node *prev; 
} ;
Node *head =NULL; 
void insertnode(int x)
{
	Node *temp =new Node;
	temp->data =x;
	temp ->next =NULL;
	temp ->prev =NULL;
	if(head ==NULL)
	{
		head =temp;
		return;
	}
	head ->prev =temp;
	//¶àÀí½â; 
	temp->next =head;
	head =temp;
};
void print()
{
	while(head!=NULL)
	{
		cout<<head->data<<' ';
		head=head->next;
	}
	cout<<endl;
}
int main ()
{
	insertnode(1);
	insertnode(2);
	insertnode(3);
	print();
	return 0;
 } 
