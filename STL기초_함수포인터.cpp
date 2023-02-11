#include <iostream>
using namespace std;

void Print(int n) {

	cout << "정수 : " << n << endl;
}

int main(void) {
	 
	// void Print(int n)의 시작주소
	void(*SH)(int);  {

		SH = Print;
	}


	Print(10);
	SH(10);
	(*SH)(10);



	cout << Print << endl;
	cout << SH << endl;
	cout << (*SH) << endl;


	return 0;

}

