#include <iostream>
#include "Invoice.h"
using namespace std;

int main()
{
	Invoice invoice("#00012",
			"Product1",
			10, 100);
	cout << "Invoice amout: " <<
		invoice.getInvoiceAmount() << endl;

	return 0;
}
