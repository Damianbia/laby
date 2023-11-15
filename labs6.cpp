
#include <iostream>
using namespace std;
int main()
{
	int tab[10][10],jj=0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			tab[i][j] = i * j;
		}
		
	}
	for (int i = 0; i < 10; i++) {

		for (int j = jj; j < 10; j++) {
			cout << i << " X " << j << " = " << tab[i][j]<<endl;
		}
		jj++;
	}
}

