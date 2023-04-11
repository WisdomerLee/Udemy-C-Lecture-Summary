#include <iostream>


int main()
{
	//변수를 초기화 하지 않고 (값을 넣지 않고 쓰려고 할 때)
	//변수를 선언하고 쓰지 않을 때 등등의 경우에 컴파일러는 경고를 띄움

	int favorite_number;

	std::cout << favorite_number << std::endl;
	return 0;
}