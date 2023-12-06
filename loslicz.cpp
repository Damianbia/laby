
#include <iostream>
#include<fstream>
//#include<ctime>
using namespace std;
int main()
{
	int liczba, suma=0,parzyste[20],ile=0;
	fstream plik;
	srand(time(NULL));
	plik.open("losowe.txt",ios ::out);
	for (int i = 0; i < 20; i++) {
		liczba = rand()%100 ;
		cout << liczba << endl;
		suma += liczba;
		plik << liczba<<endl;
		if (liczba % 2 == 0) {
			parzyste[ile] = liczba;
			ile++;
		}
	}
	plik.close();
	cout <<"suma: "<< suma;
	plik.open("parzyste.txt", ios::out);
	for (int i = 0; i < ile; i++) {
		plik << parzyste[i] << endl;
	}
	plik.close();
}
