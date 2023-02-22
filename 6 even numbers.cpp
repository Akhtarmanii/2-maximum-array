//print even no from array list
#include<iostream>
using namespace std;
int main()
{
	int num ,arr[10];
	cout<<"enter the ten num"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"enter value"<<i+1<<"=";
		cin>>arr[i];
	}
	for(int i=0;i<10;i++)
	{
		cout<<"the list of even num is:";
		for(int i=0;i<10;i++)
		{
			if(arr[i]%2==0)
			{
				cout<<arr[i]<<"/t";
			}
		}
	}
}
