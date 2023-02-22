//find maximum no from an array of 10
#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"enter value of"<<i+1<<"=";
		cin>>arr[i];
	}
	cout<<"value of array are";
	for(int i=0;i<10;i++)
	cout<<arr[i]<<" ";
	
	int max=arr[0];
	for(int i=0;i<10;i++)
	{
		if(max<arr[i])
		max=arr[i];
		cout<<"maximum value is"<<max;
	}
}
