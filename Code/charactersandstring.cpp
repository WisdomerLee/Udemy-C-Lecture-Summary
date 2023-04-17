/*
* char�� ���ڿ�
*/

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

using namespace std;

int main()
{
#pragma region character function
	/*
	��� �Լ�
	isalpha(c) : c�� ���ڶ�� ��
	isalnum(c) : c�� ����, Ȥ�� ���ڸ� ��
	isdigit(c) : c�� �����̸� ��
	islower(c) : c�� �ҹ��ڸ� ��
	isprint(c) : c�� ��°����� char�� ��
	ispunct(c) : c�� �����ȣ�� ��
	isupper(c) : c�� �빮�ڸ� ��
	isspace(c) : c�� �� ĭ�̸� ��
	tolower(c) : c�� �ҹ��ڷ� ����
	toupper(c) : c�� �빮�ڷ� ����

	c-style ���ڿ�
	�޸𸮿� ���������� ����
	char�� �迭
	null character�� ����
	
	""�� �׿�����
	��� ����� ��(�Һ�)
	null ĳ���ͷ� ����
	*/
#pragma endregion
#pragma region C-style ���ڿ�
	/*
	char my_name[] {"Array"};
	char my_name[9] {"Testing"};

	���� ���� �ϰ� �׳� �ξ��ٸ�..
	char my_name[8];
	my_name = "Testing"; //�̷��� ó���ϸ� ������ ���
	strcpy(my_name, "Testing"); //�̷��� ó���ϸ� ���ڿ��� �����ؼ� �������
	cctype : library�ε� ���ڿ��� �ƴ� char�� ����Ǵ� �Լ����� ����
	cstring : library�ε� ����, ��, ���ڿ� ����, ã�� ����� �Լ��� ����
	cstdlib : cstring���� ���� ���� ���·� �����ϴ� �Լ����� ����
	*/

	char str[80];
	//����
	strcpy_s(str, "hello");
	//����
	strcat_s(str, "there");
	//strlen : ���ڿ� ����
	cout << strlen(str) << endl;
	//���ڿ��� ���Ͽ� ������ 0�� ������
	cout << strcmp(str, "Another")<<endl;

	//�Է��� �޴� �Ǵٸ� �Լ� getline�� �� ���� ���ڴ� �׸�ŭ �Է��� �ްڴٴ� ��
	cin.getline(str, 50);

#pragma endregion
#pragma region C++ ���ڿ�
	/*
	std::string
	std namespace�� ���ԵǾ�����
	�޸𸮿� ���������� ����
	ũ��� ����� �� ����
	input, output stream�� �Բ� ������ �� ����
	�Ϲ����� �����ڵ��� �� �� ����

	C-style�� ���ڿ����� �޸� ���� ���߿� ������� �� ����

	==, !=, >, >=, <. <=�� ���� �� �����ڸ� �� �� ����
	���ڿ��� �ƽ�Ű�ڵ� ���� ���ڸ� ������� ���ڷ� �����ϹǷ� ���ڸ� ���ϴ� ������ ���ڷ� ���� �ڵ带 ���Ͽ� ū�� �������� ����...
	
	���ڿ� �߿� �Ϻθ� ������ �� �� ����
	substr()�Լ��� �̿�
	object.substr(start_index, length)

	string s1 {"This is a test"};
	cout << s1.substr(0,4); // This���
	cout << s1.substr(5, 2); // is ���
	cout << s1. substr(10, 4); // test ���

	string s1 {"This is a test"};

	cout << s1.find("This");
	cout << s1.find("is");
	cout << s1.find("test");
	cout << s1.find('e');
	cout << s1.find("is", 4);
	cout << s1.find("XX");

	find�Լ��� ���ο� ����ִ� ���ڰ� ���ڿ��� �ִ� ���� �ε����� ��ȯ��

	erase()
	clear()
	cout << s1.erase(0, 5); //0��°���� 5ĭ���� �����
	cout << s1.erase(5, 4); //5��°���� 4ĭ���� �����
	s1.clear(); //��� ���ڿ� ����
	length() : ���ڿ��� ���� ��ȯ
	���...
	
	string s1;
	cin >> s1;
	cout << s1 << endl;

	getline(cin, s1); : \n�� ������ ������ �� ���� �� ����
	getline(cin, s1, 'x'); //x�� ������ ������ ���ڸ� �Է¹���

	*/
	string s1;
	string s2{ "Test" };
	string s3{ s2 };
	string s4{ "Teststring", 3 };
	string s5{ s3, 0, 2 };
	string s6(3, 'X');

	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	cout << s6 << endl;

	s1 = "C++������δ� �̷��� ���߿� ���� ���� ����";

	string part1{ "C++" };
	string part2{ "is a powerful" };
	string sentence;

	sentence = part1 + " " + part2 + " language";
	//�Ʒ�ó���� �� �� ����.. : c sytle������ �����ڰ� �������� ����..
	//sentence = "C++" + "is powerful";

	//�迭ó�� �Ʒ�ó�� �� �� ����.. index�� ���� ����
	string ex1;
	string ex2{ "Example" };
	cout << s2[0] << endl;
	cout << s2.at(0) << endl;

	s2[0] = 'e';
	s2.at(0) = 'i';

#pragma endregion


	return 0;
}