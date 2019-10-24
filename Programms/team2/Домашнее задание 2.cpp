#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int mass[10];
	int rev, min, max;

	for (int i = 0; i < 10; i++) {
		mass[i] = rand() % 50;
		cout << mass[i] << endl;
	}

	min = mass[0];
	max = mass[0];

	for (int i = 0; i < 10; i++) {
		if (min > mass[i])
			min = mass[i];

		if (max < mass[i])
			max = mass[i];
	}
	cout << "минимальное значение: " << min << endl;
	cout << "максимальное значение: " << max << endl;

	rev = min;
	min = max;
	max = rev;
	cout << "минимальное значение наоборот: " << min << endl;
	cout << "максимальное значение наоборот: " << max;
}