#include<iostream>
using namespace std;
int main(){
//	int rows;
    char input, alphabet= 'A';
	cout<<"enter a char.";
	cin>>input;
	
	for(int i=1; i<=input-('A'+1); ++i){
		for(int j=1; j<=i; ++j)
		{
			cout<<alphabet <<" ";
		}
		++alphabet;
		cout<<endl;
	}
	return 0;
}
