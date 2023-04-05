#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"No.of elements=";
	cin>>n;
	int a[n];
	cout<<"enter the no. of elements=";
	for(i=0;i<=n-1;i++){
		
		cin>>a[i];
	}
	int sum=0;
	int totalsum=INT_MIN;
	while(i<n){
	sum=a[i]+sum;
	if(sum<0){
		sum=0;
		totalsum=max(sum,totalsum);
}
i++;
}
    cout<<totalsum;
}
