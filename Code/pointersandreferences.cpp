/*
�����Ϳ� ����...> �߿��� ��
��ǻ�� �޸� �Ҵ�, ����
�ڹ�, ���̽㿡�� ���� ���
�ü�� ���߿� �������ϰ� ����
�޸� �Ҵ�, ���� ���� �����Ǿ� �����Ƿ� �ݵ�� �����ؼ� ��� ��...
�޸� ���� �Ҵ��ϴ� ���
smart pointer�� ���� : ��ü ���⿡�� ���� Ȱ���

������: Ư�� ���� ����ִ� �޸� �ּ�
�ٸ� ����, Ȥ�� �Լ��� ����ų ���� ����...

�����͸� �� ���°�?
������ �Լ��� ����ü�� �� �� ����?
�Լ������� �����ʹ� �Լ� �ٱ����� ���ǵǾ��ִ� �����Ϳ� �����ϰų�

���� Ÿ��* ������ �̸�;

*/
#include <iostream>
#include <vector>

using namespace std;


int main() {
#pragma region Declare Pointers
	/*
	�����ʹ� �׻� �ʱ�ȭ �ؾ� ��
	�ʱ�ȭ���� ���� �����ʹ� �̻��� ���� ���� �ƹ����� ����Ű�� ���°� �� �� ����...> ������ ������ �� �� ����
	{} Ȥ�� nullptr(C++ 11�̻�) = address : zero : �ƹ����� ����Ű�� �ʴ� pointer
	pointer�� ���̱� ���� �ݵ�� {} �� nullptr�� �ʱ�ȭ �Ǿ�� ��
	*/
	int* int_ptr;
	double* double_ptr;
	char* char_ptr;
	string* string_ptr;

	int* initialized_int_ptr{};
	double* initializied_double_ptr{ nullptr };
	char* initialized_char_ptr{ nullptr };
	string* initialized_string_ptr{ nullptr };


#pragma endregion
#pragma region Pointer�� �ּҿ� �����ϱ�
	/*
	&: address operator
	������ ���� ������ �ּҿ� �����

	sizeof�� pointer�� �� ���
	���α׷��� ��� �����ʹ� ���� ũ�⸦ ����....
	������ ũ��ʹ� �ٸ� ���� >> �ֳ�? �����ʹ� �ּҸ� ���� �ְ� �ּҴ� ��� 8(64��Ʈ)Ȥ�� 4(32��Ʈ)�̶�� ũ�⸦ ���� �ֱ� ����

	�����ʹ� �ݵ�� ���� Ÿ���� �����͸� �����ϰ� �־�� ��
	int* integer_pointer = "";//�̷� ��� ������ ������ ���

	& �ּ� ������
	������ �� ��ü�� ����>> �������� ���� �ٲ� �� ����
	null���� ���� �� ���� > 0


	double high_temp{100.7};
	double low_temp{37.2};

	double* temp_ptr;

	temp_ptr = &high_temp;
	temp_ptr = &low_temp;

	temp_ptr = nullptr;

	�����ʹ� ������ �ּҸ� ����Ű�� ����... > �� ���� �׳� ���� ���� �޸��� �ּ� ���� ������
	�츮�� �޸� �ּҿ� �ִ� �� ���� �˰� ����...
	������ �տ� *�� ���̸� > �ش� �������� �ּҰ� ���� �ִ� �� �� ��ü�� �������� ��

	*/
	//�Ϲ� ������ ���
	int num{ 10 };
	cout << "����" << num << endl;
	cout << "ũ���" << sizeof num << endl;
	cout << "�ּҴ�" << &num << endl;

	//�������� ���
	int* p;

	//cout << "��" << p << endl;
	cout << "�ּ�" << &p << endl;
	cout << "ũ��" << sizeof p << endl;
	//������ �ʱ�ȭ
	p = nullptr;
	cout << "��" << p << endl;

	double* p2{ nullptr };
	unsigned long long* p3{ nullptr };
	vector<string>* p4{ nullptr };
	string* p5{ nullptr };
	//�������� ũ��� ��� ���ٴ� ���� �� �� ����..
	cout << sizeof p2 << sizeof p3 << sizeof p4 << sizeof p5 << endl;

	int score{ 10 };
	double high_temp{ 100.7 };
	int* score_ptr{ nullptr };

	score_ptr = &score;

	cout << "����" << score << endl;
	cout << "�ּ�" << &score << endl;
	cout << "���� �������� ��" << score_ptr << endl;
	cout << "���� �����Ͱ� ����Ű�� ������ ��" << *score_ptr << endl;
	//�������� ���� �ٲٰ� �Ǹ�...? �޸��� �ּҿ� ���� �����Ͽ� �� ���� �ٲٹǷ� ������ �� ��ü�� �ٲ�..
	*score_ptr = 200;

	cout << "���� �����Ͱ� ����Ű�� ������ ��" << *score_ptr << endl;
	cout << "����" << score << endl;
	
#pragma endregion
#pragma region �޸� �������� �Ҵ��ϱ�
/*
�޸𸮸� �������� �Ҵ��ϱ�
�밳�� �󸶸�ŭ�� �޸� ũ�Ⱑ �ʿ����� �� �� ���� ��찡 ����
������ ����Ҹ� �ǽð����� �ٲ� �� ����
C++�� �迭�� ����غ���...
�迭�� ó�� ������ ũ���� ������
�׷��� ���ʹ� ũ�Ⱑ �۾����ų� Ŀ���ų� ��...
�����͸� �̿��Ͽ� ���� ���ٵ� heap storage�� ������ �� ����....
	new Ű���带 ���� heap�� �Ҵ���
*/
	int* int_ptr1{ nullptr };
	int_ptr1 = new int; //heap �� ���� �Ҵ�
	cout << int_ptr1 << endl;
	cout << *int_ptr1 << endl;

	*int_ptr1 = 100;
	cout << *int_ptr1 << endl;

	int* array_ptr{ nullptr };
	int size{};
	cout << "�Ҵ��ϰ� ���� �迭�� ũ��: ";
	cin >> size;

	array_ptr = new int[size]; //heap �޸𸮿� �迭 �Ҵ�

	int* int_ptrex{ nullptr };

	int_ptrex = new int; //heap�� ���� �Ҵ�

	cout << int_ptrex << endl; //���� ���� ���� �̸��� ����..
	//�Ҵ��ϰ� ������ ���� ������ �޸� ������ �߻���...

	
	
	delete int_ptr1;
	delete int_ptrex;
	//heap�� �Ҵ��ߴ� �޸� ȸ�� : �̰��� ������ ���α׷� ����ø��� ���� �޸𸮰� ��� �þ �ᱹ �Ҵ��� �� �ִ� �޸𸮰� ����� ���α׷��� ���� �����..

	size_t size1{ 0 };
	double* temp_ptr{ nullptr };

	cout << "�µ��� �󸶳� ���� �ִ°�? ";
	cin >> size1;

	temp_ptr = new double[size1];
	cout << temp_ptr << endl;
	delete[] temp_ptr; //�迭�� �Ҵ��� ���� ������ ���� []�� ����
	//�����ϰ��� �ٽ� �����Ϸ� �ϸ� �װ͵� ������ �� : �޸� 

	//C++������ �迭�� �迭�� �����Ͱ� ���� ���� ����...?,.
	//�迭: 0��° ����� �ּ�, ������ : 0��° ����� �ּ�

	int scores[]{ 100, 98, 89 };
	cout << scores << endl;
	cout << *scores << endl;

	int* score_ptr{ scores };
	cout << score_ptr << endl;
	cout << *score_ptr << endl;

	cout << (score_ptr + 1) << endl;
	cout << *(score_ptr + 1) << endl;
	cout << (score_ptr + 2) << endl;
	cout << *(score_ptr + 2) << endl;
	/*
	�Ʒ��� ���� ǥ���� ���� C++������ ������ ���� ������
	int array_name[] {1,2,3,4,5};
	int* pointer_name {array_name};

	array_name[index] =	pointer_name[index]
	*(array_name +index) = *(pointer_name + index)
	*/

#pragma endregion
#pragma region ������ ���
	/*
	++ : �迭�� ���� ���Ҹ� ����Ŵ
	int_ptr++
	-- : �迭�� ���� ���Ҹ� ����Ŵ
	int_ptr--

	+ : Ÿ���� ũ�⸸ŭ �����͸� ������Ŵ n * sizeof(type)
	int_ptr += n;
	- : Ÿ���� ũ�⸸ŭ �����͸� ���ҽ�Ŵ n * sizeof(type)
	int_ptr -= n;

	�� �����͸� ����...? : �� �����ʹ� �ݵ�� ���� ������ Ÿ���� �����Ѿ� ��
	�� ������ ���� ����
	int n = int_ptr2-int_ptr1;

	�����ʹ� ���� �ּҸ� �����Ѿ� ���� ������ ���ֵ� : �����Ͱ� �ƴ϶� ����Ű�� �ּҰ� ���ƾ� ��

	string s1 {"A"};
	string s2 {"A"};

	string* p1 {&s1};
	string* p2 {&s2};
	string* p3 {&s1};

	cout << (p1 == p2) << endl; :���� : �����ʹ� ������ ����Ű�� ���� �ٸ�, s1, s2
	cout << (p1 == p3) << endl; :�� ����Ű�� ���� �� �� s1

	�����Ͱ� ����Ű�� �����͸� ���ϰ� ������..?

	cout << (*p1 == *p2) << endl;
	cout << (*p1 == *p3) << endl;
	�� �� �� �����͸� ���ϰ� �ǹǷ� ���� ��

	*/
#pragma endregion
#pragma region ���, ������
	/*
	const�� pointer
	pointes to constants
	constant pointers

	����� ����Ű�� ������ : �����Ͱ� ����Ű�� ���� �����͸� �ٲ� �� ����
	������ ������ ��ü�� �����̹Ƿ� ����� �ƴ� �ٸ� ���� ����ų �� ����

	int high_score{100};
	int low_score{65};
	const int* score_ptr{ &high_score};

	*score_ptr = 86; //���� �߻�
	score_ptr = &low_score;

	constant pointer : ������ ��ü�� �ٲ��� ������ ������ ��ü�� �ٲ� �� ����

	int high_score{100};
	int low_score{65};
	int *const score_ptr {&high_score};

	*score_ptr = 86; //���
	score_ptr = &low_score; //������ ��ü�� ����� ������� ������ �ּ� ��ü�� �ٲ� �� ����

	��� �����Ͱ� ��� �����͸� ����Ű�� �����...
	�����Ϳ� ������ �� �� �ٲ� �� ����...

	int high_score{100};
	int low_score{65};
	const int *const score_ptr {&high_score};

	*score_ptr = 86; //����
	score_ptr = &low_score; //����

	*/
#pragma endregion
#pragma region �Լ��� �����͸� �����ϱ�
	/*
	�Լ��� ������ �����ͷ� �����ϱ�
	: �Լ� ���Ǻ��� �����ͷ� ������ ����ؾ� ��

	void double_data(int* int_ptr){
		*int_ptr *= 2;
	}

	�� ����...?

	int main(){
		int value{10};
		cout << value << endl;
		double_data(&value); //�ּҿ� �����ϰ� ��
		cout << value << endl;
	}
	�Լ����� �����ͷ� ���� �����ַ���...?
	�Լ� ���Ǻ��� �����ͷ� �Ѱ��شٴ� ���� ����ؾ� ��
	type* function();
	
	int* largest_int(int* int_ptr1, int* int_ptr2){
		if(*int_ptr1>*int_ptr2){
			return int_ptr1;
		}
		else{
			return int_ptr2;
		}
	}
	int main(){
		int a{100};
		int b{200};

		int *largest_ptr{nullprt};
		largest_ptr = largest_int(&a, &b); //���� �Լ����� ȣ���� ���� �ּҷ� �����ϰ� ��
		cout << *largest_ptr << endl; //�������� �����Ϳ� ����
		return 0;
	}
	�Լ����� �������� �޸𸮸� �Ҵ��Ͽ� �����ִ� ����
	int* create_array(size_t size, int init_value = 0){

		int* new_storage {nullptr};
		new_storage = new int[size];
		for(size_t i{0}; i< size; ++i){
			*(new_storage +i) = init_value; //�迭�� �����ϰ� �� ������ �迭�� ���Ҹ� �ʱⰪ���� �ʱ�ȭ ����
		}
		return new_storage;
	}

	int main(){
		int *my_array;

		my_array = create_array(100, 20);


		delete[] my_array;

		return 0;
	}
	//�Լ����� �����ͷ� ������ �� �����ؾ� �� ���� : �Լ��� ���������� ����Ű�� �����ͷ� ��ȯ���� �� ��
	*/
#pragma endregion
#pragma region �����ͷ� �߻��� �� �ִ� ������
/*
 int* int_ptr; //�ʱ�ȭ ���� ���� ������

  *int_ptr =100; //���� �߻���
  ���̻� ������ �ʴ� �����͸� ����Ű�� ������
  �Լ��� ���� ������ ����Ű�� �����͸� �Ҵ��� ���...�� ���� ������ �߻��� �� ����

  new�� �Ҵ��� �� �����ϴ� ��� : ����ó���� ���� ���ܰ� �߻��� ���
  null pointer�� �����Ϳ� ������ �õ��� ��� ���α׷��� ���� ����� �� ����
  �޸𸮸� �Ҵ��ϰ� ����� �� ����� ���
  : ���� ���� �߻��ϴ� ����...

  smart pointer�� ���� �κ��� �ذ��� �� ����...
 */
#pragma endregion
#pragma region ���� reference
/*
����...
������ ���� ó���ϸ� �ƹ��͵� �ٲ��� ����
vector<string> stooges{"L", "M", "C"};

for (auto str : stooges){
	str = "A";
}
for(auto str: stooges){
	cout << str << endl;
}
������..�Ʒ��� ��쿣... �ٲ�
for(auto &str: stooges)
{
	str = "A";
}
for(auto str : stooges){
	cout <<str<<endl;
}
�迭, ���͵��� ��Ҹ� ������ ���� ���� �� �����ִ� �����̸� ������ ���� const�� �ٿ� �����ϴ� ���� ���� �����ֱ⸸ �ϴ� ���·ε� �� �� ����
for (auto const &str : stooges){
	cout << str << endl;
}

*/
#pragma endregion
#pragma region pointer�� ����
/*
������ ������ ��� �Լ��� ������ ������ ���� �ٲ��� ����
�����͸� ���� ������ ������ ���
�Լ��� ���� ������ �Ķ���� ���� �ٲ� ���, Ȥ�� �����ؾ� �� ���� ���� ���..
�����͸� ����� ������ ���
�Լ����� �Ķ���� ���� �ٲ��� ���� ���, Ȥ�� �Ķ���Ͱ� �����ϱ⿡ Ŭ ���, �����ʹ� nullptr�� ���� ������ ��
��� �����Ϳ� ����� ������ ���
�Լ��� �Ķ���� ���� �ٲ��� ���� ���, ������ ��ü�� �ٲ��� ���� ���
������ ������ ���
�Լ��� �Ķ���� ���� �ٲ� ���, �Ķ���ʹ� nullptr�� ���� �� ����
��� ������ ������ ���
�Լ��� �Ķ���� ���� �ٲ��� ���� ��� �Ķ���ʹ� nullptr�� ���� �� ����
*/
#pragma endregion


	return 0;
}