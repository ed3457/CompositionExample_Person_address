#pragma once
#include <string>
#include <iostream>
using namespace std; 
class Address
{
private: 
	string streetName;
	string city;
	string zipCode; 

public:

	void setStreetName(string s);
	string getStreetName();

	void setCity(string c);
	string getCity();

	void setZipCode(string z);
	string getZipCode();

	Address();
	Address(string s, string c, string z); 

};

