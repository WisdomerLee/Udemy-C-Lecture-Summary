#include <iostream>

//참조할 만한 것을 extern이라는 키워드로 걸고 외부에서 참조해오는 것으로 설정해두었지만...?
//해당 x는 어느 클래스 내부에도 선언되지 않음... >> 찾을 수 없는 상태가 됨 : 링크 에러
extern int x;

int main()
{
	std::cout << "Hello world" << std::endl;
	//여기에서 x를 찾으려고 시도하지만...?

	std::cout << x;

	return 0;
}