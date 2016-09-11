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
	string getName() {
		return Name;
	}

	//Persoana();
	//~Persoana();
		
private:
	string Name;
	string Prenume;
	int varsta;
	char sex;
	map <string, int> skillz;
};

/*
Persoana::Persoana()
{
	sex = ' ';
}

Persoana::~Persoana()
{
}
*/

