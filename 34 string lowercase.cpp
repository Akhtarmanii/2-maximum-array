//convert a string to lower case
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[50];
    int len;
    cout<<"Enter the Character/String: ";
    gets(str);
    len = strlen(str);
    if(len==1)
        cout<<"\nLowercase of Given Character: "<<strlwr(str);
    else
        cout<<"\nLowercase of Given String: "<<strlwr(str);
    cout<<endl;
    return 0;
}
