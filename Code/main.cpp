
#include <iostream>

using namespace std;

//������Ʈ�� main �Լ��� �־�� ��: project�� ����� ���α׷��� ���������� main �Լ�
int main()
{
	int favorite_number;
	//cout << : logó�� �ܼ� â�� �޽��� ���� ������ ����
	//endl : ���ڰ� �������� �˸��� ������ ����
	//C++�� ���� �����ٴ� ����� �˸��� ���� �����ݷ�;�� �ʿ���

	cout << "Enter your favorite number between 1 and 100:";

	//�Է��� �޾� favorite_number�� ������
	std::cin >> favorite_number;
	cout << "Amazing!" << endl;
#pragma region ���� �߻� �κ�
	//���� �����ݷ��� ���߸��� ���� ������ ���� ������ �ν��Ͽ� ������ �� �� ����
	//�Լ� �̸����� �߸� ���� �Ǹ� ��Ÿ�� ���� �ش� �Լ��� ������ ���ٴ� ������ ���
	cout << "Hello World" << endl;
#pragma endregion
#pragma region ��ȯ Ÿ�� ����ġ ����
	//���� �������� �����ֱ�� �ߴµ� ���ڿ��� ��ȯ�ϰ� �ȴٸ�...? > ���� ������ ���� ��
	//return "Joe";

#pragma endregion


	return 0;
}