// find maximum difference between two elements in an array
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,j,temp, maxdif;
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
    for(i=0; i<5; i++)
    {
    	for(j=i+1; j<5; j++)
    	{
    		if(arr[i]>arr[j])
    		{
    			temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
			}
		}
	}
		maxdif=arr[4]-arr[0];
		cout<<"Maximum Difference is "<<maxdif;
	
    
    
}
