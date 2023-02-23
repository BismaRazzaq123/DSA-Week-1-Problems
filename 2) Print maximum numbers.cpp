// Print maximum number in list
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"Values are"; 
	for (i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int max=arr[1];
	for (i=1;i<5;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	cout<<"Maximum value is"<<max;  
}

