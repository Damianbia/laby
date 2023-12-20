
#include <iostream>
using namespace std;

int main()
{
	struct ksiazka {
		string tytul;
		float cena;
		int rok;
	} k1, k2, k3;
	ksiazka tab[10];
	k1.tytul = "aaa";
	cout << k1.tytul;
	for (int i = 0; i < 10; i++) {
		tab[i].tytul = "abc";
	}
	cout << k1.tytul;
}
