

#include <iostream>
using namespace std;
int main()
{
    double xp, xk, krok, xt;
    
    do {
        cout << "podaj xp ";
        cin >> xp;
        cout << "podaj xk ";
        cin >> xk;
    } while (xk < xp);
    cout << "podaj krok ";
    cin >> krok;

    cout << endl << "petla for" <<endl;
    for (double i = xp; i < xk+0.000000001; i = i + krok)
    {
        cout << "dla x=" << i << " x2=" <<( i * i) << " x3=" << i * i * i<<endl;
    }

    xt = xp;
    cout << endl << "petla while" << endl;
    while ( xt<xk+0.00000000001) {
        cout << "dla x=" << xt << " x2=" << (xt * xt) << " x3=" << xt * xt * xt << endl;
        xt = xt + krok;
    }

    xt = xp;
    cout << endl <<"petla do while" << endl;
    do {
        cout << "dla x=" << xt << " x2=" << (xt * xt) << " x3=" << xt * xt * xt << endl;
        xt = xt + krok;
    } while (xt < xk + 0.00000000001);


}

