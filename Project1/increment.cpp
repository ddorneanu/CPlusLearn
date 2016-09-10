#include <iostream>

using namespace std;

int incr()
{
	int x = 5;
	int y;
	y = ++x; //operatorul de prefix, intai creste valoarea lui x si apoi il asigneaza lui y
	cout << "valoarea lui x este: " << x << " si a lui y este:" << y << endl;
	x = 5;
	y = x++; //operatorul de postfix, intai asigneaza lui y si apoi creste valoarea lui x
	cout << "valoarea lui x este: " << x << " si a lui y este:" << y << "\n";

	return 0;
}