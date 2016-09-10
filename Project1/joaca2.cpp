#include <iostream>
#include <ctime>

using namespace std;

void joaca(int z) {

	//srand(28); //specifica seed-ul pentru rand, si face ca rand sa nu mai genereze aceiasi numere. Daca dau o cifra, totusi 
	//rand va genera aceleasi cifre, deci cel mai bine ii dau time(0)
	srand(time(0)); //time(0) returneaza secundele curente

	cout << "Generez module random pana la " << z << endl;

	for (int i = 0; i<20; i++)
	{
		int x = rand() % z;

		if (x>100)
			cout << x << " este mai mare ca 100" << endl;
		else
		{
			cout << x << " este mai mic ca 100" << endl;

		}
	}
}