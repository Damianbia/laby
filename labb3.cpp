#include<iostream>
using namespace std;

int main() {

	int N;
	double liczba, suma=0, suma2=0, srednia=0;
	cout << "podaj N ";
	cin >> N;
	cout << endl;

	for (int i = 1; i <= N; i++) {
		cout << "podaj liczbe " << i << " ";
		cin >> liczba;
		cout << endl;
		suma = suma + liczba;
		if (liczba > 0)
			suma2 = suma2 + liczba;
		srednia = srednia + liczba;
	}
	cout << endl << "suma wynosi: " << suma << endl << "suma liczb dodatnich wynosi: " << suma2 << endl << "srednia wynosi: " << srednia / N;
}