#include "Nonsense.h"

void Nonsense::OutQ(ofstream&Qout) {
	string Q;
	cout << "������ �Է��ϼ��� : ";
	getline(cin,Q);
	Qout << "Q." << Q << endl;
}

void Nonsense::OutA(ofstream&Aout) {
	string A;
	cout << "������ ���� �Է��ϼ��� : ";
	getline(cin,A);
	Aout << A << endl;
}


bool Nonsense::retryIn() {
	string re;
	cout << endl << "������ �� �Է��Ͻðڽ��ϱ�?  (Y / N)   ";
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
			cout << "Y �Ǵ� N ���� �Է����ּ��� ";
			continue;
		}
	}
}
