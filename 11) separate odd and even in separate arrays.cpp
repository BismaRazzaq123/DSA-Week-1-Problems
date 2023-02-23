// Separate odd and even integers in an array
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;
	for(i=0; i<5; i++)
	{
	cout<<"Enter number at index "<<i<<": ";
	cin>>arr[i];
    }
    cout<<"Values are:";
    for(i=0;i<5;i++)
    {
    	cout<<arr[i]<<"\t";
    }
    cout<<"The array of even integers ";
    for(i=0;i<5;i++)
    {
    if(arr[i]%2==0)
    {
    	cout<<arr[i]<<"\t";
	} 
}
	cout<<"\n The array of odd integers ";
	for(i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
		{
	cout<<arr[i]<<"\t";		
	}
}
}

