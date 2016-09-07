#pragma once
//using namespace std;

void pointerz() {
	int variab = 5;
	int *point;
	int ceva;

	point = &variab;

	cout << "vairabila este: " << variab << endl;

	cout << "Adresa de memorie a variabilei este: " << &variab << endl;

	cout << "Variabila de tip pointer-ul = cu adresa de memorie a variabilei este: " << point << endl;
	/*
	There are two operators for pointers:
	Address-of operator (&): returns the memory address of its operand.
	Contents-of (or dereference) operator (*): returns the value of the variable located at the address specified by its operand.
	*/

	cout << "Variabila stocata in pointerul, numit point este: " << *point << endl;

	/*
	The dereference operator (*) is basically an alias for the variable the pointer points to.
	For example:
	int x = 5;
	int *p = &x;

	x = x + 4;
	x = *p + 4;
	*p = *p + 4;

	fac de fapt aceiasi chestie

	*/

	cout << endl;

	/*
	Dynamic memory allocation is useful in many situations, such as when your program depends on input.
	As an example, when your program needs to read an image file, it doesn't know in advance
	the size of the image file and the memory necessary to store the image.

	*/
	cout << "alocare dinamica \n";

	int *p = new int; // aloca dinamic memorie pe heap 
	cout << "pointerul este: " << p << endl;
	*p = 5; // pune valoarea 5 la adresa de memorie

	cout << "pointerul este acum: " << p << endl;

	cout << *p << endl; // afiseaza valoarea 5

	delete p; // sterge zona de memorie catre care pointa p (unde era stocat 5), dar nu sterge si pointerul

	cout << "pointerul este acum: " << p << endl;
	p = NULL;
	cout << "pointerul este acum: " << p << endl;



	return 0;
}
