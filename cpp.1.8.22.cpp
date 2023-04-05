#include<iostream>
using namespace std;

int digits(int x){
	int count=0;
	while(x>0)
	{
		count++;
		x/=10;
	}
	return count;
}

int main(){
	int a[]={93,984,62,9};
	int n=4;
	for(int i=0; i<n; i++)
	{
		bool isSwap=false;
		for(int j=0; j,n-i; j++)
		{
			int first=a[j];
			int second=a[j+1];
			
			int digitsFirst=digits(first);
			int digitsSecond=digits(second);
			
			int no1= first*pow(10,digitsSecond)+second;
			int no2= second*pow(10,digitsFirst)+first; 
			]\
			if(no1<no2)
			{
				swap(a[j],a[j+1]);
				isSwap=true;
			}
			
		}
		if(isSwap==false)break;
	}
	for(int i=0; i<n; i++)
	{
		cout<<a[i];
	}
	return 0;
}
