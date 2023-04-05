#include<iostream>
using namespace std;

void update(int i)

{
	if(i==3){ return;}
	int a=10;
	int *ab=&a;
	cout<<a<<endl;
	//cout<<ab<<endl;
	cout<<&a<<endl;
	update(i+1);
	return;
}
int main(){
	update(0);
	return 0;
}
