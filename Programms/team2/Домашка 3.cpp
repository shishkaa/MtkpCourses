#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int mass[10];
	int sch1 = 0, sch2 = 0, min, max;

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
	for (int i = 0; i < 10; i++) {
		if (mass[i] == min)
			sch1++;
		if (mass[i] == max)
			sch2++;
	}
	int *min_mass = new int[sch1];
	int *max_mass = new int[sch2];
	for (int i = 0; i < 10; i++) {
		if (mass[i] == min)
			min_mass[i] = i;
		if (mass[i] == max)
			max_mass[i] = i;
	}
	for (int i = 0; i < sch1; i++) {
		cout << "минимум: " << min_mass[i];
	}
	for (int i = 0; i < sch2; i++) {
		cout << "максимум: " << max_mass[i];
	}
	delete[] min_mass;
	delete[] max_mass;
}