#include "Nonsense.h"

Nonsense::Nonsense() {
	CountQ = 0;
	randomNum = 0;
	line = "����";
}

bool Nonsense::Start() {
	int start;
	cout << "������ �Է��Ϸ��� '1' ��, ������ �����Ϸ��� '2'�� �Է����ּ���."<<endl<<"-----------  ";
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
	cout << "������ �Է��Ͻÿ� : ";
	cin >> answer;
	return answer;
}

bool Nonsense::Compare(string ans) {
	return InputA() == ans;
}

bool Nonsense::retry() {//����
	string re;
	cout << "�����Դϴ�!" << endl << endl << "�ٽ� �Ͻðڽ��ϱ�? (Y / N)" << endl;

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
			cout << "Y �Ǵ� N ���� �Է����ּ��� ";
			continue;
		}
	}
}

