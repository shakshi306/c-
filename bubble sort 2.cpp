#include<iostream>
using namespace std;
int main()
{

	int numb[8];
	int i, j;
	for(i=0;i<=7;i++)
	{
		
		cout<<"please enter the no.";
		cin>>numb[i];
		
	}
	for(i=0;i<=7;i++){
		for(j=i+1;j<=8;j++)
		{
			int temp;
			if(numb[i] > numb[j])
			{
				temp = numb[i];
				numb[i] = numb[j];
				numb[j] = temp;
			}
		}
	}
	for(i=0;i<=7;i++)
	{
		cout<<numb[i]<<endl;
	}
	return 0;
	
}
	
