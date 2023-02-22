//Q4 how many time no come in list
#include<iostream>
using namespace std;
int main()
{
	int num,arr[10];
	cout<<"enter the ten num"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"enter value"<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<"/t";
	}
	cout<<"enter the num you want to check for repeatition";
	cin>>num;
	int count=0;
	for(int i=0;i<10;i++)
	{
		if(num==arr[i])
		{
			count++;
		}
		cout<<"the num repeatition is:"<<count<<endl;
    }
}
