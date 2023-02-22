//swap 2 no without 3rd variable
#include <iostream>  
using namespace std;  
int main()  
{  
int x=5, y=10;      
cout<<"Before swap x= "<<x<<" y= "<<y<<endl;      
x=x*y;   
y=x/y;     
x=x/y;    
cout<<"After swap x= "<<x<<" y= "<<y<<endl;      
return 0;  
}  
