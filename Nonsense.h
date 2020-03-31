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
	Nonsense(); //기본생성자

	bool Start(); //문제를 입력할지 게임을 시작할지 묻기

	void OutQ(ofstream&Qout); //문제 입력
	void OutA(ofstream&Aout); //답 입력
	bool retryIn(); //입력 다시 할건지 묻기

	void random(); //숫자랜덤선택
	void Count(ifstream &fin); //파일속 문제 개수 세기
	void SelectQ(ifstream&fin); //문제선택
	string SelectA(ifstream&fin); // 문제에 맞는 정답 선택
	string InputA(); //정답입력
	bool Compare(string ans); //문제의 답과 입력받은 답을 비교
	bool retry(); //게임을 다시 할건지 묻기
};