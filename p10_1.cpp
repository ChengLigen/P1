#include <iostream>
using namespace std;

int main10_1()
{
	float f1 = 3.1415926f;
	double d1 = 3.1415926;

	cout << "f1 = " << f1 << endl;
	cout << "d1 = " << d1 << endl;

	cout << "float占用空间：" << sizeof(float) << endl;
	cout << "double占用空间：" << sizeof(double) << endl;

	float f2 = 3e2;
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;
	cout << "f3 = " << f3 << endl;

	system("pause");
	return 0;
}