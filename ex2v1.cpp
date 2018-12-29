#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double A, B, dx, eps, fx, d, h;
	int i, st;
	cout << "Введите значение eps: ";
	cin >> eps;
	h = eps;
	A = 1.1;
	B = 1.9;
	dx = 0.1;
	/*for (st = 1; h < 1; st++) {
		h = h * 10;
	}*/
	cout << "+-----+-------+-----+" << endl << "|  x  | f(x)  |  N  |" << endl << "+-----+-------+-----+";
	for (double j = A; j < B; j = j + dx) {
		fx = 0;
		i = 1;
		for (i = 1; i > 0; i++) {
			if (i % 2 == 0) d = -1 * pow(j, i) / i;
			else d = pow(j, i) / i;
			fx = fx + d;
			if (abs(d) < eps) break;
		}
		cout << endl << "|  " << j << "  | " << setprecision(3) << fx << " |  " << i << endl << "+-----+-------+-----+";
	}
	return 0;
}
