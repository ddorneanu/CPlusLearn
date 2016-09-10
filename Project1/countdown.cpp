#include <iostream>

using namespace std;

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