
#include <iostream>
using namespace std;

double temperatura(double temp_f, char jak) {
	double cel = (5.0 / 9) * (temp_f - 32),kal= (5.0 / 9) * (temp_f + 459.67);
	if (jak == 'c')
		return cel;
	if (jak == 'k')
		return kal;
}

int main()
{
	char z;
	double t;
	cout  << "podaj ilosc stopni fahrenheita: ";
	cin >> t;
	cout <<endl<< "podaj rodzaj stopnii na ktore chcesz zamienic c dla celsjusza, k dla kelvina: ";
		cin >> z;
		cout << endl << "wynik to: " << temperatura(t, z);
	
}

