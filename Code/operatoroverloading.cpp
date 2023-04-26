/*
operator overloading
overloading operator : member function
global function�� overloading�� �� ����

*/

#pragma region operator overloading
/*
operator overloading :
�⺻������ ������ �����ڵ��� ����ڰ� ������ ������ Ÿ�Կ��� ���� ���� �� 
�ڵ带 ���� �а� ���� ���� ����� ����..

�Լ��� �� ���
Number result = multiply(add(a,b), divide(d,c));

��� �޼��带 �� ���
Number result = (a.add(b)).multiply(c.divide(d));

C++ �⺻ ���� �����ڵ� overloading�� ����

primitive type, �� int, double, string, �� ���� C++�⺻ ������ Ÿ�Ե��� �����ڴ� �����ε� �� �� ����
�� �����ڸ� ���� �� ����

*/
#pragma endregion
#pragma region Assignment Operator Overloading
/*
= <<�������� ���� ���ʿ� �����ϴ� ������

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
	//Ŭ���� ���ο��� ���۷����� �������� ���̶�� ����ص�
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
#pragma region Assignment Operator�� Move�� ���·� ����
/*
= ��������
copy�� move�� ���·� �ٲپ��!
//�����ε��� ������Ÿ���� &&rhs�κ��� �޶��� ���� ���Ǳ�� �� ��
Type &Type::operator=(Type &&rhs);

deep copy �κ��� ���ٴ� �͵� ����
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
#pragma region Member functionó�� ������ �����ε��ϱ�
/*
Unary operator (++, --, -, !)���� �����ڸ� Ŭ������ ��� �Լ�ó�� �� �� �ֵ��� �����ε��� �غ���

ReturnType Type::operatorOp();
Number Number::operator-() const;
Number Number::operator++();
Number Number::operator++(int);
bool Number::operator!() const;

Number n1{100};
Number n2=-n1; //n1.operator-()�� ȣ���
n2 = ++n1; //n1.operator++()�� ȣ���
n2 = n1++; //n1.operator++(int)�� ȣ���...


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

binary operator(+,-,==, !=, <. > )���� �����ڸ� Ŭ������ ����Լ�ó�� �� �� �ֵ��� �����ε�

ReturnType Type::operatorOp(const Type &rhs);

Number Number::operator+(const Number &rhs) const;
Number Number::operator-(const Number &rhs) const;
bool Number::operator==(const Number &rhs) const;
bool Number::operator<(const Number &rhs) const;

Number n1{100}, n2{200};
Number n3 = n1+n2; //n1.operator+(n2)�� ȣ���� �Ͱ� ����
n3 = n1=n2; //n1.operator-(n2)�� ȣ���� �Ͱ� ����

*/
#pragma endregion
#pragma region Global Function ó�� ������ �����ε��ϱ�
/*

ReturnType operatorOp(Type &obj);

Number operator-(const Number &obj);
Number operator++(Number &obj); //pre-increment
Number operator++(Number &obj, int); //post-increment
bool operator!(const Number &obj);

Member function�����ʹ� �޸� ::�� ���� �ʴ� ���� �� �� ����..
*/
#pragma endregion
#pragma region Stream Instertion and Extraction
/*
>>, << : �Է�, ����� ������ ����Ű�� ������

������ ������ �ݵ�� ����� ���� Ŭ�������� ��...
�Ϲ������δ� �� �����ڸ� �׳� �� �� ����

std::ostream &operator<<(std::ostream &os, const Mystring &obj){
	os <<obj.str;
	os<< obj.get_str(); //Ȥ�� friend function�� �ƴ� �� 
	return os;
}

std::istream &operator>>(std::istream &is, Mystring &obj){
	char *buff = new char[1000];
	is>>buff;
	obj = Mystring{buff};
	delete [] buff;
	return is;
}

//���� ���� : ostream�� ������ ���·� ��ȯ�� ��!! : ������ �����ϸ� �� ��...

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

