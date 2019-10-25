#include <iostream>
#include <math.h>
using namespace std;

int coordinate[4];
int chessmen_number = 0;

void output_(int out) 
{
	if (out == 1)
	{
		cout << "Может переместиться." << endl;
	}
	else
	{
		cout << "Не может переместиться." << endl;
	}
}
void fub() 
{	
	cout << "Введите номер фигуры: " << endl;
	cin >> chessmen_number;
	cout << "Введите исходные координаты: " << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> coordinate[i];
	}
	cout << "Введите координаты перемещения: " << endl;
	for (int i = 2; i < 4; i++)
	{
		cin >> coordinate[i];
	}
}
void cout_chessmen()
{
	string chessmen[6] = { "Король", "Ферзь", "Слон", "Конь", "Ладья", "Пешка" };
	
	for (int i = 0; i < 6; i++) 
	{
		cout << i + 1 << ": " << chessmen[i]<< endl;

	}
}
int king_(int* king) 
{	
	int g = 0;
	if (abs(king[2] - king[0]) == 1 && abs(king[3] - king[1]) == 1)
	{
		g = 1;
	}
	else 
	{
		g = 2;
	}
	return g;
}
int queen_(int* queen)
{
	int g = 0;
	if (abs(queen[2] - queen[0]) <= 8 && abs(queen[3] - queen[1]) <= 8 )
	{
		if (abs(queen[2] - queen[0]) <= 8 && queen[3] == queen[1] ||
			queen[2] == queen[0] && abs(queen[3] - queen[1]) <= 8) 
		{
			g = 1;
		}
		else if (abs(queen[2] - queen[0]) == abs(queen[3] - queen[1])) 
		{
			g = 1;
		}
	}
	else
	{
		g = 2;
	}
	return g;
}
int elephant_(int* elephant) 
{
	int g = 0;
	if (abs(elephant[2] - elephant[0]) <= 8 && abs(elephant[3] - elephant[1]) <= 8)
	{
		
		if (abs(elephant[2] - elephant[0]) == abs(elephant[3] - elephant[1]))
		{
			g = 1;
		}
	}
	else
	{
		g = 2;
	}
	return g;
}
int horse_(int* horse) 
{
	int g = 0; 
	if (abs(horse[2] - horse[0]) == 1 &&
		abs(horse[3] - horse[1]) == 2 ||
		abs(horse[2] - horse[0]) == 2 &&
		abs(horse[3] - horse[1]) == 1) 
	{
		g = 1;
	}
	else 
	{
		g = 2;
	}
	return g;
}
int rook_(int* rook) 
{
	int g = 0;
	if (abs(rook[2] - rook[0]) <= 8 && rook[3] == rook[1] ||
		rook[2] == rook[0] && abs(rook[3] - rook[1]) <= 8)
	{
		g = 1;
	}
	else
	{
	g = 2;
	}
	return g;
}
int pawn_(int* pawn) 
{
	int g = 0;
	if (abs(pawn[2] - pawn[0]) <= 2 && pawn[3] == pawn[1] ||
		pawn[2] == pawn[0] && abs(pawn[3] - pawn[1]) <= 2)
	{
		g = 1;
	}
	else
	{
		g = 2;
	}
	return g;
}
int main()
{	
	setlocale(LC_CTYPE, "");
	cout_chessmen();

	for (;;) 
	{
	
	fub();

	if (chessmen_number == 1) // Король
	{	
		output_(king_(coordinate));
	}
	else if (chessmen_number == 2) // Ферзь
	{	
		output_(queen_(coordinate));
	}
	else if (chessmen_number == 3) // Слон
	{
		output_(elephant_(coordinate));
	}
	else if (chessmen_number == 4) // Конь
	{
		output_(horse_(coordinate));
	}
	else if (chessmen_number == 5) // Ладья
	{
		output_(rook_(coordinate));
	}
	else if (chessmen_number == 6) // Пешка
	{
		output_(pawn_(coordinate));
	}
}
}
