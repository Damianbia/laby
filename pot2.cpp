using namespace std;
#include <iostream>

int main()
{
	int del=0;
	cout << "podaj dlugosc tablicy ";
	cin >> del;
	int* nazwa = new int[del];

	 nazwa[0] = 2;
	for (int i = 1; i < del; i++) {
		nazwa[i] = nazwa[i - 1] * 2;
	}
	cout << endl;
	for (int i = 0; i < del; i++) {
		cout<<&nazwa[i]<<" " << nazwa[i] << " ";

	}
	delete []nazwa;
}

