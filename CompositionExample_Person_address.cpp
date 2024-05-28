// CompositionExample_Person_address.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"

int main()
{
    Person p1;

    p1.setName("James Bond");

    p1.setSSN("007-00070070");

    Address a1("Sky Fall", "London", "007007");

    p1.setAddress(a1);

    //cout << p1.getAddress().getCity() << endl; 

    p1.PrintPersonInfo();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
