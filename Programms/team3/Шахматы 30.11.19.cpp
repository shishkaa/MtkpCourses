#include<iostream>
#include<cmath>
using namespace std;
bool King(int x1, int y1, int x2, int y2)
{    

	if (((x2 == x1 + 1) && (y2 == y1 + 1)) || ((x2 == x1) && (y2 == y1 + 1)) || ((x2 == x1 - 1) && (y2 == y1 + 1)) || ((x2 == x1 - 1) && (y2 == y1)) || ((x2 == x1 + 1) && (y2 == y1)) || ((x2 == x1 - 1) && (y2 == y1 - 1)) || ((x2 == x1) && (y2 == y1 - 1)) || ((x2 == x1 + 1) && (y2 == y1 - 1)))
		return true;
	else
		return false;
}

bool Qween(int x1, int y1, int x2, int y2)
{
	if (((y2 == y1)) || ((x2 == x1)) || (abs(x2 - x1) == abs(y2 - y1)) || (abs(x1 - x2) == abs(y2 - y1)) || (abs(x2 - x1) == abs(y1 - y2)) || (abs(x1 - x2) == abs(y1 - y2)))
		return true;
	else
		return false;
}

bool Slon(int x1, int y1, int x2, int y2)
{
	if ((abs(x2 - x1) == abs(y2 - y1)) || (abs(x1 - x2) == abs(y2 - y1)) || (abs(x2 - x1) == abs(y1 - y2)) || (abs(x1 - x2) == abs(y1 - y2)))
		return true;
	else
		return false;
}

bool Horse(int x1, int y1, int x2, int y2)
{
	if (((x2 == x1 + 2) && (y2 == y1 + 1)) || ((x2 == x1 - 2) && (y2 == y1 + 1)) || ((x2 == x1 - 1) && (y2 == y1 + 2)) || ((x2 == x1 + 1) && (y2 == y1 + 2)) || ((x2 == x1 + 2) && (y2 == y1 - 1)) || ((x2 == x1 - 2) && (y2 == y1 - 1)) || ((x2 == x1 - 1) && (y2 == y1 - 2)) || ((x2 == x1 + 1) && (y2 == y1 - 2)))
		return true;
	else
		return false;
}

bool Ladia(int x1, int y1, int x2, int y2)
{
	if (((y2 == y1)) || ((x2 == x1)))
		return true;
	else
		return false;
}

bool Peshka(int x1, int y1, int x2, int y2)
{
	if ((y2 == y1 + 1) && (x2 == x1))
		return true;
	else
		return false;
}


int main()
{
	setlocale(LC_ALL, "russian");
    int x1, y1, x2, y2, a;
	cout << "1=King" << endl << "2=Qween" << endl << "3=Slon" << endl << "4=Horse" << endl << "5=Ladia" << endl << "6=Peshka" << endl;
	cout << "Введите фигуру" << endl;
	cin >> a;
	cout << "Введите x1" << endl;
	cin >> x1;
	if ((x1 < 1) || (x1 > 8))
	{
		cout << "Error";
	}
	else
		cout << "Введите y1" << endl;
	cin >> y1;
	if ((y1 < 1) || (y1 > 8))
	{
		cout << "Error";
	}
	else
		cout << "Введите x2" << endl;
	cin >> x2;
	if ((x2 < 1) || (x2 > 8))
	{
		cout << "Error";
	}
	else
		cout << "Введите y2" << endl;
	cin >> y2;
	if ((y2 < 1) || (y2 > 8))
	{
		cout << "Error";
	}

	if ((a == 1) && (King(x1, y1, x2, y2)))
	{
		cout << "yes";
	}
	else
		if ((a == 2) && (Qween(x1, y1, x2, y2)))
		{
			cout << "yes";
		}
		else
			if ((a == 3) && (Slon(x1, y1, x2, y2)))
			{
				cout << "yes";
			}
			else
				if ((a == 4) && (Horse(x1, y1, x2, y2)))
				{
					cout << "yes";
				}
				else
					if ((a == 5) && (Ladia(x1, y1, x2, y2)))
					{
						cout << "yes";
					}
					else
						if ((a == 6) && (Peshka(x1, y1, x2, y2)))
						{
							cout << "yes";
						}
						else

						{
							cout << "no";
						}
}