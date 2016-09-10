#include <iostream>

using namespace std;

int erori() {
	//float type are always signed
	float f; //e pe 4 bytes
	double d; // e pe 8 bytes
	long double j;//e pe 16 bytes 

	char sefe = 0; // e pe 1 byte, de la -128 to 127 or 0 to 255

				   //integer types
	int intreg = 0; //de la -2,147,483,648 la 2,147,483,647
	unsigned int z = 0; // de la 0 la 2,147,483,647
	unsigned int y = 0;
	short int x = 0; //e pe 2 bytes si ar trebui sa fie de la -32,768 la 32,767
	y = z - 100;
	cout << y << "\n ar trebui sa dea -100\n";
	x = x + 987654321;
	cout << x << "\n ar trebui sa dea 987654321 \n";
	sefe = sefe - 1290;
	cout << sefe << "\n ar trebui sa fie -1290 \n";
	printf("Storage for int is: %zd \n", sizeof(int));
	return 0;
}