
#include <iostream>
using namespace std;
int main()
{
	int dlu, wys;
	char tab[1000][1000];

	cout << "podaj dlugosc ";
		cin >> dlu;
	cout << "podaj wysokosc ";
		cin >> wys;

	for (int i = 0; i < wys; i++) {
		for (int j = 0; j < dlu; j++) {
			if (i == 0 || i == wys-1 || j == 0 || j == dlu-1)
				cout << 'X';
			else
				cout << 'O';
		}
		cout << endl;
	}
}
