#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int k=0;
	for (int i = 2; i <= a; i++) {
		if (a % i == 0) {
			for (int x = 2; x < i; x++) {
				if (i % x == 0) {
					k++;
					
					}
				

				}
			if (k == 0) {

				cout << i << endl;
			}

		}
		


	}

}