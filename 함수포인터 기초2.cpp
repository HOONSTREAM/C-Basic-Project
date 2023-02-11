#include <iostream>
using namespace std;

void Print(int n) {

	cout << "�����Լ� : " << n << endl;
}

namespace A {

	void Print(int n) {

		cout << "namespace Print �Լ� : " << n << endl;
	}
}

class Point {

public :

	static void Print(int n) { //����ƽ �����Լ�

		cout << "Point Ŭ������ ��������Լ� : " << n << endl;
	}
};

int main(void) {

	void (*sh)(int); //�����Լ� ������ ����

	Print(10);
	A::Print(20);
	Point::Print(30);

	sh = Print;

	sh(10);
	sh = A::Print;
	sh(10);
	sh = Point::Print;
	sh(30);

	return 0;



}