#include <iostream>
using namespace std;

int main17_1()
{
	int num1 = 100.0;
	float num2 = 3.14;

	double num3 = 0.5;
	double num4 = 0.25;

	int num5 = 10;
	int num6 = 0;
	double num7 = 22.7;



	cout << typeid(num1).name() << endl;
	cout << typeid(num2).name() << endl;

	cout << num3 / num4 << endl;
	cout << typeid(num3 / num4).name() << endl;

	//cout << num5 % num6 << endl;
	//cout << num7 % num5 << endl;



	system("pause");
	return 0;
}