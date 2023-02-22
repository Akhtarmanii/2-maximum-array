//index location
#include<iostream>
using namespace std;
int main()
{
	int num ,arr[10];
	cout<<"enter the ten num"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"enter the value"<<i+1<<"=";
		cin>>arr[i];
	}
	for(int i=0;i<10;i++)
	{
		cout<<"enter the num you want to locate:"<<endl;
		cin>>num;
		for(int i=0;i<10;i++)
		{
			if(num==arr[i])
			{
				cout<<"num is located at index num"<<i;
			}
		}
	}
}
