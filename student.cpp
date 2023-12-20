
#include <iostream>
using namespace std;

struct Student {
	string imie;
	string nazwisko;
	int wiek;
	string kierunek;
	float srednia_ocen;


};
void uzupelnij(Student tab[],string imiona[], string nazwiska[], string kierunki[]) {
	srand(time(NULL));
	for (int i = 0; i < sizeof(tab) / sizeof(tab[0]);i++) {
		
	}

};
int main()
{
	srand(time(NULL));
	int d;
	d = rand % 10;
	string imiona[] = { "Damian","Sebastian","Jakub","Wojciech","Danuta","Julia","Justyna","Sara","Dominik" };
	string nazwiska[] = { "Kowalski","Knap","Cichy","Ciemny", };
	cout << sizeof(imiona)/ sizeof(imiona[0]);
	cout << endl << d;
}
