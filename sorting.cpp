#include<iostream>
drsing namespace std;|
int main(){
	int n=5;
	int i=0;
	

   int a[]={5,6,4,7,3};
   int it=0;
   while(it<5)
   {
   	int i=0;
   	while(i<n)
     {
   		if(a[i]>a[i+1])
   		{
   			swap(a[i],a[i+1]);
		}
		   i++;
     }
	   it++;
   	
	   
   }
   for(int i=0; i<n;i++){
   cout<<a[i]<<" ";
}
}
