// Merge two unsorted arrays of different length
#include<iostream>
using namespace std;
int main()
{
	int f[3],s[5],m[8],i;
	for(i=0;i<3;i++)
	{
	cout<<"Enter element of first array at index "<<i+1<<": ";
	cin>>f[i];
	m[i]=f[i];
    }
    for(i=0;i<5;i++)
    {
	cout<<"Enter element of second array at index "<<i+1<<": ";
	cin>>s[i];
	m[i+3]=s[i];
    }
   
    cout<<"Merge array is";
    for(i=0;i<8;i++)
    {
		cout<<m[i]<<"\t";
	}
    
	
	
}
