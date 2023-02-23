// Concatenate programs (11-19) using switch
#include<iostream>
using namespace std;
int main()
{
int s,z;
int A[s];
int Array[z];
int arr[5],i,j,n, count, temp;
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
cout<<"\nPress 11 for separate odd and even integers in separate arrays "<<endl;
cout<<"Press 12 for count odd and even integers in an array"<<endl; 
cout<<"Press 13 for sort elements in ascending order"<<endl;
cout<<"Press 14 for sort elements in descending order"<<endl;
cout<<"Press 15 for find second smallest element in the array"<<endl;
cout<<"Press 16 for find 2nd largest number in the array"<<endl;
cout<<"Press 17 to check that two arrays are same or not"<<endl;
cout<<"Press 18 to merge two unsorted arrays of diffeent lengths "<<endl;
cout<<"Press 19 to find maximum difference between two elements in array"<<endl;
cout<<"Enter a number from 11 to 19  ";
cin>>n;
switch(n)
{
case 11:
cout<<"The array of even integers ";
for(i=0;i<5;i++)
{
if(arr[i]%2==0)
{
cout<<arr[i]<<"\t";
} 
}
cout<<"\n The array of odd integers ";
for(i=0;i<5;i++)
{
if(arr[i]%2!=0)
{
cout<<arr[i]<<"\t";		
}
}
break;
case 12:
count=0;
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
break;
case 13:
cout<<"Values in ascending Order  ";
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
cout<<arr[i]<<"\t";
}
break;
case 14:
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
break;
case 15:
cout<<"The 2nd smallest number is ";		
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
cout<<arr[1];
break;
case 16:
cout<<"The 2nd largest number is ";
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
}
cout<<arr[1];
break;
case 17:
cout<<"Enter size of 1st array";
cin>>s;
for(i=0;i<s;i++)
{
cout<<"Enter number at index "<<i<<" of 1st array:";
cin>>A[i];
}
cout<<"Values of 1st array are:";
for(i=0;i<s;i++)
{
cout<<A[i]<<"\t";
}
cout<<"Enter size of 2nd array";
cin>>z;
bool flag;
if(s==z)
{
for(i=0;i<z;i++)
{
cout<<"\nEnter number at index"<<i<<" of 2nd array"<<":";
cin>>Array[i];
}
cout<<"Values of 2nd array are:";
for(i=0;i<z;i++)
{
cout<<A[i]<<"\t";
}	
if(A[s]==Array[z])
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
break;
case 18:	
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
break;
case 19:
int maxdif;
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
break;
default:
cout<<"Number is invalid:";
}
}
