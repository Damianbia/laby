#include <ctime>
#include <iostream>
using namespace std;
int main()
{
	float tab[5][5],tabt[5][5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			tab[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << tab[i][j]<<" ";
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			tabt[i][j] = tab[j][i];
		}
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << tabt[i][j] << " ";
		}
		cout << endl;
	}
}

