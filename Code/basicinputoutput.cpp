//cout, cin, cerr, clog : stream

//cout : standard output stream, console
//cin : standard input stream, keyboard
//<< : insertion operator, output stream에 쓰임
//>> : extraction operator, input stream에 쓰임

// cout << data;
// 아래와 같이 연속적으로 쓸 수도 있음
// cout << "" <<data;
//

//cin >> data;
//아래와 같이 연속적으로 쓸 수도 있음
//cin >> data1 >>data2;

//만약 입력된 값의 형태가 변수에 넣어야 할 형태와 다를 경우 입력에 실패함

#include <iostream>

using namespace std;

int main() 
{
	cout << "Hello world" << endl;

	cout << "Hello";
	cout << "World" << endl;

	cout << "Hello world!" << endl;
	cout << "Hello" << "world" << endl;
	cout << "Hello" << "world\n";
	cout << "Hello\nOut\nThere\n";


	int num1;
	int num2;
	double num3;
	//숫자를 하나씩 입력받기
	cout << "정수를 입력하세요:";
	cin >> num1;
	

	cout << "두번째 값을 입력하세요:";
	cin >> num2;

	cout << "입력한 값은:" << num1 << " and " << num2 << endl;
	//숫자를 한 번에 입력받기
	cout << "숫자 두 개를 빈칸을 이용하여 입력해주세요";
	cin >> num1 >> num2;

	cout << "입력한 값은:" << num1 << " and " << num2 << endl;

	cout << "실수 값을 입력하세요:";
	cin >> num3;


}