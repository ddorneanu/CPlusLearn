#include <iostream>

using namespace std;

void pointerz() {
	int variab = 5;
	int *point; // am facut o variabila de tip pointer
	
	point = &variab;

	cout << "vairabila cu numele \"variab\" este: " << variab << endl;

	cout << "Adresa de memorie a variabilei este stocata in &variab: " << &variab << endl;

	cout << "Variabila de tip pointer == cu adresa de memorie a variabilei si este tinuta in poitnerul = &variab: " << point << endl;
	/*
	There are two operators for pointers:
	Address-of operator (&): returns the memory address of its operand.
	Contents-of (or dereference) operator (*): returns the value of the variable located at the address specified by its operand.
	*/

	cout << "Valoarea variabilei stocata in pointerul, numit point este: " << *point << endl;

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
}

void aloc_dinam() {
	
	cout << "alocare dinamica \n"<<endl;

	int *p = new int; // aloca dinamic memorie pe heap, de tip int 
	cout << "Am facut un pointer nou, cu new int si adresa este: " << p << endl;
	cout << "Voi pune valoarea 5 in pointerul p" <<endl;
	*p = 5; // pune valoarea 5 la adresa de memorie

	cout << "adresa pointerului este acum: " << p << endl; //ramane aceiasi adresa

	cout << "In adresa de memorie de la *p avem valoare: " << *p << endl; // afiseaza valoarea 5
	cout << "Dau delete p si sterg zona de memorie catre care pointa pointerul p" << endl;
	delete p; // sterge zona de memorie catre care pointa p (unde era stocat 5), dar nu sterge si pointerul

	cout << "pointerul este acum: " << p << endl;
	cout << "Initializez pointerul cu p"; 
	p = NULL;
	cout << "pointerul este acum: " << p << endl;

}

