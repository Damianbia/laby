
#include <iostream>
using namespace std;

int main()
{
    int tab[5],ele;

	for (int i = 0; i < 5; i++)
	{
		cout << "Wartosc elementu " << i+1 << " = ";
		cin >> ele;
		tab[i] = ele;
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << tab[i] << " ";
	}

}
