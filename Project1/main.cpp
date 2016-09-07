#include <iostream>
//#include <string> - no need to include it, because it is already included in iostream
//#include <sstream>
#include <ctime>

using namespace std;

int suma()
{
	
	int a, b, sum;
	cout << "Baga primul numar: ";
	cin >> a;
	cout << "Baga al doilea numar: ";
	cin >> b;
	sum = a + b;
	cout << "Suma este: " << sum <<endl;
	return 0;
}

int incr()
{
	int x=5;
	int y;
	y = ++x; //operatorul de prefix, intai creste valoarea lui x si apoi il asigneaza lui y
	cout << "valoarea lui x este: " << x << " si a lui y este:" << y <<endl;
	x = 5;
	y = x++; //operatorul de postfix, intai asigneaza lui y si apoi creste valoarea lui x
	cout << "valoarea lui x este: " << x << " si a lui y este:" << y <<"\n";
	
	return 0;
}

void joaca(int z){

	//srand(28); //specifica seed-ul pentru rand, si face ca rand sa nu mai genereze aceiasi numere. Daca dau o cifra, totusi 
	//rand va genera aceleasi cifre, deci cel mai bine ii dau time(0)
	srand(time(0)); //time(0) returneaza secundele curente

	cout << "Generez module random pana la " << z << endl;

	for (int i=0;i<20;i++)
	{ 
		int x = rand()%z;
		
		if (x>100)
		cout << x << " este mai mare ca 100" << endl;
		else
		{
			cout << x << " este mai mic ca 100" << endl;

		}
	}
}

int countdown() {
	int i = 5;

	cout << "It's the final countdown: \n";

	while (i >= 0)
	{
		cout << i << endl;
		--i;
	}
	return 0;
}

int countup() {
	//for (initialisation ; condition ; increment)
	for (int x = 5; x <= 10; x++)
	{
		cout << "fute-o de " << x << " ori\n";
	}
	return 0;
}

int onetime() {
	int i = 3;
	do {
		cout << "Fute-o macar" << i << " ani. ";
			//i++;
	} while (i > 2);
	return 0;

}

int switcher() {

	int age = 42;
	switch (age) {
	case 16:
		cout << "Too young" << endl;
	case 42:
		cout << "Adult" << endl;
		//break;
	case 70:
		cout << "Senior" << endl;
	default:
		cout << "This is the default case" << endl;
	}

	return 0;
}

int erori() {
	//float type are always signed
	float f; //e pe 4 bytes
	double d; // e pe 8 bytes
	long double j;//e pe 16 bytes 

	char sefe=0; // e pe 1 byte, de la -128 to 127 or 0 to 255
	
				 //integer types
	int intreg = 0; //de la -2,147,483,648 la 2,147,483,647
	unsigned int z = 0; // de la 0 la 2,147,483,647
	unsigned int y = 0;
	short int x = 0; //e pe 2 bytes si ar trebui sa fie de la -32,768 la 32,767
	y = z - 100;
	cout << y << "\n ar trebui sa dea -100\n" ;
	x = x + 987654321;
	cout << x << "\n ar trebui sa dea 987654321 \n";
	sefe = sefe -1290;
	cout << sefe << "\n ar trebui sa fie -1290 \n";
	printf("Storage for int is: %zd \n", sizeof(int));
	return 0;
}

int arrays() {
	int array[5] = { 10,11,12,13,14 };
	
	int a[] = {1};

	//daca referntiez un element din array care nu exista, in loc sa dea eroare, imi da o valoarea random, wf
	cout << array[9] << endl;
	cout << array[19] << endl;

	cout << a[3]<<endl;
	cout << a[13] << endl;

	//matrix
	cout << "Matrix section" << endl;
	int x[2][3] = { {1,2,3},{4,5,6} };
	cout << x[0][1] << endl;
	cout << x[1][1] << endl;
	cout << x[2][2] << endl; //referentierea unui index nedefinit nu da eroare 
	cout << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (i ==0 ) {
				cout << x[i][j] << " ";
			}
			if (i == 0 && j == 2) {
				cout << endl;
			}
			if (i==1)
			{
				cout << x[i][j] << " ";
			}
			
		}
	}
	cout << "\ngata listarea \n";

	//cout << array[0] << endl;

	return 0;
}

int sizes() {

	cout << "char: " << sizeof(char) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	int var = 50;
	cout << "var: " << sizeof(var) << endl;

	return 0;

}

char menu() {
	char opt; //atentie ca trebuie inclus string
	cout << "Baga optiunea: \n" << "incr = i ; sum = z; count = c; cntup = n; onetime = o; switch = s : \n";
	//getline (cin,opt); - este echivalenta cu optiunea de mai jos
	cin >> opt;
	return opt;
}


int main()
{

	
	do {
		char optiune = menu();
			switch (optiune) {
			case 'j':
				int nr;
				cout << "Introdu numarul: ";
				cin >> nr;
				joaca(nr);
				menu();
			case 'k':
				sizes();
				menu();
			case 'p':
				//	pointerz();
				break;
			case 'a':
				arrays();
				menu();
			case 'e':
				erori();
				menu();
			case 'i':
				incr();
				menu();
			case 'c':
				countdown();
				menu();
			case 'n':
				countup();
				menu();
			case 'o':
				onetime();
				menu();
			case 's':
				switcher();
				menu();
			case 'x':
				break;
			case 'z':
				suma();
				menu();
			default:
				menu();
			}
	} while (optiune != 'x');

	//system("pause");
	return 0;
}

