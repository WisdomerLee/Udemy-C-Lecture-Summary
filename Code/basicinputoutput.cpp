//cout, cin, cerr, clog : stream

//cout : standard output stream, console
//cin : standard input stream, keyboard
//<< : insertion operator, output stream�� ����
//>> : extraction operator, input stream�� ����

// cout << data;
// �Ʒ��� ���� ���������� �� ���� ����
// cout << "" <<data;
//

//cin >> data;
//�Ʒ��� ���� ���������� �� ���� ����
//cin >> data1 >>data2;

//���� �Էµ� ���� ���°� ������ �־�� �� ���¿� �ٸ� ��� �Է¿� ������

#include <iostream>

using namespace std;

int main() 
{
	cout << "Hello world" << endl;

	cout << "Hello";
	cout << "World" << endl;

	cout << "Hello world!" << endl;
	cout << "Hello" << "world" << endl;
	cout << "Hello" << "world\n";
	cout << "Hello\nOut\nThere\n";


	int num1;
	int num2;
	double num3;
	//���ڸ� �ϳ��� �Է¹ޱ�
	cout << "������ �Է��ϼ���:";
	cin >> num1;
	

	cout << "�ι�° ���� �Է��ϼ���:";
	cin >> num2;

	cout << "�Է��� ����:" << num1 << " and " << num2 << endl;
	//���ڸ� �� ���� �Է¹ޱ�
	cout << "���� �� ���� ��ĭ�� �̿��Ͽ� �Է����ּ���";
	cin >> num1 >> num2;

	cout << "�Է��� ����:" << num1 << " and " << num2 << endl;

	cout << "�Ǽ� ���� �Է��ϼ���:";
	cin >> num3;


}