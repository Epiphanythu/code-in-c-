#include<iostream>
using namespace std;
const int N = 10;
int A[N];
int front =-1,rear = -1;
bool Emptyquene()
{
	if(front == rear&&rear ==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Fullquene()
{
	return (rear+1)% N ==front ? true : false;
}
void Enquene(int x)
{
	if(Fullquene())
	{
		cout<<"Sorry,it's full."<<endl;
		return ;
	}
	else if(Emptyquene())
	{
		rear ++;
		front =rear;
	}
	else
	{
		rear = (rear +1)%N;
	}
	A[rear] =x; 
}
void Dequene()
{
	if(Emptyquene())
	{
		cout<<"Sorry,it's empty."<<endl;
		return ;
	}
	else if(front == rear)
	{
		front =-1;
		rear =front;
	}
	else
	{
		front = (front +1)%N;
	}
}
int Front ()
{
	if(front ==-1)
	{
		cout<<"Error: cannot return front from empty queue."<<endl;
		return -1;
	}
	else
	{
		return A[front];
	}
}
void Print()
{
	int count =(rear +N -front)% N +1;
	for(int i=0;i<count;i++)
	{
		int index = (front +i)% N;
		cout<<A[index]<<" ";
	}
	cout<<endl;
}
int main()
{
	Enquene(1);
	Enquene(2);
	Enquene(1);
	Enquene(45);
	Enquene(6);
	Dequene(); 
	Print();
	return 0;
	
 } 
