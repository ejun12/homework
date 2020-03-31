#include "Nonsense.h"

Nonsense::Nonsense() {
	CountQ = 0;
	randomNum = 0;
	line = "문제";
}

bool Nonsense::Start() {
	int start;
	cout << "문제를 입력하려면 '1' 을, 게임을 시작하려면 '2'를 입력해주세요."<<endl<<"-----------  ";
	cin >> start;
	cin.ignore();
	return start == 1;
}

void Nonsense::Count(ifstream &fin) {
	for (int i = 0; !fin.eof(); i++) {
		getline(fin, line);
		CountQ = i;
	}
}

 void Nonsense::random() {
	srand((unsigned int)time(NULL));
	randomNum = rand() % CountQ;
}

void Nonsense::SelectQ(ifstream&fin) {
	random();
	for (int i = 0; !fin.eof(); i++) {
		getline(fin, line);
		if (randomNum == i) {
			cout << line << endl;
			break;
		}
	}
}

string Nonsense::SelectA(ifstream&fin) {
	for (int i = 0; !fin.eof(); i++) {
		getline(fin, line);
		if (randomNum == i) break;
	}
	return line;
}

string Nonsense::InputA() {
	string answer;
	cout << "정답을 입력하시오 : ";
	cin >> answer;
	return answer;
}

bool Nonsense::Compare(string ans) {
	return InputA() == ans;
}

bool Nonsense::retry() {//정답
	string re;
	cout << "정답입니다!" << endl << endl << "다시 하시겠습니까? (Y / N)" << endl;

	while (1) {
		cin >> re;
		if (re == "Y" || re == "y") {
			cout << endl;
			return true;
			break;
		}
		else if (re == "N" || re == "n") {
			cout << endl;
			return false; 
			break;
		}
		else {
			cout << "Y 또는 N 으로 입력해주세요 ";
			continue;
		}
	}
}

