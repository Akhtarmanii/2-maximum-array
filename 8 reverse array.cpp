//program to reverse an array
#include<iostream>
using namespace std;
int main()
{
	int arr[10],i;
	cout<<"enter ten array elements:";
	for(int i=0;i<10;i++)
	cin>>arr[i];
	{
		cout<<"\n the original array is:\n";
		for(int i=0;i<10;i++)
		{
		     cout<<"\n\n the reverse of given array is:\n";
		     for(i=(10-1);i>=10;i--)
		     {
		     	cout<<arr[i]<<"="<<endl;
			 }
		}
	}
}
