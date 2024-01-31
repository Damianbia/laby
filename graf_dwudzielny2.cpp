#include <iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	fstream plik;
	plik.open("i.txt", ios::in);
	int x, y, niedwudzielny = 0, pop = 0, dlugosc;//inicjalizacja
	string linia;
	vector<int>tabx{};
	vector<int>taby{};
	vector<int>tabcz{ 0 };
	vector<int>tabn{ 0 };
	//cout << "wypisz ilosc krawedzi grafu grafu ";
	//cin >> dlugosc;
	//cout << endl;
	if(plik.good()==false)
	{
		cout << "cos nie tak";
	}
	else {
		while (!plik.eof()) {//wpisywanie grafu z reki
			getline(plik, linia);
			cout << linia << endl;
			//	plik >> x;
			//	tabx.push_back(x);
			//	plik >> y;
			//	taby.push_back(y);
		}
	}
	tabcz[0] = tabx[0];
	tabn[0] = taby[0];

	for (int i = 1; i < tabx.size(); i++) {
		for (int j = 0; j < i; j++) {// tworzenie tablicy kolorow
			if (tabx[i] == tabcz[j]) {
				tabcz.push_back(tabx[i]);
				tabn.push_back(taby[i]);
				break;
			}
			if (tabx[i] == tabn[j]) {
				tabn.push_back(tabx[i]);
				tabcz.push_back(taby[i]);
				break;
			}
			if (taby[i] == tabcz[j]) {
				tabcz.push_back(tabx[i]);
				tabn.push_back(taby[i]);
				break;
			}
			if (taby[i] == tabn[j]) {
				tabcz.push_back(tabx[i]);
				tabn.push_back(taby[i]);
				break;
			}
		}
	}
	for (int i = 0; i < tabcz.size(); i++) { //sprawdzanie dwudzielnosci na podstawie tablicy kolorow
		for (int j = 0; j < tabcz.size(); j++) {
			if (tabcz[i] == tabn[j])
				niedwudzielny = 1;
		}
	}
	/*for (int i = 0; i < tabcz.size(); i++)
		cout << tabcz[i] << " ";
	cout << endl;
	for (int i = 0; i < tabcz.size(); i++)
		cout << tabn[i] << " ";*/
	cout << endl << "graf: " << endl;
	for (int i = 0; i < tabx.size(); i++) {
		cout << tabx[i] << " " << taby[i] << endl;
	}
	if (niedwudzielny) {
		cout << "graf ten jest niedwudzielny";
	}
	else {
		cout << "graf ten jest dwudzielny" << endl << "wierzcholki czerwone: " << tabcz[0] << " ";
		for (int i = 1; i < tabcz.size(); i++) {// redukcja powtarzania sie i wypisywanie wirzcholkow czerwonych 
			for (int j = 0; j < i; j++) {
				if (tabcz[i] == tabcz[j])
					pop = 1;
			}
			if (pop == 0)
				cout << tabcz[i] << " ";
			else
				pop = 0;
		}
		cout << endl << "wierzcholki niebieskie: " << tabn[0] << " ";
		for (int i = 1; i < tabn.size(); i++) {// redukcja powtarzania sie i wypisywanie wirzcholkow czerwonych 
			for (int j = 0; j < i; j++) {
				if (tabn[i] == tabn[j])
					pop = 1;
			}
			if (pop == 0)
				cout << tabn[i] << " ";
			else
				pop = 0;
		}

	}
	plik.close();
}
