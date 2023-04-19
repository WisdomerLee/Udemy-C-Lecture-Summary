/*
�Լ��� ����, ������Ÿ��, �� ����, return, default parameter value
�����ε�, �迭 �Լ��� ����, ������ �����ϱ�, inline �Լ�, auto return Ÿ��, recursive functions

cmath ���̺귯�� : ���� �Լ� �������
*/
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
#pragma region �Լ���
double calc_area_circle(double radius) {
	double pi = 3.14159;
	return radius * radius * pi;
}

void area_circle() {
	double radius{};
	cout << "�������� �Է��ϼ���";
	cin >> radius;
	cout << "���׶���� ������" << radius << "�� ���̴� " << calc_area_circle(radius) << endl;
}

#pragma endregion

#pragma region C++������Ÿ��
/*
��� �Լ����� �����Ϸ��� �̸� �˰� �־�� ��
�Լ��� �̸�, �����ִ� Ÿ��, �Է¹޴� ������
���� ȣ��� �Լ��� ȣ���ϴ� �Լ����� �� ���߿� �ְ� �Ǹ�.. �����Ϸ����� ó���� �� ������ �߻��� �� ����
�װ��� �����ϱ� ���� ������Ÿ������ �Լ��� �̷� ���¶�� ���� �����Ϸ��� �̸� �˷��ְ� �� �ڿ� �Լ��� ������ ���� �ִ� ��...

*/

void say_hello(int);

int function_name(int a); //������ Ÿ��

int function_name(int parameter) {
	return parameter * parameter;
}

#pragma endregion
#pragma region �Լ� �Ű������� �����ִ� ��
/*
�Լ��� �����ִ� ���� ������ �Լ��� ȣ���Ͽ� �ش� ���� Ư�� ������ ������ �� ����
void�� �Լ��� ������ �Ҵ��� �� ����...
*/
int parameterset() {
	int function_result = function_name(2);
	return function_result*3;
}
#pragma endregion
#pragma region �⺻ ���� �ִ� �Ű�����
/*
�Ű������ε� ����ڰ� ���� �������� ������ �⺻������ ������ ������ �ڵ����� �Ҵ���
*/
double calc_cost(double base_cost, double tax_rate = 0.06) {
	return base_cost += (base_cost * tax_rate);
}
//�Ʒ��� ���� �⺻ ������ �Ű������� �� ���� ���.. �⺻ ������ �Ű������� ���� ������ �ʿ� �־�� ��
void calc_cos(double base_cost, double tax_rate = 0.06, double shipping = 2.3) {
	cout << "���� Ȯ��" << tax_rate << shipping << endl;
}
void check_cost() {
	double basic = calc_cost(20, 0.05);
	double defaulttax = calc_cost(20);//�̷��� ȣ���� ��� ó�� �Լ��� ������ 0.06�̶�� ���� �ι�° �Ű������� �ڵ����� �Ҵ���...
	calc_cos(4);
	calc_cos(5, 2);
	calc_cos(5, 1, 3);
}
#pragma endregion
#pragma region �Լ� overloading
/*
�Ķ���Ͱ� �ٸ� �����ִ� ���� ���� �Լ��� ���� �̸����� ���� ������ �� ����
*/

int add_numbers(int, int);
double add_numbers(double, double);
int add_numbers(int, int, int);

#pragma endregion
#pragma region �迭�� �Լ��� �����ϱ�
/*
�Լ��� �迭 �����ϱ�
�迭�� ������ ������� �ʰ� ������ ���޵�
*/
//void print_array(int numbers[]);
//
//void print_array(int numbers[]) {
//	//�迭�� �󸶳� ���� ���ҵ��� �ִ��� �� �� ����...
//	//�׷�? �迭�� ũ�⸦ �Ű������� �����ؾ� ��!!
//
//}
//�迭�� �ݵ�� ũ�⸦ ���� �����ؾ� ��!!
void print_array(int numbers[], size_t size) {

}
#pragma endregion
#pragma region ������ ���� �����ϱ�
/*
���� ���·� �����ϱ� : ����� ���� �״�� ����� : �޸��� �ּ� ���� ���޵Ǵ� ����... ���� ����Ǿ� ���޵Ǵ� ���� �ƴ�
���� ���� �ڿ� &�� ���̸� ��
*/
void scale_number(int& num);

void scale_number(int& num) {
	if (num > 100) {
		num = 100;
	}
}

void print(vector<int>& v);

void print(vector<int>& v) {
	for (auto vec : v) {
		cout << vec << endl;
	}
}

//������ �����ϵ� ���޵Ǵ� ���� �Լ����� �ٲ� �� ������ �����ϰ� �ʹٸ�...? : constŰ���带 �־� ������ �����ϱ�

void print(const vector<int>& v);

void print(const vector<int>& v) {
	//v.at(0) = 200; //������ ������ ��
	for (auto num : v) {
		cout << num << endl;
	}
}

#pragma endregion

#pragma region �� ���� : C++ �⺻
/*
�Լ��� �Ű������� ���޵Ǵ� ���� �⺻������ ���� ����Ǿ� ��, ���߿� ������ ���°� �ٲ� �Ű������� ó���� ���� �ٲ��� ����
*/
#pragma endregion

#pragma region ScopeRule
/*
{}�� ������ ���� ������ ������ �������
�ܺ� {}�� ���� {}�� ������ ��
���� {}�� �ܺ� {}�� ������ ���� ����

static : ����... ����� �޸� ���� �Ұ���

*/
#pragma endregion
#pragma region �Լ� ȣ��Ǵ� ����
/*
�Լ� ȣ���� �Ƿ���....?
stack�̶�� �������� �Լ��� ȣ��
stack point�� �̵��ϸ鼭 main�Լ����� ���ʴ�� �����Ͽ� memory�� �Ҵ��� : �Լ� ȣ���� ���������� �޸𸮿� overhead�� ������
heap�̶�� ������ 


*/
#pragma endregion
#pragma region Inline Function
/*
�޸��� ������带 ���̱� ����
������ �Լ��� ��� inline �Լ��� ����
�Լ� ȣ��� ���� overhead ����, ����, 

inline�̶�� Ű���带 �տ� �ٿ� ��
*/
//���� �ܼ��� �Լ��� ���� �����Ϸ��� ��ü������ inlineó���� ��...

inline int add_numbers(int a, int b, int c, int d) {
	return a + b + c + d;
}
#pragma endregion

#pragma region Recursive Functions
/*
�ڱ� �ڽ��� ȣ���ϴ� �Լ�: �ٸ� �Լ��� ���ϰų� ���� ȣ���ϰų�
���������� factorial, fibonacci, fractal��...
ã��, �����ϱ� ��� ���� ����
Factorial
factorial(0)=1
factorial(n)= factorial(n-1)*n

�⺻ �Լ��� �ݵ�� �־�� ��.. �� �ʱ� ���̳� ���̳� ���� ���� �־�� ��... > �׷��� ������ �Լ��� ��� �׿� (stack)�� ������ �����Ͽ� stack overflow ������ �Ͼ �� ����
����Լ��� ����� �� �Լ� ��ü�� stack�� �ö󰡰� �ٽ� ���ο��� �ڱ� �ڽ��� �θ� �� stack�� �߰��� �� �ö� basic case�� ������ ������ ��� �ݺ�
�Լ��� ȣ���� ������ ������ �ö󰡸� stack�� ���� �Լ����� ó���� > ����� �Լ��� ���� �����ְ� stack���� �ϳ��� ���ܵ�
*/

unsigned long long factorial(unsigned long long n) {
	if (n == 0)
	{
		return 1; // base case
	}
	return n * factorial(n - 1);
}

unsigned long long fibonacci(unsigned long long n) {
	if (n <= 1) {
		return n;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}
#pragma endregion


int main() 
{

	//int random_number{};
	//size_t count{ 10 };
	//int min{ 1 };
	//int max{ 6 };


	////cout << "Random" << RADN_MAX << endl;
	//srand(time(nullptr));

	//for (size_t i{ 1 }; i <= count; ++i) {
	//	random_number = rand() % max + min;
	//	cout << random_number << endl;
	//}

	//cout << endl;

#pragma region �Լ�
	/*
	�Լ� : �̸�, ������, �����ִ� Ÿ��, �Լ��� ó���ϴ� ����
	�̸� ���ǵ� �Լ��� ȣ����
	*/
	area_circle();
#pragma endregion


	return 0;
}

void say_hello(int parameter) {
	cout << "ȯ���մϴ�" << parameter << "��° �湮���Դϴ�" << endl;
}