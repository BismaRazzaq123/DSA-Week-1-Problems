// Sum of elements in given array
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
	cout<<"Enter number"<<i<<":";
	cin>>arr[i];
    }
    cout<<"Values are:";
    for(i=0;i<5;i++)
    {
    	cout<<arr[i]<<"\t";
	}
	int sum=arr[0];
	for(i=1;i<5;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"sum of array is:"<<sum;
	return 0;
}
