#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long float a, b, z1, z2;
	cout << "Enter a \n";
	cin >> a;
	cout << "Enter b \n";
	cin	>> b;

	z1 = (cos(a) - cos(b))*(cos(a) - cos(b)) - (sin(a) - sin(b))*(sin(a) - sin(b));
	z2 = -4 * sin((a - b) / 2)*sin((a - b) / 2)*cos(a + b);
	cout <<"z1 = " << z1 << endl<<"z2 = " << z2 <<endl;
	if (z1 == z2) { cout << "z1 equally z2"; }
	else { cout << "z1 not equally z2"; }
	return 0;
}
