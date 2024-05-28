#include "Address.h"

void Address::setStreetName(string s)
{
	streetName = s;
}

string Address::getStreetName()
{
	return streetName;
}

void Address::setCity(string c)
{
	city = c;
}

string Address::getCity()
{
	return city;
}

void Address::setZipCode(string z)
{
	zipCode = z; 
}

string Address::getZipCode()
{
	return zipCode;
}

Address::Address():Address("Not set","Not set","Not set" )
{
	
}

Address::Address(string s, string c, string z)
{
	setZipCode(z);
	setCity(c);
	setStreetName(s); 

}
