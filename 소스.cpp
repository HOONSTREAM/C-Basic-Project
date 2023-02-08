#include <iostream>
using namespace std;

class Array {

private :
	int* arr;
	int size;
	int capacity;
	Array(const Array& copy) {}
	Array& operator= (const Array& ref) {}
	//배열은 저장소의 일종이고, 저장소에 저장된 데이터는 '유일성'이 보장되어야 하기 때문에, 
	//대부분의 경우 저장소의 복사는 불필요하거나 잘못된 일로 간주된다. 

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