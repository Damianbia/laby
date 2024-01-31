

#include <iostream>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
	int x, y, niedwudzielny=0,pop=0,dlugosc;// tabx[5], taby[5], tabn[10], tabcz[10],zmienna,tym=0;//inicjalizacja
	vector<int>tabx{};
	vector<int>taby{};
	vector<int>tabcz{0};
	vector<int>tabn{0};
	cout << "wypisz ilosc krawedzi grafu grafu ";
	cin >> dlugosc;
	cout << endl;
	for (int i = 0; i < dlugosc; i++) {//wpisywanie grafu z reki
		cin >> x;
		tabx.push_back(x);
		cin >> y;
		taby.push_back(y);
	}
	tabcz[0] = tabx[0];
	tabn[0] = taby[0];

	for (int i = 1; i < tabx.size(); i++) {
		for (int j = 0; j < i; j++) {// tworzenie tabliczy kolorow
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
	for (int i = 0; i < tabcz.size(); i++) { //sprawdzanie dwudzielnosci
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
	cout << endl<<"graf: "<<endl;
	for (int i = 0; i < tabx.size(); i++) {
		cout << tabx[i] << " " << taby[i] << endl;
	}
	if (niedwudzielny) {
		cout << "graf ten jest niedwudzielny";
	}
	else {
		cout << "graf ten jest dwudzielny" << endl << "wierzcholki czerwone: "<<tabcz[0]<<" ";
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
}
