// Prac3.cpp : Defines the entry point for the application.
//

#include "Prac3.h"
#include "Pie.h"
#include "ApricotPie.h"
#include "ApplePie.h"
#include "RaspberryPie.h"

using namespace std;

int main()
{
	ApplePie p;
	p.description();
	cout << "Hello CMake." << endl;
	return 0;
	RaspberryPie rp;
	rp.description();
}
