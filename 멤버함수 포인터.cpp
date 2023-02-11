#include <iostream>
using namespace std;

class Point {

private :

	int x, y;

public :

	explicit Point(int _x = 0, int _y = 0) :x(_x),y(_y) {}
	void Print() const { cout << x << "," << y << endl; }
	void PrintInt(int n) { cout << "테스트 정수 : " << n << endl; }
};

int main(void) {

	Point pt(2, 3);
	Point* p = &pt;

	void (Point::* pf1)() const;
	pf1 = &Point::Print;

	void (Point:: * pf2)(int);
	pf2 = &Point::PrintInt;

	pt.Print();
	pt.PrintInt(10);
	cout << endl;

	(pt.*pf1)();
	(pt.*pf2)(10);

	(p->*pf1)();
	(p->*pf2)(10);

	return 0;



}