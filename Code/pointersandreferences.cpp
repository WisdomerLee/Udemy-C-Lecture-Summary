/*
포인터와 참조...> 중요한 것
컴퓨터 메모리 할당, 해제
자바, 파이썬에는 없는 기능
운영체제 개발에 광범위하게 쓰임
메모리 할당, 해제 등이 연관되어 있으므로 반드시 주의해서 써야 함...
메모리 동적 할당하는 방법
smart pointer도 있음 : 객체 지향에서 많이 활용됨

포인터: 특정 값이 들어있는 메모리 주소
다른 변수, 혹은 함수를 가리킬 수도 있음...

포인터를 왜 쓰는가?
변수나 함수를 그자체로 쓸 수 없나?
함수에서는 포인터는 함수 바깥에서 정의되어있는 데이터에 접근하거나

변수 타입* 포인터 이름;

*/
#include <iostream>
#include <vector>

using namespace std;


int main() {
#pragma region Declare Pointers
	/*
	포인터는 항상 초기화 해야 함
	초기화되지 않은 포인터는 이상한 값을 갖고 아무데나 가리키는 상태가 될 수 있음...> 오류의 원인이 될 수 있음
	{} 혹은 nullptr(C++ 11이상) = address : zero : 아무데도 가리키지 않는 pointer
	pointer는 쓰이기 전에 반드시 {} 나 nullptr로 초기화 되어야 함
	*/
	int* int_ptr;
	double* double_ptr;
	char* char_ptr;
	string* string_ptr;

	int* initialized_int_ptr{};
	double* initializied_double_ptr{ nullptr };
	char* initialized_char_ptr{ nullptr };
	string* initialized_string_ptr{ nullptr };


#pragma endregion
#pragma region Pointer의 주소에 접근하기
	/*
	&: address operator
	변수는 각각 고유의 주소에 저장됨

	sizeof를 pointer에 쓸 경우
	프로그램의 모든 포인터는 같은 크기를 가짐....
	변수의 크기와는 다른 개념 >> 왜냐? 포인터는 주소를 갖고 있고 주소는 모두 8(64비트)혹은 4(32비트)이라는 크기를 갖고 있기 때문

	포인터는 반드시 같은 타입의 데이터를 저장하고 있어야 함
	int* integer_pointer = "";//이럴 경우 컴파일 에러를 띄움

	& 주소 연산자
	포인터 그 자체도 변수>> 포인터의 값은 바뀔 수 있음
	null값을 가질 수 있음 > 0


	double high_temp{100.7};
	double low_temp{37.2};

	double* temp_ptr;

	temp_ptr = &high_temp;
	temp_ptr = &low_temp;

	temp_ptr = nullptr;

	포인터는 변수의 주소를 가리키고 있음... > 그 값을 그냥 갖고 오면 메모리의 주소 값을 가져옴
	우리는 메모리 주소에 있는 그 값을 알고 싶음...
	포인터 앞에 *을 붙이면 > 해당 포인터의 주소가 갖고 있는 그 값 자체를 가져오게 됨

	*/
	//일반 변수의 경우
	int num{ 10 };
	cout << "값은" << num << endl;
	cout << "크기는" << sizeof num << endl;
	cout << "주소는" << &num << endl;

	//포인터의 경우
	int* p;

	//cout << "값" << p << endl;
	cout << "주소" << &p << endl;
	cout << "크기" << sizeof p << endl;
	//포인터 초기화
	p = nullptr;
	cout << "값" << p << endl;

	double* p2{ nullptr };
	unsigned long long* p3{ nullptr };
	vector<string>* p4{ nullptr };
	string* p5{ nullptr };
	//포인터의 크기는 모두 같다는 것을 알 수 있음..
	cout << sizeof p2 << sizeof p3 << sizeof p4 << sizeof p5 << endl;

	int score{ 10 };
	double high_temp{ 100.7 };
	int* score_ptr{ nullptr };

	score_ptr = &score;

	cout << "점수" << score << endl;
	cout << "주소" << &score << endl;
	cout << "점수 포인터의 값" << score_ptr << endl;
	cout << "점수 포인터가 가리키는 변수의 값" << *score_ptr << endl;
	//포인터의 값을 바꾸게 되면...? 메모리의 주소에 직접 접근하여 그 값을 바꾸므로 원래의 값 자체가 바뀜..
	*score_ptr = 200;

	cout << "점수 포인터가 가리키는 변수의 값" << *score_ptr << endl;
	cout << "점수" << score << endl;
	
#pragma endregion
#pragma region 메모리 동적으로 할당하기
/*
메모리를 동적으로 할당하기
대개는 얼마만큼의 메모리 크기가 필요한지 알 수 없는 경우가 많음
변수의 저장소를 실시간으로 바꿀 수 있음
C++의 배열을 상기해보면...
배열은 처음 지정한 크기대로 고정됨
그러나 벡터는 크기가 작아지거나 커지거나 함...
포인터를 이용하여 새로 접근될 heap storage에 접근할 수 있음....
	new 키워드를 통해 heap에 할당함
*/
	int* int_ptr1{ nullptr };
	int_ptr1 = new int; //heap 에 정수 할당
	cout << int_ptr1 << endl;
	cout << *int_ptr1 << endl;

	*int_ptr1 = 100;
	cout << *int_ptr1 << endl;

	int* array_ptr{ nullptr };
	int size{};
	cout << "할당하고 싶은 배열의 크기: ";
	cin >> size;

	array_ptr = new int[size]; //heap 메모리에 배열 할당

	int* int_ptrex{ nullptr };

	int_ptrex = new int; //heap에 정수 할당

	cout << int_ptrex << endl; //힙에 만든 것은 이름이 없음..
	//할당하고 해제를 하지 않으면 메모리 누수가 발생함...

	
	
	delete int_ptr1;
	delete int_ptrex;
	//heap에 할당했던 메모리 회수 : 이것이 빠지면 프로그램 진행시마다 쓰는 메모리가 계속 늘어나 결국 할당할 수 있는 메모리가 사라져 프로그램이 강제 종료됨..

	size_t size1{ 0 };
	double* temp_ptr{ nullptr };

	cout << "온도가 얼마나 많이 있는가? ";
	cin >> size1;

	temp_ptr = new double[size1];
	cout << temp_ptr << endl;
	delete[] temp_ptr; //배열로 할당한 것은 삭제할 때도 []를 붙임
	//삭제하고나서 다시 접근하려 하면 그것도 문제가 됨 : 메모리 

	//C++에서는 배열과 배열의 포인터가 같은 것을 뜻함...?,.
	//배열: 0번째 요소의 주소, 포인터 : 0번째 요소의 주소

	int scores[]{ 100, 98, 89 };
	cout << scores << endl;
	cout << *scores << endl;

	int* score_ptr{ scores };
	cout << score_ptr << endl;
	cout << *score_ptr << endl;

	cout << (score_ptr + 1) << endl;
	cout << *(score_ptr + 1) << endl;
	cout << (score_ptr + 2) << endl;
	cout << *(score_ptr + 2) << endl;
	/*
	아래와 같이 표현된 것은 C++에서는 완전히 같게 동작함
	int array_name[] {1,2,3,4,5};
	int* pointer_name {array_name};

	array_name[index] =	pointer_name[index]
	*(array_name +index) = *(pointer_name + index)
	*/

#pragma endregion
#pragma region 포인터 계산
	/*
	++ : 배열의 다음 원소를 가리킴
	int_ptr++
	-- : 배열의 이전 원소를 가리킴
	int_ptr--

	+ : 타입의 크기만큼 포인터를 증가시킴 n * sizeof(type)
	int_ptr += n;
	- : 타입의 크기만큼 포인터를 감소시킴 n * sizeof(type)
	int_ptr -= n;

	두 포인터를 빼면...? : 두 포인터는 반드시 같은 데이터 타입을 가리켜야 함
	그 사이의 원소 갯수
	int n = int_ptr2-int_ptr1;

	포인터는 같은 주소를 가리켜야 같은 것으로 간주됨 : 데이터가 아니라 가리키는 주소가 같아야 함

	string s1 {"A"};
	string s2 {"A"};

	string* p1 {&s1};
	string* p2 {&s2};
	string* p3 {&s1};

	cout << (p1 == p2) << endl; :거짓 : 데이터는 같으나 가리키는 곳이 다름, s1, s2
	cout << (p1 == p3) << endl; :참 가리키는 곳이 둘 다 s1

	포인터가 가리키는 데이터를 비교하고 싶으면..?

	cout << (*p1 == *p2) << endl;
	cout << (*p1 == *p3) << endl;
	둘 다 그 데이터를 비교하게 되므로 참이 됨

	*/
#pragma endregion
#pragma region 상수, 포인터
	/*
	const와 pointer
	pointes to constants
	constant pointers

	상수를 가리키는 포인터 : 포인터가 가리키는 곳의 데이터를 바꿀 수 없음
	하지만 포인터 자체는 변수이므로 상수가 아닌 다른 곳을 가리킬 수 있음

	int high_score{100};
	int low_score{65};
	const int* score_ptr{ &high_score};

	*score_ptr = 86; //에러 발생
	score_ptr = &low_score;

	constant pointer : 포인터 자체는 바뀌지 않으나 데이터 자체는 바꿀 수 있음

	int high_score{100};
	int low_score{65};
	int *const score_ptr {&high_score};

	*score_ptr = 86; //허용
	score_ptr = &low_score; //포인터 자체를 상수로 만들었기 때문에 주소 자체가 바뀔 수 없음

	상수 포인터가 상수 데이터를 가리키게 만들면...
	포인터와 데이터 둘 다 바꿀 수 없음...

	int high_score{100};
	int low_score{65};
	const int *const score_ptr {&high_score};

	*score_ptr = 86; //에러
	score_ptr = &low_score; //에러

	*/
#pragma endregion
#pragma region 함수에 포인터를 전달하기
	/*
	함수에 변수를 포인터로 전달하기
	: 함수 정의부터 포인터로 받음을 명시해야 함

	void double_data(int* int_ptr){
		*int_ptr *= 2;
	}

	쓸 때는...?

	int main(){
		int value{10};
		cout << value << endl;
		double_data(&value); //주소에 접근하게 함
		cout << value << endl;
	}
	함수에서 포인터로 값을 돌려주려면...?
	함수 정의부터 포인터로 넘겨준다는 것을 명시해야 함
	type* function();
	
	int* largest_int(int* int_ptr1, int* int_ptr2){
		if(*int_ptr1>*int_ptr2){
			return int_ptr1;
		}
		else{
			return int_ptr2;
		}
	}
	int main(){
		int a{100};
		int b{200};

		int *largest_ptr{nullprt};
		largest_ptr = largest_int(&a, &b); //역시 함수에서 호출할 때는 주소로 접근하게 함
		cout << *largest_ptr << endl; //포인터의 데이터에 접근
		return 0;
	}
	함수에서 동적으로 메모리를 할당하여 돌려주는 예시
	int* create_array(size_t size, int init_value = 0){

		int* new_storage {nullptr};
		new_storage = new int[size];
		for(size_t i{0}; i< size; ++i){
			*(new_storage +i) = init_value; //배열을 생성하고 각 생성된 배열의 원소를 초기값으로 초기화 해줌
		}
		return new_storage;
	}

	int main(){
		int *my_array;

		my_array = create_array(100, 20);


		delete[] my_array;

		return 0;
	}
	//함수에서 포인터로 돌려줄 때 주의해야 할 사항 : 함수의 지역변수를 가리키는 포인터로 반환하지 말 것
	*/
#pragma endregion
#pragma region 포인터로 발생할 수 있는 문제들
/*
 int* int_ptr; //초기화 되지 않은 포인터

  *int_ptr =100; //문제 발생함
  더이상 쓰이지 않는 데이터를 가리키는 포인터
  함수의 내부 변수를 가리키는 포인터를 할당할 경우...도 같은 문제가 발생할 수 있음

  new로 할당할 때 실패하는 경우 : 예외처리를 통해 예외가 발생할 경우
  null pointer의 데이터에 접근을 시도할 경우 프로그램이 강제 종료될 수 있음
  메모리를 할당하고 지우는 걸 까먹을 경우
  : 가장 많이 발생하는 문제...

  smart pointer로 많은 부분을 해결할 수 있음...
 */
#pragma endregion
#pragma region 참조 reference
/*
참조...
다음과 같이 처리하면 아무것도 바뀌지 않음
vector<string> stooges{"L", "M", "C"};

for (auto str : stooges){
	str = "A";
}
for(auto str: stooges){
	cout << str << endl;
}
하지만..아래의 경우엔... 바뀜
for(auto &str: stooges)
{
	str = "A";
}
for(auto str : stooges){
	cout <<str<<endl;
}
배열, 벡터들의 요소를 참조를 통해 값을 얻어서 보여주는 목적이면 참조를 통해 const를 붙여 수정하는 것을 막고 보여주기만 하는 형태로도 쓸 수 있음
for (auto const &str : stooges){
	cout << str << endl;
}

*/
#pragma endregion
#pragma region pointer와 참조
/*
값으로 전달할 경우 함수는 실제로 원본의 값을 바꾸지 않음
포인터를 통해 참조로 전달할 경우
함수를 통해 실제로 파라미터 값을 바꿀 경우, 혹은 복사해야 할 것이 많을 경우..
포인터를 상수로 전달할 경우
함수에서 파라미터 값을 바꾸지 않을 경우, 혹은 파라미터가 복사하기에 클 경우, 포인터는 nullptr의 값을 가져도 됨
상수 포인터에 상수로 전달할 경우
함수가 파라미터 값을 바꾸지 않을 경우, 포인터 자체를 바꾸지 않을 경우
참조로 전달할 경우
함수가 파라미터 값을 바꿀 경우, 파라미터는 nullptr을 가질 수 없음
상수 참조로 전달할 경우
함수가 파라미터 값을 바꾸지 않을 경우 파라미터는 nullptr을 가질 수 없음
*/
#pragma endregion


	return 0;
}