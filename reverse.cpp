#include<iostream>
using namespace std;
int main(){
	int n,l,r;
	cout<<"enter the no.";
	cin>>n;
	while(n>0){
		l=n%10;//last digit rem aanda 
		r=r*10+l;
		n=n/10;// last digit gaayb krde aw
	}
	cout<<r;
	
	
}
