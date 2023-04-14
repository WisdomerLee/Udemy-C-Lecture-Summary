/*
* ���� ������ : �ݺ�
* 
*/
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
#pragma region for loop
	/*
	* for (�ʱ� ����; �� ����; ����������)
	* {
	*	statement;
	* }
	* �ϸ� �ʱ� �������� �� ������ �������� �� ������ statement�� �����ϰ� ���������ڸ�ŭ ���� �� �ٽ� �ݺ��� �õ���
	* �������� ���� �Ǹ� �ݺ��� ����
	* 
	* for ( int i {0} ; i <= 10; ++i)
	* {
	*	cout << i <<endl;
	* }
	* for (int i{1}, j{5}; i<=5; ++i, ++j)
	* {
	*	cout << i << "*" << j <<"=" i*j <<endl;
	* }
	* ���� ������ ���� ���� ���ѷ����� ��
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
	/*C++ 11�̻󿡼� �� �� �ִ� for loop
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

	//auto : Ÿ�Կ� �ڵ����� ������
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
	* expression�� ���̸� statement�� ����, ������ �� ������ �ݺ���
	*/
#pragma endregion

}
