#include <iostream>
using namespace std;

int main()
{
	int a;
	int kount = 0;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (a% i == 0) {
			kount += 1;
			cout << i << endl;
		}
		
		
		}
	if (kount == 2) {
		cout << "PROSTOE" << endl;
	}
    
}

