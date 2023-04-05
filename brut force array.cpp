#include<iostream>
using namespace std;
int main(){
char ch[1000];
int n;
cin>>n;
cin.ignore();
cin.getline(ch,n);
cout<<ch;
}



