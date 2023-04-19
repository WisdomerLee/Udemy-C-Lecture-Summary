/*
함수들 정의, 프로토타입, 값 전달, return, default parameter value
오버로딩, 배열 함수에 전달, 참조로 전달하기, inline 함수, auto return 타입, recursive functions

cmath 라이브러리 : 수학 함수 들어있음
*/
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
#pragma region 함수들
double calc_area_circle(double radius) {
	double pi = 3.14159;
	return radius * radius * pi;
}

void area_circle() {
	double radius{};
	cout << "반지름을 입력하세요";
	cin >> radius;
	cout << "동그라미의 반지름" << radius << "의 넓이는 " << calc_area_circle(radius) << endl;
}

#pragma endregion

#pragma region C++프로토타입
/*
모든 함수들은 컴파일러가 미리 알고 있어야 함
함수의 이름, 돌려주는 타입, 입력받는 변수들
만약 호출될 함수가 호출하는 함수보다 더 나중에 있게 되면.. 컴파일러에서 처리할 때 에러가 발생할 수 있음
그것을 방지하기 위해 프로토타입으로 함수가 이런 형태라는 것을 컴파일러에 미리 알려주고 그 뒤에 함수의 내용을 적어 넣는 것...

*/

void say_hello(int);

int function_name(int a); //프로토 타입

int function_name(int parameter) {
	return parameter * parameter;
}

#pragma endregion
#pragma region 함수 매개변수와 돌려주는 값
/*
함수가 돌려주는 값이 있으면 함수를 호출하여 해당 값을 특정 변수에 저장할 수 있음
void인 함수는 변수에 할당할 수 없음...
*/
int parameterset() {
	int function_result = function_name(2);
	return function_result*3;
}
#pragma endregion
#pragma region 기본 값이 있는 매개변수
/*
매개변수인데 사용자가 값을 지정하지 않으면 기본적으로 지정된 값으로 자동으로 할당함
*/
double calc_cost(double base_cost, double tax_rate = 0.06) {
	return base_cost += (base_cost * tax_rate);
}
//아래의 경우는 기본 지정된 매개변수가 두 개인 경우.. 기본 지정된 매개변수는 가장 마지막 쪽에 있어야 함
void calc_cos(double base_cost, double tax_rate = 0.06, double shipping = 2.3) {
	cout << "변수 확인" << tax_rate << shipping << endl;
}
void check_cost() {
	double basic = calc_cost(20, 0.05);
	double defaulttax = calc_cost(20);//이렇게 호출할 경우 처음 함수에 지정된 0.06이라는 값을 두번째 매개변수에 자동으로 할당함...
	calc_cos(4);
	calc_cos(5, 2);
	calc_cos(5, 1, 3);
}
#pragma endregion
#pragma region 함수 overloading
/*
파라미터가 다른 돌려주는 것은 같은 함수는 같은 이름으로 여럿 설정할 수 있음
*/

int add_numbers(int, int);
double add_numbers(double, double);
int add_numbers(int, int, int);

#pragma endregion
#pragma region 배열을 함수에 전달하기
/*
함수에 배열 전달하기
배열은 값으로 복사되지 않고 참조로 전달됨
*/
//void print_array(int numbers[]);
//
//void print_array(int numbers[]) {
//	//배열에 얼마나 많은 원소들이 있는지 알 수 없음...
//	//그럼? 배열의 크기를 매개변수로 전달해야 함!!
//
//}
//배열은 반드시 크기를 같이 전달해야 함!!
void print_array(int numbers[], size_t size) {

}
#pragma endregion
#pragma region 참조로 변수 전달하기
/*
참조 형태로 전달하기 : 변경된 값이 그대로 적용됨 : 메모리의 주소 값이 전달되는 형태... 값이 복사되어 전달되는 것이 아님
변수 형태 뒤에 &를 붙이면 됨
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

//참조로 전달하되 전달되는 값을 함수에서 바꿀 수 없도록 강제하고 싶다면...? : const키워드를 넣어 참조로 전달하기

void print(const vector<int>& v);

void print(const vector<int>& v) {
	//v.at(0) = 200; //컴파일 에러가 남
	for (auto num : v) {
		cout << num << endl;
	}
}

#pragma endregion

#pragma region 값 전달 : C++ 기본
/*
함수에 매개변수로 전달되는 값은 기본적으로 값이 복사되어 들어감, 나중에 원본의 형태가 바뀌어도 매개변수로 처리된 값은 바뀌지 않음
*/
#pragma endregion

#pragma region ScopeRule
/*
{}로 지정된 범위 내에서 변수가 살아있음
외부 {}는 내부 {}의 변수를 모름
내부 {}는 외부 {}의 변수에 접근 가능

static : 전역... 사람이 메모리 관리 불가능

*/
#pragma endregion
#pragma region 함수 호출되는 원리
/*
함수 호출이 되려면....?
stack이라는 영역에서 함수를 호출
stack point가 이동하면서 main함수부터 차례대로 누적하여 memory에 할당함 : 함수 호출이 많아질수록 메모리에 overhead가 많아짐
heap이라는 영역은 


*/
#pragma endregion
#pragma region Inline Function
/*
메모리의 오버헤드를 줄이기 위해
간단한 함수의 경우 inline 함수를 도입
함수 호출로 인한 overhead 제거, 빠름, 

inline이라는 키워드를 앞에 붙여 씀
*/
//몹시 단순한 함수의 경우는 컴파일러가 자체적으로 inline처리를 함...

inline int add_numbers(int a, int b, int c, int d) {
	return a + b + c + d;
}
#pragma endregion

#pragma region Recursive Functions
/*
자기 자신을 호출하는 함수: 다른 함수를 통하거나 직접 호출하거나
수학적으로 factorial, fibonacci, fractal등...
찾기, 정리하기 등에도 많이 쓰임
Factorial
factorial(0)=1
factorial(n)= factorial(n-1)*n

기본 함수가 반드시 있어야 함.. 즉 초기 값이나 끝이날 조건 등이 있어야 함... > 그렇지 않으면 함수가 계속 쌓여 (stack)에 공간이 부족하여 stack overflow 현상이 일어날 수 있음
재귀함수는 실행될 때 함수 자체가 stack에 올라가고 다시 내부에서 자기 자신을 부를 때 stack에 추가로 또 올라감 basic case를 만나기 전까지 계속 반복
함수를 호출한 곳으로 역으로 올라가며 stack에 쌓인 함수들이 처리됨 > 실행된 함수는 값을 돌려주고 stack에서 하나씩 제외됨
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

#pragma region 함수
	/*
	함수 : 이름, 변수들, 돌려주는 타입, 함수가 처리하는 내용
	미리 정의된 함수를 호출함
	*/
	area_circle();
#pragma endregion


	return 0;
}

void say_hello(int parameter) {
	cout << "환영합니다" << parameter << "번째 방문자입니다" << endl;
}