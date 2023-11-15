
#include <iostream>
using namespace std;

int main()
{
	float tab[10], ele, suma=0, min;
	for (int i = 0; i < 10; i++)
	{
		cout << "Wartosc elementu " << i + 1 << " = ";
		cin >> ele;
		tab[i] = ele;
	}

	for (int i = 0; i < 10; i++) {
		suma = suma + tab[i];
	}
	cout << endl << "suma = " << suma << endl << "srednia = " << suma / 10;
	min = tab[0];
	for (int i = 0; i < 10; i++) {
		if (tab[i] < min)
			min = tab[i];
	}
	cout << endl << "minimum = " << min;
}

