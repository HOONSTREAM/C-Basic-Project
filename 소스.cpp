#include <iostream>
using namespace std;

class Funcobject {

public :

	void operator() (int arg) const {

		cout << "���� : " << arg << endl;

	}

	void operator() (int arg, int arg2) const {

		cout << "���� : " << arg << "," << arg2 << endl;
	}

	void operator() (int arg, int arg2, int arg3) {

		cout << "���� : " << arg << "," << arg2 << "," << arg3 << endl;
	}
};

int main(void) {

	Funcobject print;
	//�Ͻ��� ȣ��
	print(10);
	print(10, 20);
	print(10, 20, 30);

	cout << endl;
	// ����� ȣ��
	print.operator()(10);
	print.operator()(10, 20);
	print.operator()(10, 20, 30);

	cout << endl;
	 //�ӽð�ü ���� �� ȣ��
	Funcobject()(10);
	Funcobject()(10, 20);
	Funcobject()(10, 20, 30);

	return 0;

}