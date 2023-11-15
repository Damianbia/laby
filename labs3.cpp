
#include <iostream>
using namespace std;
int main()
{
	int tab[4][3], ile=0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			ile++;
			cout << "podaj wartosc " << ile<<" ";
			cin >> tab[i][j];
		}
   }
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			
			cout<< tab[i][j]<<" ";
		}
		cout << endl;
	}
}
