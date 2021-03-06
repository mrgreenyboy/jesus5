#include "pch.h"
#include <iostream>
#include "stdlib.h"
#include "time.h"
#include <iomanip>

using namespace std;
int main() {

	cout << "Random matrix " << endl << endl;
	int ar[5][5];
	srand(time(NULL));

	int max;
	max = ar[0][0];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			ar[i][j] = rand() % (201) - 100;
			cout << setw(5) << ar[i][j];
			if (ar[i][j] > max) {
				max = ar[i][j];
			}
		}
		cout << endl << endl;
	}

	cout << "Maximum element of matrix ( " << max << " ) become 1" << endl << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (ar[i][j] == max) cout << setw(5) << 1;
			else cout << setw(5) << ar[i][j];
		}
		cout << endl << endl;
	}


	system("pause");
	return 0;
}
