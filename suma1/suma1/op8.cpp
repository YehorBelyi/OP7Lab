#include <iostream>
using namespace std;

float math(float a, float b) {
	float sum;
	sum = a + b;
	return sum;
}

int main()
{

	float num1, num2;
	cout << "Input a = ";
	cin >> num1;

	cout << "Input b = ";
	cin >> num2;

	cout << "Result = " << math(num1,num2);
}

