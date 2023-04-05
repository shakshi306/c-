#include<iostream>
using namespace std;
int main(){
	int i=1, t1=0, t2=1,n=0,k;
	cout<<"enter the no.";
	cin>>n;
	for(i=1;i<=n;i++){
		if(i==1){
			cout<<t1<<" ";
		}
		if(i==2){
			cout<<t2<<" ";
		}
		k=t1+t2;
		t1=t2;
		t2=k;
		cout<<k<<" ";
	}
	return 0;
}
