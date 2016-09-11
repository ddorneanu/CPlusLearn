#include <iostream>
#include <string>
#include "Persoana.h"

using namespace std;

Persoana input_persoana() {
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
	cout << "Baga sexul" << endl;
	cin >> sex;
	if (sex == 'M' || sex == 'F') {
		cout << "sex";
	}
	else
	{
		cout << "pula" << endl;
	}
	return (Persoana(nume, prenume, age, sex));
}

