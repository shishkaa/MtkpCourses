#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int i;
	int mas[3];
	for (i = 0; i < 3; i++) {
		cin >> mas[i];
		while (mas[i] != 0) {
			sum += mas[i] % 10;
			mas[i] /= 10;
		}
	}
	cout << sum;
}