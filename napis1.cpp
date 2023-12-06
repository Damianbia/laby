
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string napis1,napis2,napis3,tym;
	char lit;
	getline(cin,napis1);
	tym = napis1;
	for (int i = 0; i < tym.size(); i++) {
		if (tym[i] == tym[i + 1]) {
			tym.erase(i , 1);
			i--;
		}
	}
	napis2 = tym;
	cout << endl<<"podaj litere ktora chcesz usunac ";
	cin >> lit;
	for (int i = 0; i < tym.size(); i++) {
		if (tym[i] == lit) {
			tym.erase(i, 1);
			i--;
		}
	}
	napis3 = tym;
	cout << endl << napis1 << endl << napis2 << endl << napis3;
	fstream plik;
	plik.open("napisy.txt", ios::out);
	if (plik.good() == true) {
		plik << endl << napis1 << endl << napis2 << endl << napis3;
	}
	plik.close();
}

