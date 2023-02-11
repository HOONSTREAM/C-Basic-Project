#include <iostream>
using namespace std;

void Print(int n) {

	cout << "전역함수 : " << n << endl;
}

namespace A {

	void Print(int n) {

		cout << "namespace Print 함수 : " << n << endl;
	}
}

class Point {

public :

	static void Print(int n) { //스태틱 전역함수

		cout << "Point 클래스의 정적멤버함수 : " << n << endl;
	}
};

int main(void) {

	void (*sh)(int); //정적함수 포인터 선언

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