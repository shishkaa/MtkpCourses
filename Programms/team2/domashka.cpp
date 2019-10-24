#include<iostream>
using namespace std;
int main()
{
	int x;
		int y;
		int x1;
		int y1;
		cin >> x;
		cin >> y;
		cin >> x1;
		cin >> y1;
		if ((x + 5 == x1) && (y + 2 == y1) || (x + 2 == x1) && (y + 5 == y1) || (x + 2 == x1) && (y - 5 == y1) || (x - 5 == x1) && (y + 2 == y1)||(x - 2 == x1) && (y + 5 == y1) || (x - 2 == x1) && (y - 5 == y1) || (x + 5 == x1) && (y - 2 == y1) || (x - 5 == x1) && (y - 2 == y1))
			cout << "yes";
		else { cout << "no"; }
}
