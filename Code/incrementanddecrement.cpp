/*
* ���� ������ ++
* ���� ������ --
* 
* ���� ���ϰ� ó���ϱ� ++num
* ó���ϰ� ���߿� ���ϱ� num++
* 
*/

#include <iostream>

using namespace std;

int main()
{
	int counter{ 10 };
	int result{ 0 };

	cout << "ī���� :" << counter << endl;

	counter = counter + 1;
	
	cout << "ī���� :" << counter << endl;

	counter++;
	cout << "ī���� :" << counter << endl;

	++counter;
	cout << "ī���� :" << counter << endl;

	result = ++counter;
	cout << "ī���� :" << counter << endl;
	cout << "��� :" << result << endl;

	result = counter++;
	cout << "ī���� :" << counter << endl;
	cout << "��� :" << result << endl;

	result = ++counter + 10;
	cout << "ī���� :" << counter << endl;
	cout << "��� :" << result << endl;

	result = counter++ + 10;
	cout << "ī���� :" << counter << endl;
	cout << "��� :" << result << endl;

	//������ Ÿ���� ������ ��ȯ��Ű����..�Ʒ��� ���� �Լ��� ȣ��
	double redouble = static_cast<double> (result);
	//���� ��Ÿ��
	//redouble = (double)result;

	return 0;
}