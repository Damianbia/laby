

#include <iostream>
#include<math.h>
using namespace std;

double obliczenie(int a, int b, double x) {
    double suma = 0;
    for (int i = a; i < b; i++) {
        suma = suma + sin(i * exp(x));
    }
    return suma;
}

int main()
{
 
    cout<<
}

