#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> v1(5); // 0으로 초기화 된 size가 5인 컨테이너
	v1.push_back(10); // 0에 이어 10 추가
	v1.push_back(20);// 10에 이어 20 추가
	v1.push_back(30);// 20에 이어 30추가
	v1.push_back(40);
	v1.push_back(50);

	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
		cout << v1[i] << " ";
	cout << endl;

	vector<int>v2(5); //0으로 초기화된 size가 5인 컨테이너 생성
	v2[0] = 10;
	v2[1] = 20;
	v2[2] = 30;
	v2[3] = 40;
	v2[4] = 50;

	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
		cout << v2[i] << " ";
	cout << endl;

	return 0;

}