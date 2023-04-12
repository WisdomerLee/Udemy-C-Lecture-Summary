#include <iostream>

//변수는 메모리에 저장되는 것 : 메모리의 주소를 불러와서 값을 적용시킴
//프로그래머가 메모리 주소가 아닌 해당 변수의 이름으로 접근할 수 있도록 함
//변수는 변수 형태와 변수 이름으로 처음에 선언하게 됨
//int age : int : 변수 형태, age : 해당 변수의 이름
//대소문자를 구분하므로 Age, age를 다른 변수로 인식함
//변수의 이름은 숫자로 시작할 수 없음
//빈칸도 들어갈 수 없음
//특수문자도 들어갈 수 없음 유일한 예외는 _
//변수는 값을 지정하기 전에 쓰면 안 됨
//변수 초기화 지정하기


using namespace std;

int age{ 18 }; //전역변수 : 하지만 쓰게 되면 에러 추적이 쉽지 않게 됨...
//되도록 로컬변수로 쓰는 것을 추천...?

int main()
{
#pragma region 변수 초기화
	//int age; //초기화 되지 않은 것
	//int arg = 21; //C언어처럼 초기화
	//int ageother(21); //생성자처럼 초기화하기
	//int ageanother{ 21 }; //리스트 초기화 방식처럼 쓰기 : C++11이상버전
	//함수 내부에 선언된 변수를 지역변수- 로컬변수라고 함
	//함수 바깥에서 선언된 변수 : 전역변수 : 
	int room_width{ 0 };
	int room_length{ 0 };
	cout << "방의 너비를 입력하세요";
	cin >> room_width;
	cout << "방의 길이를 입력하세요";
	cin >> room_length;

	cout << "방의 넓이는 :" << room_width * room_length << "제곱미터" << endl;

#pragma endregion

#pragma region 변수 타입

	//C++에서는 데이터 타입의 크기를 알아야 함
	//bit 단위의 파일 크기
	//char : 8bit -1byte
	//char16_t : 16bit
	//char32_t : 32bit
	//wchar_t : 가장 큰 값
	//
	//int 형태 
	//short int: 16bit
	//int : 16bit
	//long int: 32bit
	//long long int: 64bit

	//unsigned short int: 16bit
	//unsigned int: 16bit
	//unsigned long int: 32bit
	//unsigned long long int: 64bit

	//float 형태
	//float : 7decimal digits
	//double : 15decimal digits
	//long double : 19 decimal digits

	//bool형태
	//bool : 8bit
	//0 : false , 0이 아닌 값 : true

	//character type
	char middle_initial{ 'J' };
	cout << "저 외국인의 중간 이름은 " << middle_initial << endl;

	//int 타입
	unsigned short int exam_score{55};
	cout << "시험 점수는 " << exam_score << endl;

	int countries_represented{ 75 };
	cout << "참가한 국가는 " << countries_represented << "개 국입니다" << endl;

	long people_in_florida{ 20610000 };
	cout << "플로리다에 사는 사람은 " << people_in_florida << "명 입니다" << endl;

	long long people_on_earth{ 8000000000 };
	cout << "지구에 사는 사람은 " << people_on_earth << "명 입니다" << endl;

	//float type

	float car_payment{ 401.23 };
	cout << "자동차 세금은 " << car_payment << "입니다" << endl;

	double pi{ 3.14159 };
	cout << "원주율 값은 " << pi << "입니다" << endl;
	long double large_amount{ 2.7e120 };
	cout << large_amount << "매우 큰 숫자입니다" << endl;

	//boolean type
	bool game_over{ false };
	cout << "게임은 끝났는가?" << game_over << endl;

	//데이터 값의 한계를 넘어서는 값을 넘어가거나(overflow) 최소값 이하로 내려가면(underflow)...
#pragma endregion
#pragma region Sizeof함수
	cout << "sizeof 정보" << endl;
	cout << "================";
	cout << "char: " << sizeof(char) << "bytes" << endl;
	cout << "int: " << sizeof(int) << "bytes" << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << "bytes" << endl;
	cout << "short: " << sizeof(short) << "bytes" << endl;
	cout << "long: " << sizeof(long) << "bytes" << endl;
	cout << "long long: " << sizeof(long long) << "bytes" << endl;

#pragma endregion
#pragma region 상수
	//상수 : 프로그램 도중에 임의로 변경할 수 없는 값
	//최근 C++에서는 #define으로 상수를 지정하는 것은 되도록 금지 : 레거시와 충돌이 날 가능성이 높음
	//const라는 키워드로 지정하여 상수로 지정하여 쓰기
	//상수는 런타임중에 지정되지 않고 컴파일되는 순간 지정됨...


	int number_of_people{ 0 };
	cin >> number_of_people;
	//상수 정의
	const int price_for_salaries{ 50 };
	//상수는 실행중에 값을 바꿀 수 없음 > 사람의 실수를 방지할 수 있음

	cout << "방에 머물 사람의 숫자는";
	
#pragma endregion

	return 0;



}

