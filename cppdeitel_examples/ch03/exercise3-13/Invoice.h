#include <string>
using namespace std;

class Invoice
{
	public:
		Invoice(string, string, int, int);
		void setNumber(string);
		string getNumber();
		void setDescription(string);
		string getDescription();
		void setQuantity(int);
		int getQuantity();
		void setUnitPrice(int);
		int getUnitPrice();
		int getInvoiceAmount();
	private:
		string number;
		string description;
		int quantity;
		int unitPrice;
};
