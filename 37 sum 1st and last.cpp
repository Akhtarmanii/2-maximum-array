//find sum or first and last digit
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num, sum;
	cout << "Enter a number: " << endl;
	cin >> num;
	int lastDigit = num % 10;
	int firstDigit;
	for (firstDigit = num; firstDigit > 10; firstDigit = firstDigit / 10);
	sum = firstDigit + lastDigit;
	cout << "The sum of the first and the last digits of " << num << " is : " << sum<< endl;
	return 0;
}

