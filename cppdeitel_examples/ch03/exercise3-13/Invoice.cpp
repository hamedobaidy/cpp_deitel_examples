#include "Invoice.h"

Invoice::Invoice(string name, string description
		, int quantity, int unitPrice)
{
	setNumber(number);
	setDescription(description);
	setQuantity(quantity);
	setUnitPrice(unitPrice);
}

void Invoice::setNumber(string n)
{
	number = n;
}

string Invoice::getNumber()
{
	return number;
}

void Invoice::setDescription(string d)
{
	description = d;
}

string Invoice::getDescription()
{
	return description;
}

void Invoice::setQuantity(int q)
{
	if(q < 0)
		quantity = 0;
	else
		quantity = q;
}

int Invoice::getQuantity()
{
	return quantity;
}

void Invoice::setUnitPrice(int p)
{
	if(p < 0)
		unitPrice = 0;
	else
		unitPrice = p;
}

int Invoice::getUnitPrice()
{
	return unitPrice;
}

int Invoice::getInvoiceAmount() 
{
	return unitPrice * quantity;
}
