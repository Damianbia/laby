
#include <iostream>
using namespace std;
int zmienna(int &x) {
	x = x + 10;
	return x;
}

int main()
{
	int a = 2;
	cout << a<<endl;
	cout << zmienna(a) << endl;
	cout << a;

}

