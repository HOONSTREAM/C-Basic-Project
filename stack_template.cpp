#include <iostream>
using namespace std;
//����ó�� ����
template <class T>

class Stack {

	T buf[100];
	int top;

public :
	Stack() :top(0) {}
	void Push(const T& data) {

		buf[top++] = data;

	}

	const T& Pop() {

		return buf[--top];
	}

	bool Empty() const {

		return top <= 0;
	}
};

int main(void) {

	Stack<int> st;

	st.Push(10);
	st.Pop();

}