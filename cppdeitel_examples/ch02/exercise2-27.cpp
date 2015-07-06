#include <iostream>

using namespace std;

int main() 
{
	char c;
	cout << "Enter a single character: ";
	cin >> c;
	cout << "Value of " << c << " is " <<
		static_cast<int>(c) << endl;

	return 0;
}
