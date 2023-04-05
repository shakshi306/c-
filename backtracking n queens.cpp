#include<iostream>
using namespace std
bool issafe(arr,row,col){
	int i=row; 
	int j=col;
	while(i>=0 and j>=0){
		if(arr[i][j]==1){
			return false;
		}
	zif(arr[i][col]==1){
			return false;
		}
	}
}
N-Queens(int arr[],int row,n){
	if(row==n){
		
		print(arr);
		return true;
	}
	for(int j=0;j<n;j++){
		if(issafe(  )){
			arr[row][j]=1;
			if(NQueens (arr,row+1,n)){
				return true;
			}
			arr[row][j]=0;
		}
	}
	return false;
}
int main(){
	
}
