#include <iostream>
using namespace std;
int main()
{
int num1 = 0;
int num2 = 0;
int num3 = 0;
cout << "escreva um numero";
cin  >> num1;
cout << "escreva um numero";
cin  >> num2;
cout << "escreva um numero";
cin  >> num3;

	if (num1 > num2 && num1 > num3) {
		cout << num1 << "é maior";
		
	} else if (num2 > num3 && num1 > num1) {
		cout << num2 << "é maior";
	} else if (num3 > num2 && num3 > num1) {
		cout << num3 << "é maior";
	} 


}
