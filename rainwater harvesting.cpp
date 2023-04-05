#include<iostream>
using namespace std;

int main()
{
	int heights[10000]={0,2,1,3,0,1,2,1,2,1};
	int n=10;
	int water=0;
	
	for(int i=1; i<n; i++)
	{
		int leftMax=0;
		int rightMax=0;
		
		int left=i;
		while(left>=0)
		{
			leftMax=max(heights[left],leftMax);
			left--;
		}
		int right=i;
		while(right<n)
		{
			rightMax=max(heights[left],rightMax);
			right--;
		}
		int curr=water+(min(leftMax,rightMax)-heights[i]);
		water +=curr;
	}
	cout<<water;
	return 0;
}

