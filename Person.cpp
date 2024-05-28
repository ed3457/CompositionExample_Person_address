#include "Person.h"

void Person::setName(string n)
{
	name = n;
}

string Person::getName()
{
	return name;
}

void Person::setSSN(string s)
{
	ssn = s;
}

string Person::getSSN()
{
	return ssn;
}

void Person::setAddress(Address a)
{
	homeAddress = a; 
}

Address Person::getAddress()
{
	return homeAddress;
}
