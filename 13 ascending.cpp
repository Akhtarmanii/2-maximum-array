//element of array in ascending order
#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int size, i, j, temp;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: ";
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}
