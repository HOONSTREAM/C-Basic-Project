#include<iostream>
#include<functional> //less<> 헤더
using namespace std;

typedef less<int> Less;

int main(void) {

	Less l;

	cout << l(10, 20) << endl;
	cout << l(20, 10) << endl; //암시적 호출
	 
	cout << l.operator()(10, 20) << endl; // l 객체로 명시적 호출

	cout << Less()(10, 20) << endl; //임시객체로 암시적 함수호출
	cout << Less().operator()(10, 20) << endl; //임시객체로 명시적 함수 호출

	return 0;


}
