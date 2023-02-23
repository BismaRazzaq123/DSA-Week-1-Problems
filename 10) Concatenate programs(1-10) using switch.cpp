// Concatenate programs (1-10) using switch
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,j,n;
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
    cout<<"\nPress 1 for minimum number"<<endl;
    cout<<"Press 2 for maximum number"<<endl; 
    cout<<"Press 3 for check that a number is present in array or not"<<endl;
    cout<<"Press 4 for how many times a number comes in list"<<endl;
    cout<<"Press 5 for odd numbers in array"<<endl;
    cout<<"Press 6 for even numbers in array"<<endl;
    cout<<"Press 7 for finding sum of array"<<endl;
    cout<<"Press 8 for reverse the array"<<endl;
    cout<<"Press 9 for display unique numbers"<<endl;
    cout<<"Enter a number from 1 to 9  ";
    cin>>n;
    switch(n)
    {
   	case 1:
   	int min;
	min=arr[0];
   	cout<<"Minimum value is ";
	for(i=0;i<5;i++)
	{
		if(min>arr[i])
		{
		min=arr[i];
	    }
	}
	cout<<min;
	break;
	case 2:
	int max;
	max=arr[1];
	for (i=1;i<5;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	cout<<"Maximum value is "<<max;  
	break;
	case 3:
	 int num;
    cout<<"\nEnter number to check whether it is present in array or not"<<endl;
    cin>>num;
    bool flag;
    for(i=0;i<5;i++)
    {
    	if(num==arr[i])
    	flag++;
	}
	if(flag==1)
	{
		cout<<"Number found";
	}
	else
	cout<<"Number not found";
	break;
	case 4:
	int count;
	count=0;
	cout<<"\nEnter a number ";
	cin>>num;
	for(i=0;i<5;i++)
	{
		if(num==arr[i])
		{
			count++;
		}
	}
    cout<<"The number comes:"<<count<<" time"<<endl;
     break;
     case 5:
    cout<<"\nOdd numbers are:";
	for(i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
		{
		cout<<arr[i]<<"\t";
	}
	}
	break;
	case 6:
	cout<<"\nEven numbers are: ";
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
		cout<<arr[i]<<"\t";
	}
	}
	break;
	case 7:
	int sum;
	sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"sum of array is:"<<sum;
	break;
	case 8:
	
		cout<<"Reverse elements are"<<"\t";
	for(i=4;i>=0;i--)
	{
		cout<<arr[i]<<"\t";
	}
	break;
	case 9:
	cout<<"Unique Number is ";
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
	break;
	default:
	cout<<"Number is invalid:";
    }
}
