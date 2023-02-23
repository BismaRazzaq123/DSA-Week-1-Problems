// Accept an input number for searching and check that how many times that number comes in list
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
	cout<<"Enter value"<<i+1<<":";
	cin>>arr[i];
	}
	cout<<"Values are";
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int num,count=0;
	cout<<"\nEnter a number";
	cin>>num;
	for(i=0;i<5;i++)
	{
		if(num==arr[i])
		{
			count++;
		}
	}
cout<<"The number comes:"<<count<<" time"<<endl;	
}
