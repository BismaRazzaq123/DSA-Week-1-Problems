// sort elements in descending order
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,j,temp;
	for(i=0; i<5; i++)
	{
	cout<<"Enter number at "<<i<<": ";
	cin>>arr[i];
    }
    cout<<"Values are:";
    for(i=0;i<5;i++)
    {
    	cout<<arr[i]<<"\t";
    }
    cout<<"Values in decending Order  ";
    for(i=0; i<5; i++)
    {
    	for(j=i+1; j<5; j++)
    	{
    		if(arr[i]<arr[j])
    		{
    			temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
			}
		}
		cout<<arr[i]<<"\t";
	}
    
    
}
