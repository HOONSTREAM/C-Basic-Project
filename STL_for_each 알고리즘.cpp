#include <algorithm>//for_each �˰���(����)�� ����ϱ� ���� ��� 
#include <iostream>

using namespace std;

//////////Ŭ���̾�Ʈ//////////////

void Print1(int n) {

	cout << n << " ";
}

void Print2(int n) {

	cout << n * n << " ";

}

void Print3(int n) {

	cout << "���� : " << n << endl;

}

int main(void) {

	int arr[5] = { 10,20,30,40,50 };

	for_each(arr, arr + 5, Print1);
	for_each(arr, arr + 5, Print2);
	for_each(arr, arr + 5, Print3);



	return 0;

}