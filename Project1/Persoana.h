#pragma once
#ifndef PERSOANA_H
#define PERSOANA_H

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Persoana
{
public:
	void setName(string x) {
		Name = x;
	}
	void getAttrib() {
		cout << Name + Prenume << age << sex <<endl;
	}

	Persoana(string Nume, string Prenum, int varsta, char sexu)
	{
		Name = Nume;
		Prenume = Prenum;
		age = varsta;
		sex = sexu;
	}
	//~Persoana();

private:
	string Name;
	string Prenume;
	int age;
	char sex;
	map <string, int> skillz;
};

Persoana input_persoana();

/*
Persoana::Persoana()
{
sex = ' ';
}

Persoana::~Persoana()
{
}
*/

#endif