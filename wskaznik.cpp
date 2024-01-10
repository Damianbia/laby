
#include <iostream>
using namespace std;
int main()
{
	int y = 5;
	int* wskaznik;
	wskaznik = &y;
	//adres wskaznika oraz zmiennej
	cout << "Adres zmiennej= " << &y << endl;
	cout << "Adres wskaznika= " << wskaznik << endl;
	//wyswietlanie danych na ktore wskazuj adres wsakznika
	cout << "Zmienna = " << y << endl;
	cout << "Zmienna = " << *wskaznik<<endl;
	//Modyfikacja danych wykorzystujac wskaznik
	cout << "zmienna = " << y << endl;
	*wskaznik = 10;
	cout << "zmienna po modyfikacji = " << y << endl;

}

