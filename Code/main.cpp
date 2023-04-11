
#include <iostream>

using namespace std;

//프로젝트는 main 함수가 있어야 함: project로 빌드된 프로그램의 시작지점이 main 함수
int main()
{
	int favorite_number;
	//cout << : log처럼 콘솔 창에 메시지 띄우는 역할을 수행
	//endl : 글자가 끝났음을 알리는 역할을 수행
	//C++도 줄이 끝났다는 사실을 알리기 위해 세미콜론;이 필요함

	cout << "Enter your favorite number between 1 and 100:";

	//입력을 받아 favorite_number에 저장함
	std::cin >> favorite_number;
	cout << "Amazing!" << endl;
#pragma region 에러 발생 부분
	//끝에 세미콜론을 빠뜨리면 줄이 끝나지 않은 것으로 인식하여 오류가 날 수 있음
	//함수 이름등을 잘못 쓰게 되면 오타로 인해 해당 함수나 변수가 없다는 오류를 띄움
	cout << "Hello World" << endl;
#pragma endregion
#pragma region 반환 타입 불일치 오류
	//만약 정수형을 돌려주기로 했는데 문자열을 반환하게 된다면...? > 역시 에러를 띄우게 됨
	//return "Joe";

#pragma endregion


	return 0;
}