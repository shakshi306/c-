#include<iostream>
using namespace std;
int rear=0;
push(int ele, int*arr){
	arr[rear]=ele;
	rear++;
}
pop(int*arr){
	if(rear==0){
		cout<<"Empty";
	}
	else{
		rear--;
		cout<<"deleted"<<arr[rear];
	}
}
top(int*arr){
	if(rear==-1){sw
		cout<<"empty";
	}
	else{
		cout<<arr[rear];
	}
}
int main(){
    int arr[] = { 10, 20, 30, 40};
    
return 0;
}
