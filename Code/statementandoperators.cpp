/*
* C++의 statement, 블록, 표현, 각 연산자등을 볼 예정
*
* if(a > b)
* {
*
* }
*
* lhs = rhs
* rhs : 집어넣을 값
* lhs : 값이 저장될 곳
* 집어넣을 값과 값이 저장될 곳의 데이터 타입은 같아야 함
* 
*/

#include <iostream>

using namespace std;

int main() 
{
#pragma region = 연산자
	int num1{ 10 };
	int num2{ 20 };

	num1 = 100;

	num1 = num2;

	//num1 = num2 = 50;

	cout << "num1은 " << num1 << endl;
	cout << "num2는 " << num2 << endl;

#pragma endregion
#pragma region +,-연산자

	cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;

	int result{ 0 };

	result = num1 + num2;
	cout << num1 << "+" << num2 << " = " << result << endl;

	result = num1 - num2;
	cout << num1 << "-" << num2 << " = " << result << endl;

	result = num1 * num2;
	cout << num1 << "*" << num2 << " = " << result << endl;

	result = num1 / num2;
	cout << num1 << "/" << num2 << " = " << result << endl;

	result = num2 / num1;
	cout << num2 << "/" << num1 << " = " << result << endl;

	result = num1 % num2;
	cout << num1 << "%" << num2 << " = " << result << endl;

	//상수 지정
	const double usd_per_eur{ 1.19 };
	double euros{0.0};
	double dollers{ 0.0 };


	cout << "유로를 달러로 전환합니다" << endl;
	cout << "유로를 입력하세요";
	cin >> euros;
	dollers = euros * usd_per_eur;

	cout << euros << "유로는 " << dollers << "달러 입니다" << endl;


#pragma endregion

	
	return 0;
}