/*
��ü ���� ���α׷�
���α׷����� �ൿ, ������ ��ü�� �����̳Ķ�� ����
���α׷��� �Լ��� ����
�����ʹ� �и��Ǿ�����
�����ʹ� �Լ��� ������, �Ķ���ͷ� ���޵�

�Լ��� �������� ������ �˰� �־�� ��

Ŭ���� : ������ ��ü�� û����....
�����Ϳ� �Լ��� ���� ������ �ܺο� �������̽��� �Լ��� ���� ����

, ��ü : Ŭ������ ���� ����
Ŭ������ Ư���� ��
�ſ� ���� ��ü�� ���� �� ����
���� �ٸ�

int high_score;
int low_score;

Account account1;
Account account2;

vector<int> scores;
string name;

*/
#include <iostream>
#include <string>
using namespace std;

#pragma region Ŭ���� ����, ��ü ����
/*
class Ŭ���� �̸�
{
	
}
Ŭ������ ����, �Լ��� ������ �� ����
dot operator�� ������

Account* frank_accout = new Account();

(*frank_account).balance;
(*frank_account).deposit(1000.0);

Ȥ�� arrow operator�� ���� (pointer operator)

Account* frank_account = new Account();

frank_account -> balance;
frank_account -> deposit(1000.0);

dot operator �� ������ ���� pointer�� ���¸� ��ü�� �ο��ϰ�
arrow operator �� ������ ���� ��ü �״�� ���� ���� �� �� ����...
arrow operator�� ������ ��ü ��ü�� pointer�� ���·� �����Ǿ�� ��
*/
class Player {
//�ܺο��� ���� �����ϰ� �Ϸ��� ���� public:�� �ٿ��� �� �ش� ǥ�� ���� ��� ���� �ܺο� �����ȴٴ� ��
public:
	int age{};
	string name{};

	void talk(string sen) {
		cout << name << " " << sen << endl;
	}
	bool is_dead();
};
class Account {
//
public:
	string name{"Account"};
	double balance{0.0};

	bool deposit(double bal) {
		balance += bal;

	}
	bool withdraw(double bal) {
		balance -= bal;
	}
};


#pragma endregion
#pragma region public vs private
/*
public : ��� �������� ���� ����
private : �ش� ���, Ȥ�� Ŭ������ ģ���� ���� ����
protected : ��ӵ� ������ ���� ����

class Class_Name{
public:
//
private:
//
protected:
//
}

����
class Player{
private:
	std::string name;
	int health;
	int xp;
public:
	void talk(std::string text_to_say);
	bool is_dead();
};
�̷��� �����صθ�
name, health, xp�� �ܺ� ������ �Ұ���
talk, is_dead�� �ܺο��� ���� ����

Player ex;
ex.name = "A";//���� �Ұ����ϹǷ� ������ ���� private
ex.health = 1000; //���� �Ұ����ϹǷ� ������ ���� private
ex.talk("�غ� �Ϸ�"); //���� �����ϹǷ� �ܺο��� �Լ� ���� ���� public

Player* pointerPlayer = new Player();
pointerPlayer->xp =100; //���� �Ұ����ϹǷ� ������ ���� private
pointerPlayer->talk(""); //���� �����ϹǷ� ���� ���� public
delete pointerPlayer;


����� ����? �������̷� �����Ͽ� ó���� ��� ���� ���� ã�Ⱑ ���� ����, ���� ��θ� �����Ͽ� ���� ������ ���̱� �� ��ġ�� ����
*/
#pragma endregion

#pragma region ��� �޼ҵ� �ֱ�
/*

�Լ��� �ִ� �Ͱ� �����
��� �޼ҵ�� ��� ��Ʈ����Ʈ�� ���� ��쿡 ���� ���� : public, private ������ ���� �� �ʿ䰡 ����
Ŭ���� ���� ������� �� ���� inline ��

Ŭ���� �ٱ����� ������� ���� ����
�Ʒ��� ���� 
Class_name::method_name

.h ���Ͽ� Ŭ���� ������ �صΰ�
.cpp ���Ͽ� Ŭ���� ������ ���� �� ����
Ŭ���� ����� Ŭ���� ���� ����ֱ⸦ �и��� �� ����

Ŭ���� ���ο� ��� �����ؼ� ���� ���
class Account{
private:
	double balance;
public:
	void set_balance(double bal){
		balance= bal;
	}
	double get_balance(){
		return balance;
	}
}
Ŭ���� �ܺο��� �޼ҵ� ������ ���� ���
class Account{
private:
	double balance;
public:
	void set_balance(double bal);
	double get_balance();
}
//Ŭ���� ���ο��� �Լ��� ������Ÿ�����θ� ���ǵ� ���� �� �� ����
//Ŭ������ �Լ� ���� �ֱ�..> Ŭ���� �ܺο��� ó����
void Account::set_balance(double bal){
	balance = bal;
}
double Account::get_balance(){
	return balance;
}


header���� Ŭ���� ������ �ص�
Account.h����

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account{
private:
	double balance;
public:
	void set_balance(double);
	double get_balance();
}
#endif

�� Ŭ������ ���Ǹ� ������..
#include "Account.h"�� ���� ����ֱ�

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
//Ŭ���� ����
#endif

#pragmaŰ����...>
Account.h ����

#pragma once

class Account{
private:
	double balance;
public:
	void set_balance(double);
	double get_balance();
}

Account.cpp

#include "Account.h"

void Account::set_balance(double bal){
	balance = bal;
}
double Account::get_balance(){
	return balance;
}

main.cpp

#include <iostream>
#include "Account.h"

int main(){
	Account a;
	a.set_balance(1000.0);
	double bal = a.get_balance();

	std::cout << bal << std::endl;
	return 0;
}
*/
#pragma endregion
#pragma region ������, �ı���  Constructor, Destructor
/*
Constructor: Ư�� �޼ҵ�
��ü�� ������ �� ����
��ü �ʱ�ȭ �� �� ������
Ŭ���� �̸��� ���� �̸��� ����
return type�� Ư��ȭ���� ����
�����ε� �� �� ����

class Player{
private:
	std::string name;
	int health;
	int xp;
public:
//�Ʒ��� Constructor�� overloading�� ����
	Player();
	Player(std::string name);
	Player(std::string name, int health);
	Player(std::string name, int health, int xp);
}
Destructor: Ư�� �޼ҵ�
Ŭ���� �̸��� ������ �տ� ~�� �߰��� ����
��ü�� �ı��� �� ȣ���
return type, �Ķ���� ����
Ŭ������ 1���� Destructor�� ���� : overload �Ұ���
�޸� ������ �ٸ� ���ҽ� ������ �� ������

class Player{
private:
	std::string name;
	int health;
	int xp;
public:
//�Ʒ��� Constructor�� overloading�� ����
	Player();
	Player(std::string name);
	Player(std::string name, int health);
	Player(std::string name, int health, int xp);
	//Destructor
	~Player();
}
Constructor�� Destructor�� Ŭ�������� �������� �ʴ� ��� �����Ϸ��� �⺻ Constructor�� Destructor�� ������...

���� ��Ͽ��� ������ ��ü�� �ı��� ���� �������� �ı��� (��ǻ�ʹ� �⺻������ stack �޸𸮸� ������ �ִٴ� ���� ����)
*/
#pragma endregion
#pragma region �⺻ ������ Default Constructor
/*
Ŭ���� ���ο� �ƹ��� Constructor�� �������� ������ default Constructor�� ����, ����
������ Constructor�� �ϳ� �����ϴ� ���� default constructor�� ���̻� �������� ����..
����� constructor�� ���ؼ��� ��ü�� �����ؾ� ��
Player frank{"Frank", 100, 13};�� ���� ���·� ������ Constructor�� ���¿� ���� �����ؾ� ��
Ȥ�� Pointer�� ���·� �����ȴٸ�
Player* frank = new Player("Frank", 100, 13);
*/
#pragma endregion
#pragma region Overloading Constructor
/*
Constructor�� Overloading�� ��� �ܺ� ������ �޼ҵ��� �ܺ� ����� ���� ������� �̷����
Player::Player(){
	name = "None";
	health = 0;
	xp = 0;
}
*/
#pragma endregion
#pragma region Constructor Initialize lists
/*
Constructor���� ��� ������ ����� �ʱ�ȭ �Ǵ� ���� ����
ȿ�����̰� 
*/
#pragma endregion
#pragma region Delegating Constructor
/*
Constructor�� �밳 ��� ������ �ʱ�ȭ�ϰ� �׿� ���� Constructor���� ���� �ſ� ����� ������ ��
����� �ڵ尡 �ߺ������� �Ǿ������� ������ �߻���Ű�� ����
�ϳ��� constructor�� �ִ� code�� �ٸ� constructor���� ȣ���ϱ� : �ڵ� �ߺ��� ���� �� ����
class Player{
private:
	std::string name;
	int health;
	int xp;
public:
//�Ʒ��� Constructor�� overloading�� ����
	Player();
	Player(std::string name);
	Player(std::string name, int health);
	Player(std::string name, int health, int xp);
	//Destructor
	~Player();
}

Player::Player()
	: name{"None"}, health{0}, xp{0} {
}
Player::Player(string n)
	: name{n}, health{0}, xp{0} {
}
Player::Player(string n, int h, int x)
	: name{n}, health{h}, xp{x} {
}

�����ڵ��� �ſ� ����ϰ� ����ִ� ���� �ٸ�..> �Ʒ��� ���� ���·� delegating �� �� ����

Player::Player(std::string name_val, int health_val, int xp_val)
	: name{name_val}, health{health_val}, xp{xp_val} {
}
Player::Player()
	: Player{"None", 0, 0}{
}
Player::Player(std::string name_val)
	:Player{name_val, 0, 0}{
}
*/
#pragma endregion
#pragma region Constructor parameters and default value

/*
���� ��ü�� �ʱ�ȭ�� �� �Ű������� �ִ� ������ �� �� ������...> �⺻ �Ķ���͸� �ְ� ó���ϸ� ������ ���� �� ����

class Player{
private:
	std::string name;
	int health;
	int xp;
public:
	//Constructor with default parameter value
	Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
}
//������ ���� Constructor�� implement
Player::Player(std::string name_val, int health_val, int xp_val)
	: name {name_val}, health {health_val}, xp {xp_val}
{

}


*/
#pragma endregion
#pragma region Copy Constructor
/*
���� ������Ʈ�� ���� ������Ʈ���� �����ϰ� �Ǹ� � ���� �������� ���ΰ�??
�Ķ������ ���� ������ ���޵�,
������Ʈ �Լ��� ���� ������ ���޵�
���� Ŭ���� ������� �����

Player hero {"Hero", 100, 20};
void display_player(Player p){
	//
}
display_player(hero);

Player enemy;
Player creat_super_enemy(){
	Player an_enemy{"Super Enemy", 1000, 1000};
	return an_enemy;
}
enemy = create_super_enemy();

Player hero {"Hero", 100, 100};
Player another_hero {hero};

���� ���·� ������ ���� const�� �ٿ� ������ ���� ������ �� ������ �����ϱ�...

Copy constructor
Type::Type(const Type &source);
Player::Player(const Player &source);

//���� class ���ο��� �������� ������ �����Ϸ��� �⺻ copy constructor�� �����Ͽ� ó����...
*/
#pragma endregion

#pragma region CopyConstructor with shallow copy
/*
default copy constructor : ��ü�� �����Ͱ� �����

shallow copy

class Shallow{
private:
	int* data;
public:
	Shallow(int d); //Constructor
	Shallow(const Shallow &source); //Copy Constructor

	~Shallow(); //Destructor
}
//������ Ÿ������ ����� Constructor Ŭ���� �ܺο��� ����
Shallow::Shallow(int d){
	data = new int;
	*data = d;
}
//������ Ÿ������ ����� Destructor Ŭ���� �ܺο��� ����
Shallow::~Shallow(){
	delete data; //�޸� �Ҵ� ����!!
	cout << "Destructor freeing data" <<endl;
}
//������ Ÿ������ ����� Copy constructor Ŭ���� �ܺο��� ����
Shallow::Shallow(const Shallow &source)
	: data(source.data){
		cout << "Copy constructor - shallow" << endl;
}
shallow copy : pointer�� �����, pointer�� ������ ����Ű�� ������ �ƴ϶� ������ �� ��ü�� �����
>> ���� : source�� ���� ����� ������Ʈ�� ���� data�� ����Ű�� �����͸� ���� ��
���� ��ü�� �����Ǿ� �����Ͱ� ����Ű�� ���� �Ҵ��� ������ ���¿����� ������ ��ü�� ������ ���� ��Ҹ� ����Ű�� �����͸� ���� ��...> ����� ��ü���� ���� �����͸� �����Ϸ��ϴ� ����? >> ���� �߻�

*/
#pragma endregion

#pragma region CopyConstructor with Deep copy
/*
pointer�� ����Ű�� �����͸� �����Ͽ� ���� ����
�����ʹ� ���� ������ �����͸� ����Ű�� ��
class Deep{
private:
	int* data;
public:
	Deep(int d); //Constructor
	Deep(const Deep &source); //Copy Constructor

	~Deep(); //Destructor
}

Deep::Deep(int d){
	data = new int;
	*data = d;
}
Deep::~Deep(){
	delete data;
	cout << "Destructor freeing data" << endl;
}
Deep::Deep(const Deep &source)
{
	data = new int; //���� �Ҵ�
	*data = *source.data; //�����͸� �״�� ����
	cout << "Copy constructor-deep" << endl;
}
Deep::Deep(sonst Deep &source) : Deep{*source.data}{
	
}
*/
#pragma endregion
#pragma region Move Constructors
/*
���� �����Ϸ��� �̸��� ���� �ӽ� ���� ����⵵ ��..
C++ 11���� move semantic, move constructor�� ���Ե�
move constructor�� �����ϴ´�� �ű�� ��....

r-value reference�� �ű�
&& r-value opertor


int x{100}
int& l_ref = x;
l_ref = 10;

int&& r_ref = 200;
r_ref = 300;

int &&x_ref = x; //compile error

l-value reference parameter

void func(int &num); //l-value
void func(int &&num); //r-value

class Move{
private:
	int *data;
public:
	void set_data_value(int d){ *data = d;}
	int get_data_value() {return *data;}
	Move(int d); //Constructor
	Move(const Move &source); //Copy Constructor
	Move(Move &&source); //Move Constructor
	~Move(); //Destructor
};

Move::Move(const Move &source)
{
	data = new int;
	*data = *source.data;
}

Vector<Move> vec;
vec.push_back(Move{10});
vec.push_back(Move{20});

���� �����ڰ� deep copy�� ������ ȣ���ϰ� ��..
move constructor : ���ҽ��� ������..
�������� ���� ������Ʈ�� �ּҷ� �ּҸ� �ű�

Type::Type(Type &&source);
Move::Move(Move &&source);

Move::Move(Move &&source)
:data {source.data}{
	source.data = nullptr;
}
//�����͸� �������� ���Ŀ�


*/
#pragma endregion
#pragma region this Pointer
/*
this : ��ü�� ����Ű�� ������
class�� ����ų �� ����
��� class�� ���(�ʵ�, �޼���)�� this�� ������ �� ����

void Account::set_balance(double bal)
{
	balance = bal;
}

����... �Ķ������ �̸��� ���� ���޵ȴٸ�..?

void Account::set_balance(double balance)
{
	this->balance = balance;
}
this�� �ش� Ŭ������ balance�� �Ű������� ���޵� balance�� ���� ���������� ���� ��

���� ������Ʈ�� ���� ������ �Ǻ��� ���� ����

int Account::compare_balance(const Account &other)
{
	if(this == &other)
	{
		std::cout << "���� ��ü" << endl;
	}
}

*/
#pragma endregion
#pragma region const Class
/*
const : ��ü���� �� �� ����
const ��ü�� �Լ��� �θ��� �Ǹ� � ���� ����°�?

const Player villian{"Villian", 100, 55};
//�̷��� ó���ϸ� ó�� ������ �� ������� �� �ܿ� ���� �ٲٷ� �õ��ϸ� ������ ������ ��..
get������ ó���� �Լ��� ȣ���Ϸ� �ϸ� ������ �� >> ��ü�� �ٲ� �� �ִٰ� �Ǵ�(�����Ϸ���)�Ͽ� ������ ����Ŵ

class Player{
private:
//
public:
	std::string get_name() const; //�Լ� ������Ÿ�� �ڿ� const�� �ٿ� �̰��� �Լ��� ���� �ٲٴ� ���� �ƴ϶�� �����Ϸ��� �����ؾ� ��.. ���� �ش� �Լ��� ȣ���� �� ���� �ٲ���� �ϸ� ������ �߻���Ŵ
	void display_object() const{
		cout << "" <<endl;
	}
}
*/
#pragma endregion
#pragma region static class member
/*
static���� ������ �� ����
data�� class��ü�� �������� �� (��ü���ٰ� �ƴ϶�)

�޼ҵ尡 static���� ����Ǿ��ִٸ�? ��ü�� �����ϰ� ȣ���

class Player{
private:
	static int num_players;
public:
	static int get_num_players();
}

���ο��� ȣ���� ����
#include "Player.h"

int Player::num_players = 0;

int Player::get_num_players(){
	return num_players;
}
Player::Player(std::string name_val, int health_val, int xp_val)
	:name{name_val}, health{health_val}, xp{xp_val}{
		++num_players;
	}
Player::~Player()
{
	--num_players;
}

*/
#pragma endregion
#pragma region Struct, Class
/*
struct ��� Ű����� struct�� ���� �� ����
struct�� C���� �� ��
class�� ���� �����
�⺻������ member���� public��

struct���� �޼ҵ带 �����ϸ� �� ��

class�� getter, setter�� �����ϰ� �޼��带 ������� �� ����
*/
#pragma endregion
#pragma region Friend of class
/*
friend : �Լ� Ȥ�� Ŭ���� �߿� Ŭ������ �������� ���� ����� ���� ������ ��
�ش� �Լ�, Ŭ������ Ŭ������ ����� �ƴ�

function : non-member function
�ٸ� Ŭ������ member�޼��尡 �� �� ����
class: �ٸ� Ŭ�����ε� Ŭ������ private ����� ���� ������ Ŭ����

friendship : granted
class���ο��� friendship�� �����ؾ� ��
function prototype���� friend��� Ű���带 �־�� ��

friendship : �������� ����Ǵ� ���� �ƴ�..
���ʿ��� ���� ���������� �ٸ� �ʿ����� ������ �Ұ����� ���� ����

friendship�� ������� ����
A�� B�� friend, B�� C�� friend, A�� C�� friend�� �ƴ�...

class Player{

	friend void display_player(Player &p);
	std::string name;
	//
	...
};

class Player{
	friend void Other_class::display_player(Player &p); //�̷��� �ش� Ŭ������ �ش� �޼���� Player�� private �Ӽ��� ������ �� �ְ� ��
	std::string name;
	int health;
	//

};

class Other_class{
public:
	void display_player(Player &p){
		p.name = "";
		p.health = 100;
		p.xp = 3;
	}
}

class Player{
	friend class Other_class;
	//
};
friend�� �ʿ��� ������ ������ ��... > �ǵ��� �ּҷ� ������ �Ѵ�


*/
#pragma endregion



int main() {

	Player* pl = new Player; // ��ü ����
	pl->name = "";

	delete pl; //��ü ����... >> �����ϴ� ���� �ſ� �߿� : �޸� ����

	Player ex; //��ü ����
	ex.name = "����";
	ex.age = 20;
	ex.talk("������ ���� �ߴ�");
	
	//�����ͷ� �����ϸ� �ݵ�� new�� ������ ��...
	Player* en = new Player;
	(*en).name = "�ƹ���";
	(*en).age = 38;
	en->talk("�ƹ����� �̾߱�");
	
	delete en; //�����ͷ� ������ ��ü�� �ݵ�� �����ؾ� ��!!!

	Account enaccount;//��ü ����
	enaccount.name = "Frank's account";
	enaccount.balance = 5000;
	enaccount.deposit(1000);
	enaccount.withdraw(500);

#pragma region CopyConstructor with Shallow copy

#pragma endregion

	return 0;
}