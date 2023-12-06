
#include <iostream>
using namespace std;

int potega(int x, int n) {
    int tym=x;
    for (int i = 0; i < n-1; i++) {
        tym = tym * x;
    }
    return tym;
}
int main()
{
    int p, pn;
    cout << "podaj podstawe potegi ";
    cin >> p;
    cout  << "podaj potege ";
    cin >> pn;
    cout  << "wynik wynosi: " << potega(p, pn);
}

