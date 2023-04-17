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
	*
	* do{
	*	statement;
	* } while(expression);
	*
	* do-while 루프 : expression의 조건과 관계없이 한 번은 반드시 실행하고 그 이후엔 expression이 참인 경우에만 반복을 실행함
	*
	*/

	char selection{};
	do
	{
		cout << "-----------" << endl;
		cout << "1.Do this" << endl;
		cout << "2.Do that" << endl;
		cout << "3.Do something else" << endl;
		cout << "Q.Quit" << endl;
		cout << "\nEnter your selection: ";
		cin >> selection;

		switch (selection)
		{
		case '1':
			cout << "You choose 1 - doing this" << endl;
			break;
		case '2':
			cout << "You choose 2 - doing that" << endl;
			break;
		case '3':
			cout << "You choose 3 - doing something else" << endl;
			break;
		case 'q':
		case 'Q':
			cout << "Goodbye.." << endl;
			break;
		default:
			cout << "Unknown option -- try again" << endl;
			break;
		}

	} while (selection != 'q' && selection != 'Q');

#pragma endregion
#pragma region continue and break
	/*
	* continue : 루프 중에 조건이 맞으면 수행을 하지 않고 지나감, 다음 단계로 넘김
	* break : 루프 중에 조건이 맞으면 break 이후의 일은 수행하지 않고 루프를 끝냄
	*/
	vector<int> values{ 1, 2, -1, 3, -1, -5, -99, 7, 8, 10 };
	for (auto val : values) {
		if (val == -99) {
			break;
		}
		else if (val == -1) {
			continue;
		}
		else {
			cout << val << endl;
		}
	}
#pragma endregion

#pragma region 무한 반복
	/*
	* 무한 반복 : 대개는 의도치 않거나 프로그래밍 에러에서 나타나는 경우가 많음
	* 그리고 몇몇의 경우엔 무한 반복를 쓰고 특정 상황에서 break를 걸어 루프 종료 조건을 넣는 경우도 있음
	* 
	* for (;;)
	* {
	*	cout << "이것이 무한 루프" ;
	* }
	* while(true){
	*	cout << "무한 루프" ;
	* }
	* 
	* do 
	* {
	*	cout << "이것도 무한 루프";
	* }while(true);
	* 
	* 종료 조건이 있는 무한루프 : 종료 조건이 될 때만 멈춤
	* while(true)
	* {
	*	char again {};
	*	cout << "루프를 계속 돌리실 거예요? (Y/N): ";
	*	cin >> again;
	*	if(again == 'N' || again == 'n')
	*	{
	*		break;
	*	}
	* }
	* 
	*/
#pragma endregion
#pragma region 중첩된 반복
	/*
	반복문 안에 반복문이 있는 경우
	다차원의 데이터 구조일 경우 쓰일 수 있음

	for (outer_val {1}; outer_val <= 2; ++outer_val)
		for(inner_val{1}; inner_val <=2; ++inner_val)
			cout << "바깥 변수" << outer_val << "안쪽 변수" << inner_val << endl;
	int grid[5][3]{};

	for(int row {0}; row <5; ++row)
	{
		for (int col {0}; col < 3; ++col)
		{
			grid[row][col] = 1000;
		}
	}

	vector<vector<int>> vector_2d
	{
		{1,2,3},
		{10, 20, 30, 40},
		{100, 200, 300, 400, 500}
	};
	for (auto vec: vector_2d)
	{
		for (auto val: vec)
		{
			cout << val << " ";
		}
		cout << endl;
	}
	*/
	for (int num1{ 1 }; num1 <= 10; ++num1) {
		for (int num2{ 1 }; num2 <= 10; ++num2) {
			cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
		}
		cout << "--------" << endl;
	}
	cout << endl;

	int num_items{};
	cout << "몇 개의 물건을 들고 있니?";
	cin >> num_items;

	vector<int> data{};
	for (int i{ 1 }; i <= num_items; ++i) {
		int data_item{};
		cout << "데이터를 입력하세요" << i << ":";
		cin >> data_item;
		data.push_back(data_item);
	}

	cout << "\n히스토그램으로 보여주기" << endl;
	for (auto val : data) {
		for (int i{ 1 }; i <= val; ++i) {
			if (i % 5 == 0) {
				cout << "*";
			}
			else {
				cout << "-";
			}
		}
		cout << endl;
		//cout << val << endl;
	}
#pragma endregion

	return 0;
}
