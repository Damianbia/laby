
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x = 0, opcja=0;
    vector<int>liczby;
    srand(time(NULL));
    while (1) {
        x = rand() % 40 - 20;
        liczby.push_back(x);
        if (x < -15) {
            opcja = 1;
            cout << "ostatanialiczba wynosi " << x << endl;
            break;
        }
        if (x > 10) {
            opcja = 2;
            cout << "ostatanialiczba wynosi " << x << endl;
            break;
        }
    }
    if(opcja==1)
        for (int i = 0; i < liczby.size(); i++) {
            cout << liczby[i] << " ";
        }
    if (opcja == 2)
        cout << liczby.size();
}

