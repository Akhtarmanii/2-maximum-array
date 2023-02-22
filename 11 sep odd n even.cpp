//separate odd and even num
#include<iostream>
using namespace std;
int main()
{
    int arr[10],even[10],odd[10];
    cout<<"Input numbers in the array";
    for(int i=0;i<10;i++)
        cin>>arr[i];
    for(int i=0;i<10;i++)
    {
            if(arr[i]%2==0)
              even[i++]=arr[i];
            else 
                odd[i++]=arr[i];
    }
    cout<<"The even numbers are: ";
    for(int i=0;i<10;i++)
        cout<<even[i]<<" ";
    cout<<"\nThe odd numbers are: ";
    for(int i=0;i<10;i++)
        cout<<odd[i]<<" ";
}
