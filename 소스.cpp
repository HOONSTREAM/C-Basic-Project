#include <iostream>
using namespace std;

class Array {

private :
	int* arr;
	int size;
	int capacity;
	Array(const Array& copy) {}
	Array& operator= (const Array& ref) {}
	//�迭�� ������� �����̰�, ����ҿ� ����� �����ʹ� '���ϼ�'�� ����Ǿ�� �ϱ� ������, 
	//��κ��� ��� ������� ����� ���ʿ��ϰų� �߸��� �Ϸ� ���ֵȴ�. 

public:
	Array(int cap = 100) :capacity(cap), size(0),arr(0) {

		arr = new int[capacity];
	}

	~Array() {

		delete[]arr;

	}

	void Add(int data) {

		if (size < capacity)
			arr[size++] = data;
	}

	int Size() const { return size; }


	int operator[] (int idx) const {

		return arr[idx];

	}

	int& operator[] (int idx) {

		return arr[idx];

	}
};

int main(void) {

	Array ar(10);

	ar.Add(10);
	ar.Add(20);
	ar.Add(30);

	cout << ar[0] << endl;

	ar[0] = 100;

	cout << ar[0] << endl;

	return 0;

}