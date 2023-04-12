//배열??
//같은 타입의 데이터를 여러개를 들고 있어야 할 경우... 예를 들어 100개의 값을 갖고 있어야 한다면..?
//변수의 이름 100개를 지정...
//배열을 이용하면 하나의 이름으로 여러개의 값을 저장, 지정할 수 있음
//배열은 처음에 지정된 크기를 그대로 들고 있게 됨
//모든 원소들은 같은 타입이어야 하고
//메모리 상에서 일렬로 배치되어 있음
//대개 루프와 엮여 사용됨
//배열의 원소 타입 - 배열 이름 - [배열의 갯수]
//초기화는 배열 선언시에 {,,,,} 와 같은 형태로 지정할 수 있음
//{}하나만 지정하게 되면 나머지 값은 0으로 자동으로 초기화 됨...
//배열의 이름 자체는 무조건 첫번째 원소의 메모리 값을 나타냄...
//[index]에 집어넣게 되면 추가로 몇번째 뒤에 있는 값을 지정하게 되어 배열의 몇 번째 요소에 접근하게 됨


//배열이 여러 차원이라면....?
//배열의 원소 타입 - 배열 이름 - [배열 차원 숫자] [배열 차원 숫자]
//int arr[3][5];와 같은 형태로....


//Vector : C++ standard template library에 들어있음
//크기 조절이 가능한 배열과 비슷하다고 보면 됨....?
//배열과 비슷한 형태로 선언, 초기화 함
//벡터는 크기 변경을 할 수 있음
//배열처럼 모든 원소들의 타입이 같아야 함
//메모리에서 연속적으로 저장됨
//각 원소들은 위치, index등으로 접근이 가능함

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	char vowels[]{ 'a', 'e', 'i', 'o', 'u' };
	vector<char> vowelsvector{'a', 'e', 'i', 'o', 'u'};
	vector<int> test_score{ 100, 98, 80, 85, 90 };
	//아래의 경우는 벡터의 크기가 36, 0번째 배열의 숫자는 5로 초기화, 나머지 값은 0으로 초기화 한 것
	vector<int> temperatures(36, 5);

	
	cout << vowels << endl;
	//벡터는 배열처럼 index로 접근할 수도 있고

	cout << vowelsvector[0] << endl;
	//at method로도 접근이 가능함
	cout << vowelsvector.at(3) << endl;

	cout << vowels[4] << endl;
	//벡터 끝에 원소를 추가로 더하고 싶다면..? : 배열에서는 이것이 불가능.. 배열은 크기가 고정적이기 때문
	//push_back이라는 함수로 추가함
	test_score.push_back(88);
	//배열은 크기를 확인하지 않음... 벡터는 크기를 확인하고 벗어난 상태라면 out of range 에러를 발생시킴
	//배열은 크기를 벗어나면 아무것도 반환하지 않는 듯함..?...?
	cout << "벡터 크기 :" << test_score.size() << endl;

	//여러 차원의 벡터를 선언하는 방법?? 벡터는 크기가 바뀔 수 있으므로 아래와 같이 서로 다른 크기의 벡터로 초기화가 가능함
	vector<vector<int>> movie_ratings
	{
		{1,5,3,6,7},
		{3,3,6},
		{5,8,2,7}
	};
	//배열 방식으로 접근
	cout << movie_ratings[0][2] << endl;
	//벡터 방식으로 접근
	cout << movie_ratings.at(1).at(2) << endl;


	vector<int> vector1;
	vector<int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << "vector1:" << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << "vector1은 " << vector1.size() << "개의 원소를 갖고 있음" << endl;

	vector2.push_back(15);
	vector2.push_back(25);

	cout << "vector2:" << endl;
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	cout << "vector2은 " << vector2.size() << "개의 원소를 갖고 있음" << endl;


	vector<vector<int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	vector1.at(0) = 100;

	cout << "vector_2d:" << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;


}