#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Nonsense {
	int CountQ;
	int randomNum;
	string line;

public:
	Nonsense(); //�⺻������

	bool Start(); //������ �Է����� ������ �������� ����

	void OutQ(ofstream&Qout); //���� �Է�
	void OutA(ofstream&Aout); //�� �Է�
	bool retryIn(); //�Է� �ٽ� �Ұ��� ����

	void random(); //���ڷ�������
	void Count(ifstream &fin); //���ϼ� ���� ���� ����
	void SelectQ(ifstream&fin); //��������
	string SelectA(ifstream&fin); // ������ �´� ���� ����
	string InputA(); //�����Է�
	bool Compare(string ans); //������ ��� �Է¹��� ���� ��
	bool retry(); //������ �ٽ� �Ұ��� ����
};