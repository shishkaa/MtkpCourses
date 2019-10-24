#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float num;
	float sum = 0;
	float sr;
	for (int i = 1; i > 0; i++) {
		cout << "введите число: ";
		cin >> num;
		sum += num;
		if (i > 1) {
			sr = sum / (i - 1);
		}
		else {
			sr = sum / i;
		}

		if (num == 0) {

			cout << "количество неверных попыток: " << i-1 << endl;
			cout << "сумма всех попыток: " << sum << endl;
			cout << "среднее ариф.: " << sr - 1;
			break;
		}
	}
}