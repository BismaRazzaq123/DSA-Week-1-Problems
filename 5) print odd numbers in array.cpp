// print odd numbers in array
#include<iostream>
using namespace std;
int main()
{
	int arr[10],i;
	for(i=0;i<10;i++)
	{
		cout<<"Enter number"<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"Numbers are:";
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\nOdd numbers are:";
	for(i=0;i<10;i++)
	{
		if(arr[i]%2!=0)
		{
		cout<<arr[i]<<"\t";
	}
	}
	
}
