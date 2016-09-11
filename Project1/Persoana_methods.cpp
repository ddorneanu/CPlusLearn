#include <iostream>
#include <string>
#include "Persoana.h"

using namespace std;

Persoana init_persoana() {
	string nume;
	string prenume;
	int age;
	char sex;
	cout << "Baga numele persoanei: " << endl;
	cin >> nume;
	cout << "Baga prenumele persoanei: " << endl;
	cin >> prenume;
	cout << "Baga varsta" << endl;
	cin >> age;
	do {
	cout << "Baga sexul" << endl;
	cin >> sex;
	} while (sex != 'M' && sex != 'F');

	return (Persoana(nume, prenume, age, sex));
}

string getName()
{
	return Name;
}

void getAttrib(Persoana per) {
//	Persoana per = new Persoana();
	cout << per.getName + ' ' + per.Prenume + ' ' << age << " " << sex << endl;
}
