/*
* ���� ������ : �ݺ�
*
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
#pragma region for loop
	/*
	* for (�ʱ� ����; �� ����; ����������)
	* {
	*	statement;
	* }
	* �ϸ� �ʱ� �������� �� ������ �������� �� ������ statement�� �����ϰ� ���������ڸ�ŭ ���� �� �ٽ� �ݺ��� �õ���
	* �������� ���� �Ǹ� �ݺ��� ����
	*
	* for ( int i {0} ; i <= 10; ++i)
	* {
	*	cout << i <<endl;
	* }
	* for (int i{1}, j{5}; i<=5; ++i, ++j)
	* {
	*	cout << i << "*" << j <<"=" i*j <<endl;
	* }
	* ���� ������ ���� ���� ���ѷ����� ��
	* for(;;)
	* {
	*	statement;
	* }
	*/
	for (int i{ 1 }; i <= 10; ++i)
	{
		cout << i << endl;
	}
	for (int i{ 1 }; i <= 10; i += 2) {
		cout << i << endl;
	}
	for (int i{ 10 }; i > 0; --i) {
		cout << i << endl;
	}

	for (int i{ 10 }; i <= 100; i += 10) {
		if (i % 15 == 0) {
			cout << i << endl;
		}
	}
	/*C++ 11�̻󿡼� �� �� �ִ� for loop
	*
	* for(var_type var_name: sequence){
	*	statement;
	* }
	*
	*/
	int scores[]{ 100, 97, 90, 95 };

	for (int score : scores) {
		cout << score << endl;
	}

	//auto : Ÿ�Կ� �ڵ����� ������
	for (auto score : scores) {
		cout << score << endl;
	}

	vector<int> environment{ 5, 15, 90, 20, 30, 15, -15, 0 };
	for (auto envi : environment) {
		cout << envi << endl;
	}

	for (auto c : "This is a test") {
		if (c != ' ') {
			cout << c;
		}
	}
	for (auto val : { 1,2,3,4,5 }) {
		cout << val << endl;
	}

#pragma endregion
#pragma region whileloop
	/*
	* while(expression){
	*	statement;
	* }
	* expression�� ���̸� statement�� ����, ������ �� ������ �ݺ���
	*
	* do{
	*	statement;
	* } while(expression);
	*
	* do-while ���� : expression�� ���ǰ� ������� �� ���� �ݵ�� �����ϰ� �� ���Ŀ� expression�� ���� ��쿡�� �ݺ��� ������
	*
	*/

	char selection{};
	do
	{
		cout << "-----------" << endl;
		cout << "1.Do this" << endl;
		cout << "2.Do that" << endl;
		cout << "3.Do something else" << endl;
		cout << "Q.Quit" << endl;
		cout << "\nEnter your selection: ";
		cin >> selection;

		switch (selection)
		{
		case '1':
			cout << "You choose 1 - doing this" << endl;
			break;
		case '2':
			cout << "You choose 2 - doing that" << endl;
			break;
		case '3':
			cout << "You choose 3 - doing something else" << endl;
			break;
		case 'q':
		case 'Q':
			cout << "Goodbye.." << endl;
			break;
		default:
			cout << "Unknown option -- try again" << endl;
			break;
		}

	} while (selection != 'q' && selection != 'Q');

#pragma endregion
#pragma region continue and break
	/*
	* continue : ���� �߿� ������ ������ ������ ���� �ʰ� ������, ���� �ܰ�� �ѱ�
	* break : ���� �߿� ������ ������ break ������ ���� �������� �ʰ� ������ ����
	*/
	vector<int> values{ 1, 2, -1, 3, -1, -5, -99, 7, 8, 10 };
	for (auto val : values) {
		if (val == -99) {
			break;
		}
		else if (val == -1) {
			continue;
		}
		else {
			cout << val << endl;
		}
	}
#pragma endregion

#pragma region ���� �ݺ�
	/*
	* ���� �ݺ� : �밳�� �ǵ�ġ �ʰų� ���α׷��� �������� ��Ÿ���� ��찡 ����
	* �׸��� ����� ��쿣 ���� �ݺ��� ���� Ư�� ��Ȳ���� break�� �ɾ� ���� ���� ������ �ִ� ��쵵 ����
	* 
	* for (;;)
	* {
	*	cout << "�̰��� ���� ����" ;
	* }
	* while(true){
	*	cout << "���� ����" ;
	* }
	* 
	* do 
	* {
	*	cout << "�̰͵� ���� ����";
	* }while(true);
	* 
	* ���� ������ �ִ� ���ѷ��� : ���� ������ �� ���� ����
	* while(true)
	* {
	*	char again {};
	*	cout << "������ ��� ������ �ſ���? (Y/N): ";
	*	cin >> again;
	*	if(again == 'N' || again == 'n')
	*	{
	*		break;
	*	}
	* }
	* 
	*/
#pragma endregion
#pragma region ��ø�� �ݺ�
	/*
	�ݺ��� �ȿ� �ݺ����� �ִ� ���
	�������� ������ ������ ��� ���� �� ����

	for (outer_val {1}; outer_val <= 2; ++outer_val)
		for(inner_val{1}; inner_val <=2; ++inner_val)
			cout << "�ٱ� ����" << outer_val << "���� ����" << inner_val << endl;
	int grid[5][3]{};

	for(int row {0}; row <5; ++row)
	{
		for (int col {0}; col < 3; ++col)
		{
			grid[row][col] = 1000;
		}
	}

	vector<vector<int>> vector_2d
	{
		{1,2,3},
		{10, 20, 30, 40},
		{100, 200, 300, 400, 500}
	};
	for (auto vec: vector_2d)
	{
		for (auto val: vec)
		{
			cout << val << " ";
		}
		cout << endl;
	}
	*/
	for (int num1{ 1 }; num1 <= 10; ++num1) {
		for (int num2{ 1 }; num2 <= 10; ++num2) {
			cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
		}
		cout << "--------" << endl;
	}
	cout << endl;

	int num_items{};
	cout << "�� ���� ������ ��� �ִ�?";
	cin >> num_items;

	vector<int> data{};
	for (int i{ 1 }; i <= num_items; ++i) {
		int data_item{};
		cout << "�����͸� �Է��ϼ���" << i << ":";
		cin >> data_item;
		data.push_back(data_item);
	}

	cout << "\n������׷����� �����ֱ�" << endl;
	for (auto val : data) {
		for (int i{ 1 }; i <= val; ++i) {
			if (i % 5 == 0) {
				cout << "*";
			}
			else {
				cout << "-";
			}
		}
		cout << endl;
		//cout << val << endl;
	}
#pragma endregion

	return 0;
}
