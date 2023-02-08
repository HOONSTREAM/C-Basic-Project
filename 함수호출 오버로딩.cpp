#include <iostream>
using namespace std;

class Funcobject {

public :

	void operator() (int arg) const {

		cout << "정수 : " << arg << endl;

	}

	void operator() (int arg, int arg2) const {

		cout << "정수 : " << arg << "," << arg2 << endl;
	}

	void operator() (int arg, int arg2, int arg3) {

		cout << "정수 : " << arg << "," << arg2 << "," << arg3 << endl;
	}
};

int main(void) {

	Funcobject print;
	//암시적 호출
	print(10);
	print(10, 20);
	print(10, 20, 30);

	cout << endl;
	// 명시적 호출
	print.operator()(10);
	print.operator()(10, 20);
	print.operator()(10, 20, 30);

	cout << endl;
	 //임시객체 생성 후 호출
	Funcobject()(10);
	Funcobject()(10, 20);
	Funcobject()(10, 20, 30);

	return 0;

}