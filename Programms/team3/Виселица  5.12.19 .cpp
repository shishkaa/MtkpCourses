#include <iostream>
#include <string>
using namespace std;

void show_mask(char* mas, int len) {
	for (int i = 0; i < len; i++) {
		cout << mas[i];
	}
}
void check(string word, char* mas, int len, char attempt, int* health, int* sucsess) {
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
		*sucsess += corrects;
	}
}
bool check_attempt(char* history, int len, char attempt) {
	for (int i = 0; i < len; i++) {
		if (history[i] == attempt) {
			cout << history[i] << attempt;
			return true;
			cout << history[i] << attempt;
		}
	}
	return false;

}
int main()
{ 
	setlocale(LC_ALL, "russian");
	int attempts_cnt = 0;
	char history[1000];
	for (int i = 0; i < 1000; i++) {
		history[i] = '*';
	}
	int sucsess = 0;
	int health = 10;
	char attempt;
	
	string word;
	cout << "Здравствуй, введи слово" << endl;
	cin >> word;
	system("cls");
	char* mask = new char[word.length()];
	for (int i = 0; i < word.length(); i++) {
		mask[i] = '_';
	}
	show_mask(mask, word.length());
	while (health > 0) {
		cout << "" << endl;
		cin >> attempt;

		if (check_attempt(history, 1000, attempt) == true) {
			cout << check_attempt(history, 1000, attempt);
			cout << "вы ввели повторно букву" << endl;
			cin >> attempt;
		}
		else {
			check(word, mask, word.length(), attempt, &health, &sucsess);
			history[attempts_cnt] = attempt;
			attempts_cnt++;
			cout << "У вас осталось жизней :" << health << endl;
			cout << sucsess << endl;
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
