// Print all unique elements in array
#include<iostream>
using namespace std;
int main()
{
	
	int arr[5],i,j;
	for(i=0;i<5;i++)
	{
	cout<<"Enter number"<<i<<":";
	cin>>arr[i];
    }
    cout<<"Values are: ";
    for(i=0;i<5;i++)
    {
    	cout<<arr[i]<<"\t";
	}
	int count;
	cout<<"Unique Numbers : ";
	for(i=0;i<5;i++)
	{
		count=0;
		for(j=0;j<5;j++)
		{
	     if(i!=j)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
	}
		if(count==0)
		{
		cout<<arr[i]<<"\t";
}
	}
    
}
