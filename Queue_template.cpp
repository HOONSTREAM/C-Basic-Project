#include <iostream>
using namespace std;
template<class T>

class Queue {

	enum = { CAP = 100 };
	T buf[CAP];
	int front;
	int rear;

public :

	Queue() :front(0), rear(0) {} 
	void Push(const T& data) {

		buf[rear = (rear + 1) % CAP] = data;
	}

	const T& Pop() {

		return buf[front = (front + 1) % CAP];

	}

	bool Empty() const {

		return rear == front;

	}
};