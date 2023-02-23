// Accept an input number for searching and check that number is present in array or not
#include<iostream>
using namespace std;
int main()
{
	//input
	int i,arr[5];
    for(i=0; i<5; i++)
    {
    	cout<<"Enter Value"<<i+1<<":";
    	cin>>arr[i];
	}
	//show
	cout<<"values are ";
	for(i=0;i<5;i++)
	{
	cout<<arr[i]<<"\t";
    }
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
	return 0;
}
	
	

