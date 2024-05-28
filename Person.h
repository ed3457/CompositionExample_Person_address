#pragma once
#include "Address.h"
class Person
{
private:
	string name; 
	string ssn;
	Address homeAddress; // composition 

public:

	void setName(string n);
	string getName();

	void setSSN(string s);
	string getSSN();

	void setAddress(Address a);
	Address getAddress(); 




};

