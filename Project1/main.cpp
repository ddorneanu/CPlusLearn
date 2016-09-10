#include <iostream>
//#include <string> - no need to include it, because it is already included in iostream
//#include <sstream>
#include "custom.h"

using namespace std;




int main()
{
	char opt; //atentie ca trebuie inclus string
	

	do {
	
	cout << flush << "Baga optiunea: \n" << "i: increment ; z = sum; c = count; n = cntup ; o = onetime; s = switch \n" << "k = sizes \n" ;
	//getline (cin,opt); - este echivalenta cu optiunea de mai jos
	cin >> opt;

	system("CLS");
	
	menu(opt);
	} while (opt != 'x');

	return 0;
}

