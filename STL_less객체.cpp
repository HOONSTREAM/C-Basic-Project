#include<iostream>
#include<functional> //less<> ���
using namespace std;

typedef less<int> Less;

int main(void) {

	Less l;

	cout << l(10, 20) << endl;
	cout << l(20, 10) << endl; //�Ͻ��� ȣ��
	 
	cout << l.operator()(10, 20) << endl; // l ��ü�� ����� ȣ��

	cout << Less()(10, 20) << endl; //�ӽð�ü�� �Ͻ��� �Լ�ȣ��
	cout << Less().operator()(10, 20) << endl; //�ӽð�ü�� ����� �Լ� ȣ��

	return 0;


}
