// wheck no is palimdrome or not 
#include<iostream>
using namespace std;  
int main()
{
    int num, temp, rev = 0, digit;
    cout << "Enter a number \n";
    cin  >> num;
    temp = num;  
    while (temp > 0) 
	{
        
        digit = temp % 10;   
        rev  = rev * 10 + digit; 
        temp = temp / 10; 
    }
   
    if ( num == rev) 
	{
        cout << num << " is a palindrome number";
    } else 
	{
        cout << num << " is not a palindrome number";
    }
               
    return 0;     
}
