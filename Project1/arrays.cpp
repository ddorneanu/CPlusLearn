#include <iostream>

using namespace std;

int arrays() {
	int array[5] = { 10,11,12,13,14 };

	int a[] = { 1 };

	//daca referntiez un element din array care nu exista, in loc sa dea eroare, imi da o valoarea random, wf
	cout << array[9] << endl;
	cout << array[19] << endl;

	cout << a[3] << endl;
	cout << a[13] << endl;

	//matrix
	cout << "Matrix section" << endl;
	int x[2][3] = { { 1,2,3 },{ 4,5,6 } };
	cout << x[0][1] << endl;
	cout << x[1][1] << endl;
	cout << x[2][2] << endl; //referentierea unui index nedefinit nu da eroare 
	cout << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 0) {
				cout << x[i][j] << " ";
			}
			if (i == 0 && j == 2) {
				cout << endl;
			}
			if (i == 1)
			{
				cout << x[i][j] << " ";
			}

		}
	}
	cout << "\ngata listarea \n";

	//cout << array[0] << endl;

	return 0;
}
