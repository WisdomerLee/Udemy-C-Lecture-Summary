//�迭??
//���� Ÿ���� �����͸� �������� ��� �־�� �� ���... ���� ��� 100���� ���� ���� �־�� �Ѵٸ�..?
//������ �̸� 100���� ����...
//�迭�� �̿��ϸ� �ϳ��� �̸����� �������� ���� ����, ������ �� ����
//�迭�� ó���� ������ ũ�⸦ �״�� ��� �ְ� ��
//��� ���ҵ��� ���� Ÿ���̾�� �ϰ�
//�޸� �󿡼� �Ϸķ� ��ġ�Ǿ� ����
//�밳 ������ ���� ����
//�迭�� ���� Ÿ�� - �迭 �̸� - [�迭�� ����]
//�ʱ�ȭ�� �迭 ����ÿ� {,,,,} �� ���� ���·� ������ �� ����
//{}�ϳ��� �����ϰ� �Ǹ� ������ ���� 0���� �ڵ����� �ʱ�ȭ ��...
//�迭�� �̸� ��ü�� ������ ù��° ������ �޸� ���� ��Ÿ��...
//[index]�� ����ְ� �Ǹ� �߰��� ���° �ڿ� �ִ� ���� �����ϰ� �Ǿ� �迭�� �� ��° ��ҿ� �����ϰ� ��


//�迭�� ���� �����̶��....?
//�迭�� ���� Ÿ�� - �迭 �̸� - [�迭 ���� ����] [�迭 ���� ����]
//int arr[3][5];�� ���� ���·�....


//Vector : C++ standard template library�� �������
//ũ�� ������ ������ �迭�� ����ϴٰ� ���� ��....?
//�迭�� ����� ���·� ����, �ʱ�ȭ ��
//���ʹ� ũ�� ������ �� �� ����
//�迭ó�� ��� ���ҵ��� Ÿ���� ���ƾ� ��
//�޸𸮿��� ���������� �����
//�� ���ҵ��� ��ġ, index������ ������ ������

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	char vowels[]{ 'a', 'e', 'i', 'o', 'u' };
	vector<char> vowelsvector{'a', 'e', 'i', 'o', 'u'};
	vector<int> test_score{ 100, 98, 80, 85, 90 };
	//�Ʒ��� ���� ������ ũ�Ⱑ 36, 0��° �迭�� ���ڴ� 5�� �ʱ�ȭ, ������ ���� 0���� �ʱ�ȭ �� ��
	vector<int> temperatures(36, 5);

	
	cout << vowels << endl;
	//���ʹ� �迭ó�� index�� ������ ���� �ְ�

	cout << vowelsvector[0] << endl;
	//at method�ε� ������ ������
	cout << vowelsvector.at(3) << endl;

	cout << vowels[4] << endl;
	//���� ���� ���Ҹ� �߰��� ���ϰ� �ʹٸ�..? : �迭������ �̰��� �Ұ���.. �迭�� ũ�Ⱑ �������̱� ����
	//push_back�̶�� �Լ��� �߰���
	test_score.push_back(88);
	//�迭�� ũ�⸦ Ȯ������ ����... ���ʹ� ũ�⸦ Ȯ���ϰ� ��� ���¶�� out of range ������ �߻���Ŵ
	//�迭�� ũ�⸦ ����� �ƹ��͵� ��ȯ���� �ʴ� ����..?...?
	cout << "���� ũ�� :" << test_score.size() << endl;

	//���� ������ ���͸� �����ϴ� ���?? ���ʹ� ũ�Ⱑ �ٲ� �� �����Ƿ� �Ʒ��� ���� ���� �ٸ� ũ���� ���ͷ� �ʱ�ȭ�� ������
	vector<vector<int>> movie_ratings
	{
		{1,5,3,6,7},
		{3,3,6},
		{5,8,2,7}
	};
	//�迭 ������� ����
	cout << movie_ratings[0][2] << endl;
	//���� ������� ����
	cout << movie_ratings.at(1).at(2) << endl;


	vector<int> vector1;
	vector<int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << "vector1:" << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << "vector1�� " << vector1.size() << "���� ���Ҹ� ���� ����" << endl;

	vector2.push_back(15);
	vector2.push_back(25);

	cout << "vector2:" << endl;
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	cout << "vector2�� " << vector2.size() << "���� ���Ҹ� ���� ����" << endl;


	vector<vector<int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	vector1.at(0) = 100;

	cout << "vector_2d:" << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;


}