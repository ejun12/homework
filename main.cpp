#include "Nonsense.h"

int main() {
	Nonsense nonsense;
	bool retry = true;
	string Answer;

	if (nonsense.Start()) {
		ofstream Qout, Aout;
		Qout.open("Q.txt", ios::app);
		if (!Qout) {
			cout << "파일 열기에 실패했습니다." << endl;
		}

		Aout.open("A.txt", ios::app);
		if (!Aout) {
			cout << "파일 열기에 실패했습니다." << endl;
		}

		while(1) {

			nonsense.OutQ(Qout);
			nonsense.OutA(Aout);

			if (nonsense.retryIn()) continue;

			else break;
		}

		Qout.close();
		Aout.close();

	}

	ifstream Q, A;

	Q.open("Q.txt");
	if (!Q) {
		cout << "파일 열기에 실패했습니다." << endl;
	}

	A.open("A.txt");
	if (!A) {
		cout << "파일 열기에 실패했습니다." << endl;
	}

	nonsense.Count(Q);

	Q.close(); Q.clear();
	Q.open("Q.txt");

	for (int i = 0;retry; i++) {

		nonsense.SelectQ(Q);
		Answer = nonsense.SelectA(A);

		while (1) {

			if (nonsense.Compare(Answer)) {
				retry = nonsense.retry();
				break;
			}

			else {
				cout << endl << "틀렸습니다. ";
				continue;
			}

		}

		Q.close(); Q.clear();
		A.close(); A.clear();
		Q.open("Q.txt");
		A.open("A.txt");

	}

	Q.close();
	A.close();

}