#include <iostream>

using namespace std;


int main()
{
#pragma region if-else

	/*
	* if state
	* if (boolean ǥ��)
	* {
	*  statement;
	* }
	* if ���� ���� true�� ���� statement�� �����
	* else if (boolean ǥ�� 2)
	* {
	*	statement2;
	* }
	* else if ...
	* else if �� ���� ���� �� �� ����..
	* if�� ���� �ƴϸ� else if�� ������ ���� �Ǵ� �κ��� ���� ������ ���� else if ���� ��, ���� �Ǵ� �� ������ statement�� �����
	* �׸��� else if�ε� ��� ���� �ƴ� ��
	else�� �ִٸ� else �κ��� �����
	* 
	* else
	* {
	*	statement3;
	* }
	* 
	* if �ȿ� if ������ �� ���� ���� >> ������ ���� �� Ȯ���ؾ� �ϴ� ��� ��....
	* ���� ����Ǵ� ���� �Ϲ����� if�� ����.. ó�� if�� ���� �� ���� �� if���� ���̾�� statement�� ������
	* 
	* 
	*/
	int num{};
	const int min{ 10 };
	const int max{ 100 };

	cout << min << "��" << max << "������ ���� ��������" << endl;

	cin >> num;
	
	if (num >= min) 
	{
		cout << num << "��" << min << "���� Ů�ϴ�" << endl;
	}
	else 
	{
		cout << num << "��" << min << "���� �۽��ϴ�" << endl;
	}

#pragma endregion
#pragma region switch
	/*
	* if ���� switch��� ���� �̿��Ͽ� ���� ������ ó���� ���� ����
	* switch(������ ���� ������ Ÿ��)
	* {
	*	case ���ǿ� �´� ������ Ÿ�� ����, ���� ��:
	*		statement1;
	*		break;
	*	case ���ǿ� �´� ������ Ÿ�� ����, ���� ��:
	*		statement2;
	*		break;
	*	...
	*	default:
	*		statememt3;
	*		break;
	* }
	* enum�� switch�� �Բ� ����
	* enum �̸�
	* {
	*	enum����1, enum����2, enum����3,...
	* }
	* switch ������ ���� ���� �밳 integer type, enum�� ���� ��
	* 
	*/
	char letter_grade{};
	cout << "���� ������ �Է��ϼ���";
	cin >> letter_grade;

	switch (letter_grade) {
	case 'a':
	case 'A':
		cout << "90�̻��� �븮����!" << endl;
		break;
	case 'b':
	case 'B':
		cout << "80�̻��� �븮����!" << endl;
		break;
	default:
		cout << "������ �÷��� �� �� ���ƿ�!" << endl;
		break;
	}
#pragma endregion
#pragma region Conditional Operator
	/*
	* (conditional expression ) ? experssion1 : expression2;
	* conditional experssion : boolean
	* ���� conditional expression�� ���̸� expression1��, �����̸� expression2�� ��
	* if - else�� �ִ� ���ǿ��� conditional operator�� ��ü�� �� ����
	*/

#pragma endregion

	return 0;
}
