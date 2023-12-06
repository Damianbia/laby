#include <iostream>
using namespace std;

void opcje() {
	cout << "a to dodawanie ";
	cout << endl << "b to odejmowanie";
	cout << endl << "c to monozenie";
	cout << endl << "d to dzielenie";
	cout << endl << "k zakonczy program ";
}

double dodawanie(double a, double b) {
	return a + b;
}
double odejmowanie(double a, double b) {
	return a - b;
}
double mnozenie(double a, double b) {
	return a * b;
}
double dzielenie(double a, double b) {
	return a / b;
}

void kalkulator() {
	char co=' ';
	double a, b;
	while (co != 'k') {
		opcje();
		cin >> co;
		if (co == 'k')
			break;
		cout << endl << "podaj a: ";
			cin >> a;
		cout  << "podaj b: ";
		cin >> b;
		if (co == 'a')
			cout <<endl<<"wynik to: " <<  dodawanie(a, b);
		if (co == 'b')
			cout << endl << "wynik to: " << odejmowanie(a, b);
		if (co == 'c')
			cout << endl << "wynik to: " << mnozenie(a, b);
		if (co == 'd')
			cout << endl << "wynik to: " << dzielenie(a, b);
		cout << endl;
	}
}

int main()
{
	kalkulator();
}

