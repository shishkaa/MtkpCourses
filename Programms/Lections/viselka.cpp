// ConsoleApplication31.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>
using namespace std;
void show_mask(char *mas, int len) {
	for (int i = 0; i < len; i++) {
		cout << mas[i];
	}
}
void check(string word, char *mas, int len, char attempt, int *health,int *sucsess) {
	int cnt = 0;
	int corrects = 0;
	for (int i = 0; i < word.length(); i++) {
		if (word[i] == attempt) {
			mas[i] = attempt;
			corrects++;
		}

		else {
			cnt++;
		}
	}
	if (cnt == word.length()) {
		*health = *health - 1;
	}
	else {
		*sucsess+=corrects;
	}
}
bool check_attempt(char *history, int len,char attempt) {
	for (int i = 0; i < len; i++) {
		if (history[i] == attempt) {
		//	cout << history[i] << attempt;
			return true;
			//cout << history[i] << attempt;
		}
	}
	return false;

}
int main()
{
	int attempts_cnt = 0;
	char history[1000];
	for (int i = 0; i < 1000; i++) {
		history[i] = '*';
	}
	int sucsess = 0;
	int health = 9;
	char attempt;
	setlocale(LC_ALL, "russian");
	string word;
	cout << "Здравствуй, введи слово"<<endl;
	cin >> word;
	system("cls");
	char *mask = new char[word.length()];
	for (int i = 0; i < word.length(); i++) {
		mask[i] = '_';
	}
	show_mask(mask, word.length());
	while (health > 0) {
		cout << "" << endl;
		cin >> attempt;

		if (check_attempt(history, 1000, attempt) == true) {
			//cout << check_attempt(history, 1000, attempt);
			cout << "вы ввели повторно букву" << endl;
			cin >> attempt;
		}
		else{
		check(word, mask, word.length(), attempt, &health,&sucsess);
		history[attempts_cnt] = attempt;
		attempts_cnt++;
		cout << "У вас осталось жизней :" << health << endl;
		//cout << sucsess << endl;
		show_mask(mask, word.length());
		if (sucsess == word.length()) {
			system("cls");
			cout << "" << endl;
			cout << "you win";
			break;
		}
		}
	}
	if (health == 0) {
		cout << "you lose";
	}


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
