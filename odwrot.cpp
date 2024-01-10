

#include <iostream>
using namespace std;
void odwrot(int n) {
	int* tab = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> tab[i];
	}
		for (int i = n-1; i >= 0; i--) {
			cout << tab[i] << endl;

		}
	}

int main()
{
	int x;
	cout << "podaj liczbe liczb ";
	cin >> x;
	cout << endl;
	odwrot(x);
}

