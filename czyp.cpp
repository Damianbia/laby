
#include <iostream>
using namespace std;

bool l_pierwsza(int x) {
    int liczba = 2;
    bool czy=0;
    while (x > liczba) {
        if (x % liczba == 0)
            czy = 1;
            liczba++;
    }
    if (czy == 1)
        return 0;
    if (czy == 0)
        return 1;
}
int main()
{
    int l;
    cout << "podaj liczbe ";
    cin >> l;
    if (l_pierwsza(l) == 1)
        cout << endl << "liczba jest pierwsza";
    else
        cout << endl << "liczba jest zlozona";


}

