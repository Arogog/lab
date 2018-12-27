#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
	const int n = 10;
	int i = 0, A[n], kolvo = 0, k, max_yu,a,b;
	cout << "input A & B" << endl;
	cin >> a >> b;
	
	for (int i = 0; i < 10; i++)
	{
		A[i] = (rand() % 20) - 10;
	}

	i = 0;
	while (i < 10)
	{
		if (((A[i] < a) && (A[i] > b)) || ((A[i] > a) && (A[i] < b)))
			kolvo++;
		i++;
	}
	cout << "kolvo A&B = " << kolvo << endl;
	i = 0;
	k = A[i];
	while (i < 10)
	{
		if (A[i] >= k)
		{
			k = A[i];
			max_yu=i;
		}
		i++;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "  " << A[i];
	};
	cout <<endl << "Kolvo then that max = " << 10 - max_yu << endl;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 10 - i - 1; j++) {
			if (abs(A[j]) > abs(A[j + 1])) {
				k = A[j];
				A[j] = A[j + 1];
				A[j + 1] = k;
			}

		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "  " << A[i];
	};
	cin.get();
	cin.get();
}
