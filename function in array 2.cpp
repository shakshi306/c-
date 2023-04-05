#include<iostream>
using namespace std;

int main()
{
	int a[10000]={1,2,3,4,5};
	int b[10000]={6,7,8,9,10};
	
	int n=5, m=5;
	for(int i=n; i<(n+m); i++)
	{
		a[i]=b[i-m];
	}
	for(int i=0; i<(n+m); i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
