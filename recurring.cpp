#include<iostream>
using namespace std;
int sumofN(int n, int sum){
	if(n==0){
		return sum;
	}
	sum+=n;
	int a=sumofN(n-1,sum);
	cout<<a;
}

int main(){
int n;
int sum=0;
cin>>n;
//return sumofN(n,sum);
return sumofN(n-1)+(n);

}
