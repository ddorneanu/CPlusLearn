#include <iostream>
#include "custom.h";

using namespace std;


int menu(int option) {

	switch (option) {
	case 'j':
		int nr;
		cout << "Introdu numarul: ";
		cin >> nr;
		joaca(nr);
		break;
	case 'k':
		sizes();
		break;
	case 'p':
		pointerz();
		break;
	case 'a':
		arrays();
		break;
	case 'e':
		erori();
		break;
	case 'i':
		incr();
		break;
	case 'c':
		countdown();
		break;
	case 'n':
		countup();
		break;
	case 'o':
		onetime();
		break;
	case 's':
		switcher();
		break;
	case 'x':
		break;
	case 'z':
		suma();
		break;
	default:
		cout << "Bad choice! please try again later\n";
	}
	//system("pause");

}