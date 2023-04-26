/*
operator overloading
overloading operator : member function
global function도 overloading할 수 있음

*/

#pragma region operator overloading
/*
operator overloading :
기본적으로 제공된 연산자들을 사용자가 정의한 데이터 타입에도 쓰고 싶을 때 
코드를 보다 읽고 쓰기 쉽게 만들기 위해..

함수를 쓸 경우
Number result = multiply(add(a,b), divide(d,c));

멤버 메서드를 쓸 경우
Number result = (a.add(b)).multiply(c.divide(d));

C++ 기본 제공 연산자도 overloading이 가능

primitive type, 즉 int, double, string, 과 같이 C++기본 데이터 타입들의 연산자는 오버로드 할 수 없다
새 연산자를 만들 수 없음

*/
#pragma endregion
#pragma region Assignment Operator Overloading
/*
= <<오른쪽의 값을 왼쪽에 대입하는 연산자

Type &Type::operator=(const Type &rhs);
s2 = s1;
s2.operator=(s1);

Mystring &Mystring::operator=(const Mystring &rhs){
	if(this == &rhs)
		return *this;
	delete[] str;
	str = new char[std::strlen(rhs.str)+1];
	std::strcpy(str, rhs.str);

	return *this;
}


class Mystring
{
private:
	char* str;
public:
	Mystring();
	Mystring(const char* s);
	Mystring(const Mystring &source);
	~Mystring();
	//클래스 내부에서 오퍼레이터 재정의할 것이라고 명시해둠
	Mystring &operator=(const Mystring &rhs); //operator assignment
};
Mystring &Mystring::operator=(const Mystring &rhs){
	std::cout << "Copy assignment" << std::endl;
	if(this == &rhs)
		return *this;
	delete[] this->str;
	str = new char[std::strlen(rhs.str)+1];
	std::strcpy(str, rhs.str);
	return *this;
}


*/
#pragma endregion
#pragma region Assignment Operator를 Move의 형태로 쓰기
/*
= 연산자의
copy를 move의 형태로 바꾸어보자!
//오버로드의 프로토타입은 &&rhs부분이 달라진 것을 주의깊게 볼 것
Type &Type::operator=(Type &&rhs);

deep copy 부분이 없다는 것도 있음
Mystring &Mystring::operator=(Mystring &&rhs)
{
	if(this == &rhs)
	{
		return *this;
	}
	delete[] str;
	str = rhs.str;
	rhs.str = nullptr;

	return *this;
}

*/
#pragma endregion
#pragma region Member function처럼 연산자 오버로딩하기
/*
Unary operator (++, --, -, !)등의 연산자를 클래스의 멤버 함수처럼 쓸 수 있도록 오버로딩을 해보기

ReturnType Type::operatorOp();
Number Number::operator-() const;
Number Number::operator++();
Number Number::operator++(int);
bool Number::operator!() const;

Number n1{100};
Number n2=-n1; //n1.operator-()가 호출됨
n2 = ++n1; //n1.operator++()가 호출됨
n2 = n1++; //n1.operator++(int)가 호출됨...


Mystring Mystring::operator-() const{
	char *buff = new char[std::strlen(str)+1];
	std::strcpy(buff, str);
	for(size_t i=0; i<std::strlen(buff); i++)
	{
		buff[i] = std::tolower(buff[i]);
	}
	Mystring temp {buff};
	delete[] buff;
	return temp;
}

binary operator(+,-,==, !=, <. > )등의 연산자를 클래스의 멤버함수처럼 쓸 수 있도록 오버로딩

ReturnType Type::operatorOp(const Type &rhs);

Number Number::operator+(const Number &rhs) const;
Number Number::operator-(const Number &rhs) const;
bool Number::operator==(const Number &rhs) const;
bool Number::operator<(const Number &rhs) const;

Number n1{100}, n2{200};
Number n3 = n1+n2; //n1.operator+(n2)를 호출한 것과 같음
n3 = n1=n2; //n1.operator-(n2)를 호출한 것과 같음

*/
#pragma endregion
#pragma region Global Function 처럼 연산자 오버로딩하기
/*

ReturnType operatorOp(Type &obj);

Number operator-(const Number &obj);
Number operator++(Number &obj); //pre-increment
Number operator++(Number &obj, int); //post-increment
bool operator!(const Number &obj);

Member function에서와는 달리 ::이 붙지 않는 것을 볼 수 있음..
*/
#pragma endregion
#pragma region Stream Instertion and Extraction
/*
>>, << : 입력, 출력의 방향을 가리키는 연산자

연산자 왼쪽은 반드시 사용자 지정 클래스여야 함...
일반적으로는 이 연산자를 그냥 쓸 수 없음

std::ostream &operator<<(std::ostream &os, const Mystring &obj){
	os <<obj.str;
	os<< obj.get_str(); //혹은 friend function이 아닐 땐 
	return os;
}

std::istream &operator>>(std::istream &is, Mystring &obj){
	char *buff = new char[1000];
	is>>buff;
	obj = Mystring{buff};
	delete [] buff;
	return is;
}

//주의 사항 : ostream을 참조의 형태로 반환할 것!! : 값으로 복사하면 안 됨...

class Mystring
{
//
	friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
	friend std::istream &operator>>(std::istream &is, Mystring &rhs);
	//
}
std::ostream &operator<<(std::ostream &os, const Mystring &rhs)
{
	os << rhs.str;
	return os;
}

std::istream &oprator>>(std::istream &is, Mystring &rhs)
{
	char* buff = new char[1000];
	in >> buff;
	rhs = Mystring{buff};
	delete[] buff;
	return is;
}

*/
#pragma endregion

