/*
* C++�� statement, ���, ǥ��, �� �����ڵ��� �� ����
*
* if(a > b)
* {
*
* }
*
* lhs = rhs
* rhs : ������� ��
* lhs : ���� ����� ��
* ������� ���� ���� ����� ���� ������ Ÿ���� ���ƾ� ��
* 
*/

#include <iostream>

using namespace std;

int main() 
{
#pragma region = ������
	int num1{ 10 };
	int num2{ 20 };

	num1 = 100;

	num1 = num2;

	//num1 = num2 = 50;

	cout << "num1�� " << num1 << endl;
	cout << "num2�� " << num2 << endl;

#pragma endregion
#pragma region +,-������

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

	//��� ����
	const double usd_per_eur{ 1.19 };
	double euros{0.0};
	double dollers{ 0.0 };


	cout << "���θ� �޷��� ��ȯ�մϴ�" << endl;
	cout << "���θ� �Է��ϼ���";
	cin >> euros;
	dollers = euros * usd_per_eur;

	cout << euros << "���δ� " << dollers << "�޷� �Դϴ�" << endl;


#pragma endregion

	
	return 0;
}