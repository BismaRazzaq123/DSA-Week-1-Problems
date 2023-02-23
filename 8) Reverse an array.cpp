// Reverse an array
#include<iostream>
using namespace std;
int main()
{
    int arr[5],i;
    	for(i=0;i<5;i++) 
	{
		cout<<"Enter number"<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"Numbers are:";
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
		cout<<"Reverse elements are"<<"\t";
	for(i=4;i>=0;i--)
	{
		cout<<arr[i]<<"\t";
	}
	
	
}
