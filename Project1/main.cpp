#include <iostream>
#include "custom.h"

using namespace std;


int main()
{
	char opt; 
	

	do {
	
	cout <<	flush;
	cout << "Baga optiunea: \n" << "i: increment ; z = sum; c = count; n = cntup ; o = onetime; s = switch \n" << "k = sizes \n" ;
	//getline (cin,opt); - este echivalenta cu optiunea de mai jos
	cin >> opt;

	system("CLS");
	
	menu(opt);
	} while (opt != 'x');

	return 0;
}

