/*
 * exercise2-23.cpp
 *
 *  Created on: Jul 6, 2015
 *      Author: hamed
 */

#include <iostream>

using namespace std;

int main()
{
	int n1, n2, n3, n4, n5;
	int max, min;

	cout << "Enter five integers (press enter to input each): ";
	cin >> n1;
	max = n1;
	min = n1;
	cin >> n2;
	if (n2 > max)
		max = n2;
	if (n2 < min)
		min = n2;
	cin >> n3;
	if (n3 > max)
		max = n3;
	if (n3 < min)
		min = n3;
	cin >> n4;
	if (n4 > max)
		max = n4;
	if (n4 < min)
		min = n4;
	cin >> n5;
	if (n5 > max)
		max = n5;
	if (n5 < min)
		min = n5;

	cout << "List of numbers entered:\n";
	cout << n1 << "\t" << n2 << "\t" <<
		n3 << "\t" << n4 << "\t" <<
		n5 << endl;
       cout << "Maximum number: " << max << endl;
       cout << "Minimum number: " << min << endl;

	return 0;
}



