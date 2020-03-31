#include "Nonsense.h"

void Nonsense::OutQ(ofstream&Qout) {
	string Q;
	cout << "문제를 입력하세요 : ";
	getline(cin,Q);
	Qout << "Q." << Q << endl;
}

void Nonsense::OutA(ofstream&Aout) {
	string A;
	cout << "문제의 답을 입력하세요 : ";
	getline(cin,A);
	Aout << A << endl;
}


bool Nonsense::retryIn() {
	string re;
	cout << endl << "문제를 또 입력하시겠습니까?  (Y / N)   ";
	while (1) {
		cin >> re;
		cin.ignore();
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
