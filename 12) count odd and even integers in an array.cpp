// count odd and even integers in an array
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
    cout<<"Values are:";
    for(i=0;i<5;i++)
    {
    	cout<<arr[i]<<"\t";
	}
int count=0;
cout<<" Number of even integers ";
for(i=0;i<5;i++)
{
	if(arr[i]%2==0)
	{
	count++;
}
}
cout<<count;
count=0;
cout<<"\nNumbers of odd integers ";
for(i=0;i<5;i++)
{
if(arr[i]%2!=0)
{
	count++;
}
}
cout<<count;
}

	
	



