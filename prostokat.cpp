
#include <iostream>
using namespace std;

int main()
{
	int ile=0;
	struct prostokat {
		float bokA;
		float bokB;
		float obwod;
		float pole;
	};
	prostokat tab[10];
	cout << "podaj ile prostokatow chcesz zrobic ";
	cin >> ile;
	for (int i = 0; i < ile; i++) {
		cout << "podaj bok a prostokata " << i + 1<<" ";
		cin >> tab[i].bokA;
		cout << "podaj bok b prostokata " << i + 1 << " ";
		cin >> tab[i].bokB;
		tab[i].obwod = 2 * tab[i].bokB + 2 * tab[i].bokA;
		tab[i].pole = tab[i].bokB * tab[i].bokA;
	}

	for (int i = 0; i < ile; i++) {
		cout << "obwod prostokata " << i + 1 << " wynosi " << tab[i].obwod<<endl;
		cout << "pole prostokata " << i + 1 << " wynosi " << tab[i].pole<<endl;
	}
}
