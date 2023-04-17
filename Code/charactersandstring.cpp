/*
* char와 문자열
*/

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

using namespace std;

int main()
{
#pragma region character function
	/*
	몇몇 함수
	isalpha(c) : c가 문자라면 참
	isalnum(c) : c가 문자, 혹은 숫자면 참
	isdigit(c) : c가 숫자이면 참
	islower(c) : c가 소문자면 참
	isprint(c) : c가 출력가능한 char면 참
	ispunct(c) : c가 문장부호면 참
	isupper(c) : c가 대문자면 참
	isspace(c) : c가 빈 칸이면 참
	tolower(c) : c를 소문자로 만듦
	toupper(c) : c를 대문자로 만듦

	c-style 문자열
	메모리에 연속적으로 있음
	char의 배열
	null character로 끝남
	
	""로 쌓여있음
	상수 취급이 됨(불변)
	null 캐릭터로 끝남
	*/
#pragma endregion
#pragma region C-style 문자열
	/*
	char my_name[] {"Array"};
	char my_name[9] {"Testing"};

	만약 선언만 하고 그냥 두었다면..
	char my_name[8];
	my_name = "Testing"; //이렇게 처리하면 에러를 띄움
	strcpy(my_name, "Testing"); //이렇게 처리하면 문자열을 복사해서 집어넣음
	cctype : library인데 문자열이 아닌 char에 적용되는 함수들을 가짐
	cstring : library인데 복사, 비교, 문자열 연결, 찾기 등등의 함수를 가짐
	cstdlib : cstring값을 숫자 등의 형태로 변경하는 함수들을 가짐
	*/

	char str[80];
	//복사
	strcpy_s(str, "hello");
	//연결
	strcat_s(str, "there");
	//strlen : 문자열 길이
	cout << strlen(str) << endl;
	//문자열을 비교하여 같으면 0을 돌려줌
	cout << strcmp(str, "Another")<<endl;

	//입력을 받는 또다른 함수 getline을 씀 뒤의 숫자는 그만큼 입력을 받겠다는 것
	cin.getline(str, 50);

#pragma endregion
#pragma region C++ 문자열
	/*
	std::string
	std namespace에 포함되어있음
	메모리에 연속적으로 존재
	크기는 변경될 수 있음
	input, output stream과 함께 동작할 수 있음
	일반적인 연산자들을 쓸 수 있음

	C-style의 문자열과는 달리 값을 나중에 집어넣을 수 있음

	==, !=, >, >=, <. <=과 같은 비교 연산자를 쓸 수 있음
	문자열은 아스키코드 같은 숫자를 기반으로 문자로 변경하므로 문자를 비교하는 연산은 숫자로 쓰인 코드를 비교하여 큰가 작은가를 비교함...
	
	문자열 중에 일부를 제거할 수 도 있음
	substr()함수를 이용
	object.substr(start_index, length)

	string s1 {"This is a test"};
	cout << s1.substr(0,4); // This출력
	cout << s1.substr(5, 2); // is 출력
	cout << s1. substr(10, 4); // test 출력

	string s1 {"This is a test"};

	cout << s1.find("This");
	cout << s1.find("is");
	cout << s1.find("test");
	cout << s1.find('e');
	cout << s1.find("is", 4);
	cout << s1.find("XX");

	find함수는 내부에 들어있는 문자가 문자열에 있는 곳의 인덱스를 반환함

	erase()
	clear()
	cout << s1.erase(0, 5); //0번째부터 5칸까지 지우기
	cout << s1.erase(5, 4); //5번째부터 4칸까지 지우기
	s1.clear(); //모든 문자열 비우기
	length() : 문자열의 길이 반환
	등등...
	
	string s1;
	cin >> s1;
	cout << s1 << endl;

	getline(cin, s1); : \n을 만나기 전까지 한 줄을 다 읽음
	getline(cin, s1, 'x'); //x를 누르기 전까지 글자를 입력받음

	*/
	string s1;
	string s2{ "Test" };
	string s3{ s2 };
	string s4{ "Teststring", 3 };
	string s5{ s3, 0, 2 };
	string s6(3, 'X');

	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	cout << s6 << endl;

	s1 = "C++방식으로는 이렇게 나중에 넣을 수도 있음";

	string part1{ "C++" };
	string part2{ "is a powerful" };
	string sentence;

	sentence = part1 + " " + part2 + " language";
	//아래처럼은 쓸 수 없음.. : c sytle에서는 연산자가 동작하지 않음..
	//sentence = "C++" + "is powerful";

	//배열처럼 아래처럼 쓸 수 있음.. index로 접근 가능
	string ex1;
	string ex2{ "Example" };
	cout << s2[0] << endl;
	cout << s2.at(0) << endl;

	s2[0] = 'e';
	s2.at(0) = 'i';

#pragma endregion


	return 0;
}