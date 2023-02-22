//concatenate all program(1-9)using switch statement
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,opt;
	a=b=c=opt=0;
	{
		cout<<"programs menu";
		cout<<"\n---------";
		cout<<"\n1.minimum array";
		cout<<"\n2.maximum array";
		cout<<"\n3.index location";
		cout<<"\n4.repeated num";
		cout<<"\n5.odd num";
		cout<<"\n6.even numbers";
		cout<<"\n7.sum array";
		cout<<"\n8.reverse array";
		cout<<"\n9.unique element";
		cout<<"\n0.exit";
		
		cout<<"\n\n enter your option(1-9):";
		cin>>opt;
		
		switch(opt)
		{
			case 1:
				{
					cout<<"enter value of"<<"i+1"<<"=";
					cin>>"arr[i]";
					if(min>arr[i])
					min=arr[i];
				}
			case 2:
				{
					cout<<"the num in"<<i+1<<"=";
					cin>>arr[i];
					if(max<arr[i])
					max=arr[i];
				}
			case 3:
				{
					cout<<"enter value"<<i+1<<"=";
					cin>>arr[i];
					if(num==arr[i])
					cout<<"the num is located at index num"<<i;
				}
			case 4:
				{
					cout<<"enter thr num you want to check for repeatition";
					cin>>num;
					if(num==arr[i])
					count++;
				}
			case 5:
				{
					cout<<"list of odd num is:";
					for(int i=0;i<10;i++)
					if(arr[i]%2!=0)
					cout<<arr[i]<<"\t";
				}
			case 6:
				{
					cout<<"list of even num is:";
					for(int i=0;i<10;i++)
					if(arr[i]%2==0)
					cout<<arr[i]<<"\t";
				}
			case 7:
				{
					int arr[10],sum=0;
					cout<<"enter ten array elements";
					cin>>arr[i];
					sum=sum+arr[i];
					cout<<"\n sum of all array elements is:"<<endl;
				}
			case 8:
				{
					cout<<"\n the original array is:\n";
					for(int i=0;i<10;i++)
					cout<<"\n\n the reverseof a given array is:\n";
					for(i=(10-1);i>=10;i--)
	                cout<<arr[i]<<"="<<endl;
				}
			case 9:
				{
					cout<<"enter size of array:";
					cin>>size;
					cout<<"enter element in array:";
					for(i=0;i<size;i++)
				}
			case 0:exit()
		    default:cout<<"\n\n\n invalid option entered...";
		}
		cout<<"\n";
	}
}
