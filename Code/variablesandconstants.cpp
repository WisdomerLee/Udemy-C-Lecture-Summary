#include <iostream>

//������ �޸𸮿� ����Ǵ� �� : �޸��� �ּҸ� �ҷ��ͼ� ���� �����Ŵ
//���α׷��Ӱ� �޸� �ּҰ� �ƴ� �ش� ������ �̸����� ������ �� �ֵ��� ��
//������ ���� ���¿� ���� �̸����� ó���� �����ϰ� ��
//int age : int : ���� ����, age : �ش� ������ �̸�
//��ҹ��ڸ� �����ϹǷ� Age, age�� �ٸ� ������ �ν���
//������ �̸��� ���ڷ� ������ �� ����
//��ĭ�� �� �� ����
//Ư�����ڵ� �� �� ���� ������ ���ܴ� _
//������ ���� �����ϱ� ���� ���� �� ��
//���� �ʱ�ȭ �����ϱ�


using namespace std;

int age{ 18 }; //�������� : ������ ���� �Ǹ� ���� ������ ���� �ʰ� ��...
//�ǵ��� ���ú����� ���� ���� ��õ...?

int main()
{
#pragma region ���� �ʱ�ȭ
	//int age; //�ʱ�ȭ ���� ���� ��
	//int arg = 21; //C���ó�� �ʱ�ȭ
	//int ageother(21); //������ó�� �ʱ�ȭ�ϱ�
	//int ageanother{ 21 }; //����Ʈ �ʱ�ȭ ���ó�� ���� : C++11�̻����
	//�Լ� ���ο� ����� ������ ��������- ���ú������ ��
	//�Լ� �ٱ����� ����� ���� : �������� : 
	int room_width{ 0 };
	int room_length{ 0 };
	cout << "���� �ʺ� �Է��ϼ���";
	cin >> room_width;
	cout << "���� ���̸� �Է��ϼ���";
	cin >> room_length;

	cout << "���� ���̴� :" << room_width * room_length << "��������" << endl;

#pragma endregion

#pragma region ���� Ÿ��

	//C++������ ������ Ÿ���� ũ�⸦ �˾ƾ� ��
	//bit ������ ���� ũ��
	//char : 8bit -1byte
	//char16_t : 16bit
	//char32_t : 32bit
	//wchar_t : ���� ū ��
	//
	//int ���� 
	//short int: 16bit
	//int : 16bit
	//long int: 32bit
	//long long int: 64bit

	//unsigned short int: 16bit
	//unsigned int: 16bit
	//unsigned long int: 32bit
	//unsigned long long int: 64bit

	//float ����
	//float : 7decimal digits
	//double : 15decimal digits
	//long double : 19 decimal digits

	//bool����
	//bool : 8bit
	//0 : false , 0�� �ƴ� �� : true

	//character type
	char middle_initial{ 'J' };
	cout << "�� �ܱ����� �߰� �̸��� " << middle_initial << endl;

	//int Ÿ��
	unsigned short int exam_score{55};
	cout << "���� ������ " << exam_score << endl;

	int countries_represented{ 75 };
	cout << "������ ������ " << countries_represented << "�� ���Դϴ�" << endl;

	long people_in_florida{ 20610000 };
	cout << "�÷θ��ٿ� ��� ����� " << people_in_florida << "�� �Դϴ�" << endl;

	long long people_on_earth{ 8000000000 };
	cout << "������ ��� ����� " << people_on_earth << "�� �Դϴ�" << endl;

	//float type

	float car_payment{ 401.23 };
	cout << "�ڵ��� ������ " << car_payment << "�Դϴ�" << endl;

	double pi{ 3.14159 };
	cout << "������ ���� " << pi << "�Դϴ�" << endl;
	long double large_amount{ 2.7e120 };
	cout << large_amount << "�ſ� ū �����Դϴ�" << endl;

	//boolean type
	bool game_over{ false };
	cout << "������ �����°�?" << game_over << endl;

	//������ ���� �Ѱ踦 �Ѿ�� ���� �Ѿ�ų�(overflow) �ּҰ� ���Ϸ� ��������(underflow)...
#pragma endregion
#pragma region Sizeof�Լ�
	cout << "sizeof ����" << endl;
	cout << "================";
	cout << "char: " << sizeof(char) << "bytes" << endl;
	cout << "int: " << sizeof(int) << "bytes" << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << "bytes" << endl;
	cout << "short: " << sizeof(short) << "bytes" << endl;
	cout << "long: " << sizeof(long) << "bytes" << endl;
	cout << "long long: " << sizeof(long long) << "bytes" << endl;

#pragma endregion
#pragma region ���
	//��� : ���α׷� ���߿� ���Ƿ� ������ �� ���� ��
	//�ֱ� C++������ #define���� ����� �����ϴ� ���� �ǵ��� ���� : ���Žÿ� �浹�� �� ���ɼ��� ����
	//const��� Ű����� �����Ͽ� ����� �����Ͽ� ����
	//����� ��Ÿ���߿� �������� �ʰ� �����ϵǴ� ���� ������...


	int number_of_people{ 0 };
	cin >> number_of_people;
	//��� ����
	const int price_for_salaries{ 50 };
	//����� �����߿� ���� �ٲ� �� ���� > ����� �Ǽ��� ������ �� ����

	cout << "�濡 �ӹ� ����� ���ڴ�";
	
#pragma endregion

	return 0;



}

