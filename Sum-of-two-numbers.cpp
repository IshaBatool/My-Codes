//Finding the sum of two numbers 

#include <iostream>
using namespace std;
int main()
{
	double num1, num2, sum=0;
	cout << "Enter the first number you want to add: ";
	cin >> num1;
	cout << "Enter the second number you want to add: ";
	cin >> num2;
	sum = num1 + num2;
	cout << endl;
	cout << "The sum of numbers is: " << sum;
		 
	return 0;
}