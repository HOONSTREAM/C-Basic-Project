#include <iostream>
using namespace std;

class MyType {};

template <class T>

void Copy(T t[], T s[], int size) {

	for (int i = 0; i < size; ++i)
		t[i] = s[i];

}

int main() {

	int arr1[5] = { 10,20,30,40,50 };
	int arr2[5];

	Copy(arr2, arr1, 5);

	MyType myArr1[5];
	MyType myArr2[5];

	Copy(myArr2, myArr1, 5);

	cout << arr2[1] << endl;

	return 0;

}
