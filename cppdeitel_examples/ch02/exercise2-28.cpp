#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter a five digit number: ";
	cin >> num;
	int d = num / 10000;
	num = num % 10000;
	cout << d << "\t";
	d = num / 1000;
	num = num % 1000;
	cout << d << "\t";
	d = num / 100;
	num = num % 100;
	cout << d << "\t";
	d = num / 10;
	num = num % 10;
	cout << d << "\t" << num << endl;

	return 0;
}
