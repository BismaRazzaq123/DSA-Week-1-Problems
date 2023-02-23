// Check that arrays are same or not
#include<iostream>
using namespace std;
int main()
{
	int i,s;
	cout<<"Enter size of 1st array";
	cin>>s;
	int arr[s];
	for(i=0;i<s;i++)
	{
	cout<<"Enter number at index "<<i<<" of 1st array:";
	cin>>arr[i];
    }
    cout<<"Values of 1st array are:";
    for(i=0;i<s;i++)
    {
    	cout<<arr[i]<<"\t";
	}
	int z;
	int A[z];
	cout<<"Enter size of 2nd array";
	cin>>z;
	bool flag;
	if(s==z)
	{
	for(i=0;i<z;i++)
	{
	cout<<"\nEnter number at index"<<i<<" of 2nd array"<<":";
	cin>>arr[i];
    }
    cout<<"Values of 2nd array are:";
    for(i=0;i<z;i++)
    {
    	cout<<arr[i]<<"\t";
	}	
	if(arr[s]==A[z])
	//	cout<<"Arrays are same";
	{
		flag++;
	}
		
    }
	else
	{
	
	flag=0;
}
   //	cout<<"Arrays are not same";
	if(flag>=1)
	{
		cout<<"Arrays are  same";
	}
	else
	{
	
	cout<<"Arrays are not same";
	}
}

	

	
