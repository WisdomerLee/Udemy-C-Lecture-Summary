/*
* 증가 연산자 ++
* 감소 연산자 --
* 
* 먼저 더하고 처리하기 ++num
* 처리하고 나중에 더하기 num++
* 
*/

#include <iostream>

using namespace std;

int main()
{
	int counter{ 10 };
	int result{ 0 };

	cout << "카운터 :" << counter << endl;

	counter = counter + 1;
	
	cout << "카운터 :" << counter << endl;

	counter++;
	cout << "카운터 :" << counter << endl;

	++counter;
	cout << "카운터 :" << counter << endl;

	result = ++counter;
	cout << "카운터 :" << counter << endl;
	cout << "결과 :" << result << endl;

	result = counter++;
	cout << "카운터 :" << counter << endl;
	cout << "결과 :" << result << endl;

	result = ++counter + 10;
	cout << "카운터 :" << counter << endl;
	cout << "결과 :" << result << endl;

	result = counter++ + 10;
	cout << "카운터 :" << counter << endl;
	cout << "결과 :" << result << endl;

	//데이터 타입을 강제로 변환시키려면..아래와 같은 함수를 호출
	double redouble = static_cast<double> (result);
	//옛날 스타일
	//redouble = (double)result;

	return 0;
}