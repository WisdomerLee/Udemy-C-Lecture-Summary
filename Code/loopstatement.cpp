/*
* 루프 돌리기 : 반복
* 
*/
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
#pragma region for loop
	/*
	* for (초기 조건; 끝 조건; 증가연산자)
	* {
	*	statement;
	* }
	* 하면 초기 조건으로 된 조건이 끝조건이 될 때까지 statement를 실행하고 증가연산자만큼 더한 뒤 다시 반복을 시도함
	* 끝조건이 참이 되면 반복이 종료
	* 
	* for ( int i {0} ; i <= 10; ++i)
	* {
	*	cout << i <<endl;
	* }
	* for (int i{1}, j{5}; i<=5; ++i, ++j)
	* {
	*	cout << i << "*" << j <<"=" i*j <<endl;
	* }
	* 만약 다음과 같이 쓰면 무한루프가 됨
	* for(;;)
	* {
	*	statement;
	* }
	*/
	for (int i{ 1 }; i <= 10; ++i)
	{
		cout << i << endl;
	}
	for (int i{ 1 }; i <= 10; i += 2) {
		cout << i << endl;
	}
	for (int i{ 10 }; i > 0; --i) {
		cout << i << endl;
	}

	for (int i{ 10 }; i <= 100; i += 10) {
		if (i % 15 == 0) {
			cout << i << endl;
		}
	}
	/*C++ 11이상에서 쓸 수 있는 for loop
	* 
	* for(var_type var_name: sequence){
	*	statement;
	* }
	* 
	*/
	int scores[]{ 100, 97, 90, 95 };

	for (int score : scores) {
		cout << score << endl;
	}

	//auto : 타입에 자동으로 맞춰줌
	for (auto score : scores) {
		cout << score << endl;
	}

	vector<int> environment{ 5, 15, 90, 20, 30, 15, -15, 0 };
	for (auto envi : environment) {
		cout << envi << endl;
	}

	for (auto c : "This is a test") {
		if (c != ' ') {
			cout << c;
		}
	}
	for (auto val : { 1,2,3,4,5 }) {
		cout << val << endl;
	}

#pragma endregion
#pragma region whileloop
	/*
	* while(expression){
	*	statement;
	* }
	* expression이 참이면 statement를 실행, 거짓이 될 때까지 반복함
	*/
#pragma endregion

}
