#include <iostream>

using namespace std;


int main()
{
#pragma region if-else

	/*
	* if state
	* if (boolean 표현)
	* {
	*  statement;
	* }
	* if 옆의 값이 true일 때만 statement가 실행됨
	* else if (boolean 표현 2)
	* {
	*	statement2;
	* }
	* else if ...
	* else if 는 여러 개가 될 수 있음..
	* if가 참이 아니면 else if의 조건이 참이 되는 부분이 나올 때까지 남은 else if 값을 비교, 참이 되는 그 순간의 statement가 실행됨
	* 그리고 else if로도 모두 참이 아닐 때
	else가 있다면 else 부분이 실행됨
	* 
	* else
	* {
	*	statement3;
	* }
	* 
	* if 안에 if 문구가 들어갈 수도 있음 >> 조건을 여러 번 확인해야 하는 경우 등....
	* 역시 실행되는 것은 일반적인 if와 같음.. 처음 if가 참일 때 다음 번 if까지 참이어야 statement가 동작함
	* 
	* 
	*/
	int num{};
	const int min{ 10 };
	const int max{ 100 };

	cout << min << "과" << max << "사이의 값을 넣으세요" << endl;

	cin >> num;
	
	if (num >= min) 
	{
		cout << num << "은" << min << "보다 큽니다" << endl;
	}
	else 
	{
		cout << num << "은" << min << "보다 작습니다" << endl;
	}

#pragma endregion
#pragma region switch
	/*
	* if 말고도 switch라는 것을 이용하여 여러 조건을 처리할 수도 있음
	* switch(조건을 따질 데이터 타입)
	* {
	*	case 조건에 맞는 데이터 타입 숫자, 글자 등:
	*		statement1;
	*		break;
	*	case 조건에 맞는 데이터 타입 숫자, 글자 등:
	*		statement2;
	*		break;
	*	...
	*	default:
	*		statememt3;
	*		break;
	* }
	* enum도 switch와 함께 쓰임
	* enum 이름
	* {
	*	enum상태1, enum상태2, enum상태3,...
	* }
	* switch 조건을 따질 때는 대개 integer type, enum을 많이 씀
	* 
	*/
	char letter_grade{};
	cout << "시험 성적을 입력하세요";
	cin >> letter_grade;

	switch (letter_grade) {
	case 'a':
	case 'A':
		cout << "90이상을 노리세요!" << endl;
		break;
	case 'b':
	case 'B':
		cout << "80이상을 노리세요!" << endl;
		break;
	default:
		cout << "성적을 올려야 할 것 같아요!" << endl;
		break;
	}
#pragma endregion
#pragma region Conditional Operator
	/*
	* (conditional expression ) ? experssion1 : expression2;
	* conditional experssion : boolean
	* 만약 conditional expression이 참이면 expression1이, 거짓이면 expression2가 됨
	* if - else만 있는 조건에서 conditional operator로 대체할 수 있음
	*/

#pragma endregion

	return 0;
}
