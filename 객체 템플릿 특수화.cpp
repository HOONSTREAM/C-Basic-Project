#include <iostream>
using namespace std;

class Point {

private :

	int x, y;

public :

	explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void Print() const { cout << x << "," << y << endl; }

};

template<class T>
void Print(T a)
{

	cout << a << endl;
}

template<>
void Print<Point>(Point a)
{

	a.Print();

	
}

int main() {

	int n = 10;
	double d = 2.5;
	Point pt(2, 3);


	Print(pt);


	return 0;

}