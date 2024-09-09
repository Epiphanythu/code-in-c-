#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[101]={};
	int cnt =0,i=0,k=0;
	while(cnt!=n)
	{
		i++;
		if(i>n)
			i= i%n;
		if(a[i]==0)
		{
			k++;
			if(k==m)
			{
				cout<<i<<" ";
				a[i]=1;
				k=0;
				cnt++;
			}
		}
	}
	return 0;
}
