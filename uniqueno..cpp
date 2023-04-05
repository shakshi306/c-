#include<iostream>
using namespace std;
int main(){
	int N,i, no , ans=0;
	cin>>N;
	for(i=0; i<N ; i++){
		cin>>no;
		ans = ans^no;
	}
	cout<<"unique no : "<<ans;
	cout<<endl;
	return 0;
	
}
