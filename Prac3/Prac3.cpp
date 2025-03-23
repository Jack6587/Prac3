// Prac3.cpp : Defines the entry point for the application.
//

#include "Prac3.h"
#include "Pie.h"
#include "ApricotPie.h"
#include "ApplePie.h"
#include "RaspberryPie.h"
#include <iostream>
#include <string>
#include <stddef.h>

using namespace std;

int main()
{
	ApplePie p;
	p.description();
	cout << "Hello CMake." << endl;
	RaspberryPie rp;
	rp.description();
	int selection = 0;
	Pie* piePtr = NULL;
	cout << "Enter a choice (1 for Apple Pie, 2 for Apricot Pie): ";
	cin >> selection;

	if (selection == 1) {
		piePtr = new ApplePie();
	}
	else if (selection == 2) {
		piePtr = new ApricotPie();
	}

	cout << endl;
	cout << "You chose " << selection << endl;
	piePtr->description();

	delete piePtr;
	return 0;
}
