//find reverse of a number 
#include<iostream>
using namespace std;
int main()
{
    int num, rem, rev=0;
    cout<<"Enter the Number: ";
    cin>>num;
    CODESCRACKER:
    {
        rem = num%10;
        rev = (rev*10) + rem;
        num = num/10;
        if(num!=0)
            goto CODESCRACKER;
    }
	cout<<"\nReverse = "<<rev;
    cout<<endl;
    return 0;
}
