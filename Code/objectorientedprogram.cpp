/*
객체 지향 프로그램
프로그램에서 행동, 실행의 주체가 무엇이냐라는 관점
프로그램은 함수의 집합
데이터는 분리되어있음
데이터는 함수에 변수로, 파라미터로 전달됨

함수는 데이터의 구조를 알고 있어야 함

클래스 : 생성될 객체의 청사진....
데이터와 함수를 갖고 있으며 외부에 인터페이스로 함수에 접근 가능

, 객체 : 클래스를 통해 생성
클래스의 특정한 것
매우 많은 객체가 생길 수 있음
각각 다름

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

#pragma region 클래스 선언, 객체 생성
/*
class 클래스 이름
{
	
}
클래스의 변수, 함수에 접근할 수 있음
dot operator로 접근함

Account* frank_accout = new Account();

(*frank_account).balance;
(*frank_account).deposit(1000.0);

혹은 arrow operator로 접근 (pointer operator)

Account* frank_account = new Account();

frank_account -> balance;
frank_account -> deposit(1000.0);

dot operator 로 접근할 때는 pointer의 형태를 객체에 부여하고
arrow operator 로 접근할 때는 객체 그대로 쓰는 것을 볼 수 있음...
arrow operator를 쓰려면 객체 자체가 pointer의 형태로 생성되어야 함
*/
class Player {
//외부에서 접근 가능하게 하려면 위에 public:을 붙여야 함 해당 표시 밑의 모든 것은 외부에 공개된다는 것
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
public : 어느 곳에서도 접근 가능
private : 해당 멤버, 혹은 클래스의 친구만 접근 가능
protected : 상속된 곳에서 접근 가능

class Class_Name{
public:
//
private:
//
protected:
//
}

예시
class Player{
private:
	std::string name;
	int health;
	int xp;
public:
	void talk(std::string text_to_say);
	bool is_dead();
};
이렇게 선언해두면
name, health, xp는 외부 접근이 불가능
talk, is_dead는 외부에서 접근 가능

Player ex;
ex.name = "A";//접근 불가능하므로 컴파일 에러 private
ex.health = 1000; //접근 불가능하므로 컴파일 에러 private
ex.talk("준비 완료"); //접근 가능하므로 외부에서 함수 실행 가능 public

Player* pointerPlayer = new Player();
pointerPlayer->xp =100; //접근 불가능하므로 컴파일 에러 private
pointerPlayer->talk(""); //접근 가능하므로 실행 가능 public
delete pointerPlayer;


숨기는 이유? 마구잡이로 접근하여 처리할 경우 에러 등을 찾기가 쉽지 않음, 접근 경로를 제한하여 오류 통제를 줄이기 및 고치기 쉬움
*/
#pragma endregion

#pragma region 멤버 메소드 넣기
/*

함수를 넣는 것과 비슷함
멤버 메소드는 멤버 어트리뷰트를 가진 경우에 접근 가능 : public, private 설정을 따로 할 필요가 없음
클래스 선언에 집어넣을 수 있음 inline 등

클래스 바깥에서 집어넣을 수도 있음
아래와 같이 
Class_name::method_name

.h 파일에 클래스 선언을 해두고
.cpp 파일에 클래스 내용을 넣을 수 있음
클래스 선언과 클래스 내용 집어넣기를 분리할 수 있음

클래스 내부에 모두 선언해서 넣은 경우
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
클래스 외부에서 메소드 내용을 넣을 경우
class Account{
private:
	double balance;
public:
	void set_balance(double bal);
	double get_balance();
}
//클래스 내부에선 함수가 프로토타입으로만 정의된 것을 볼 수 있음
//클래스의 함수 내용 넣기..> 클래스 외부에서 처리됨
void Account::set_balance(double bal){
	balance = bal;
}
double Account::get_balance(){
	return balance;
}


header에서 클래스 선언을 해둠
Account.h파일

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

이 클래스의 정의를 쓰려면..
#include "Account.h"를 통해 집어넣기

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
//클래스 선언
#endif

#pragma키워드...>
Account.h 파일

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
#pragma region 생성자, 파괴자  Constructor, Destructor
/*
Constructor: 특수 메소드
객체가 생성될 때 실행
객체 초기화 할 때 유용함
클래스 이름과 같은 이름을 가짐
return type이 특정화되지 않음
오버로드 될 수 있음

class Player{
private:
	std::string name;
	int health;
	int xp;
public:
//아래는 Constructor가 overloading된 형태
	Player();
	Player(std::string name);
	Player(std::string name, int health);
	Player(std::string name, int health, int xp);
}
Destructor: 특수 메소드
클래스 이름과 같으나 앞에 ~이 추가로 붙음
객체가 파괴될 때 호출됨
return type, 파라미터 없음
클래스당 1개의 Destructor만 허용됨 : overload 불가능
메모리 해제나 다른 리소스 해제할 때 유용함

class Player{
private:
	std::string name;
	int health;
	int xp;
public:
//아래는 Constructor가 overloading된 형태
	Player();
	Player(std::string name);
	Player(std::string name, int health);
	Player(std::string name, int health, int xp);
	//Destructor
	~Player();
}
Constructor와 Destructor를 클래스에서 선언하지 않는 경우 컴파일러가 기본 Constructor와 Destructor를 생성함...

같은 블록에서 생성된 객체가 파괴될 때는 역순으로 파괴됨 (컴퓨터는 기본적으로 stack 메모리를 가지고 있다는 것을 생각)
*/
#pragma endregion
#pragma region 기본 생성자 Default Constructor
/*
클래스 내부에 아무런 Constructor를 선언하지 않으면 default Constructor가 쓰임, 사용됨
하지만 Constructor를 하나 선언하는 순간 default constructor는 더이상 제공되지 않음..
선언된 constructor를 통해서만 객체를 생성해야 함
Player frank{"Frank", 100, 13};과 같은 형태로 제공된 Constructor의 형태에 맞춰 제공해야 함
혹은 Pointer의 형태로 제공된다면
Player* frank = new Player("Frank", 100, 13);
*/
#pragma endregion
#pragma region Overloading Constructor
/*
Constructor의 Overloading의 경우 외부 선언은 메소드의 외부 선언과 같은 방식으로 이루어짐
Player::Player(){
	name = "None";
	health = 0;
	xp = 0;
}
*/
#pragma endregion
#pragma region Constructor Initialize lists
/*
Constructor에서 모든 데이터 멤버는 초기화 되는 것이 좋다
효율적이고 
*/
#pragma endregion
#pragma region Delegating Constructor
/*
Constructor는 대개 멤버 변수를 초기화하고 그에 따라 Constructor들은 서로 매우 흡사한 경향을 띔
비슷한 코드가 중복적으로 되어있으면 오류를 발생시키기 쉽다
하나의 constructor에 있는 code를 다른 constructor에서 호출하기 : 코드 중복을 막을 수 있음
class Player{
private:
	std::string name;
	int health;
	int xp;
public:
//아래는 Constructor가 overloading된 형태
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

생성자들이 매우 흡사하고 집어넣는 값만 다름..> 아래와 같은 형태로 delegating 할 수 있음

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
종종 객체를 초기화할 때 매개변수를 넣는 과정을 할 수 있지만...> 기본 파라미터를 넣게 처리하면 간단히 만들 수 있음

class Player{
private:
	std::string name;
	int health;
	int xp;
public:
	//Constructor with default parameter value
	Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
}
//다음과 같이 Constructor를 implement
Player::Player(std::string name_val, int health_val, int xp_val)
	: name {name_val}, health {health_val}, xp {xp_val}
{

}


*/
#pragma endregion
#pragma region Copy Constructor
/*
만약 오브젝트를 기존 오브젝트에서 복사하게 되면 어떤 일이 벌어지는 것인가??
파라미터의 값이 값으로 전달됨,
오브젝트 함수의 값이 값으로 전달됨
같은 클래스 기반으로 복사됨

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

참조 형태로 전달할 때는 const를 붙여 참조된 값을 수정할 수 없도록 전달하기...

Copy constructor
Type::Type(const Type &source);
Player::Player(const Player &source);

//역시 class 내부에서 선언하지 않으면 컴파일러가 기본 copy constructor를 생성하여 처리함...
*/
#pragma endregion

#pragma region CopyConstructor with shallow copy
/*
default copy constructor : 객체의 데이터가 복사됨

shallow copy

class Shallow{
private:
	int* data;
public:
	Shallow(int d); //Constructor
	Shallow(const Shallow &source); //Copy Constructor

	~Shallow(); //Destructor
}
//프로토 타입으로 선언된 Constructor 클래스 외부에서 선언
Shallow::Shallow(int d){
	data = new int;
	*data = d;
}
//프로토 타입으로 선언된 Destructor 클래스 외부에서 선언
Shallow::~Shallow(){
	delete data; //메모리 할당 해제!!
	cout << "Destructor freeing data" <<endl;
}
//프로토 타입으로 선언된 Copy constructor 클래스 외부에서 선언
Shallow::Shallow(const Shallow &source)
	: data(source.data){
		cout << "Copy constructor - shallow" << endl;
}
shallow copy : pointer가 복사됨, pointer가 무엇을 가리키는 건지가 아니라 포인터 그 자체가 복사됨
>> 문제 : source와 새로 복사된 오브젝트가 같은 data를 가리키는 포인터를 갖게 됨
원본 객체가 삭제되어 포인터가 가리키는 곳이 할당이 해제된 상태에서도 복제된 객체는 여전히 예전 장소를 가리키는 포인터를 갖게 됨...> 복사된 객체에서 원본 데이터를 참조하려하는 순간? >> 문제 발생

*/
#pragma endregion

#pragma region CopyConstructor with Deep copy
/*
pointer가 가리키는 데이터를 복사하여 새로 만듦
포인터는 새로 지정된 데이터를 가리키게 됨
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
	data = new int; //새로 할당
	*data = *source.data; //데이터를 그대로 복사
	cout << "Copy constructor-deep" << endl;
}
Deep::Deep(sonst Deep &source) : Deep{*source.data}{
	
}
*/
#pragma endregion
#pragma region Move Constructors
/*
종종 컴파일러는 이름이 없는 임시 값을 만들기도 함..
C++ 11에서 move semantic, move constructor가 도입됨
move constructor는 복사하는대신 옮기는 것....

r-value reference를 옮김
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

복사 생성자가 deep copy를 여러번 호출하게 됨..
move constructor : 리소스를 움직임..
원본에서 현재 오브젝트의 주소로 주소를 옮김

Type::Type(Type &&source);
Move::Move(Move &&source);

Move::Move(Move &&source)
:data {source.data}{
	source.data = nullptr;
}
//데이터를 원본에서 훔쳐옴


*/
#pragma endregion
#pragma region this Pointer
/*
this : 객체를 가리키는 포인터
class만 가리킬 수 있음
모든 class의 멤버(필드, 메서드)는 this로 접근할 수 있음

void Account::set_balance(double bal)
{
	balance = bal;
}

만약... 파라미터의 이름이 같게 전달된다면..?

void Account::set_balance(double balance)
{
	this->balance = balance;
}
this로 해당 클래스의 balance에 매개변수로 전달된 balance의 값을 집어넣으라는 것이 됨

또한 오브젝트가 같은 것인지 판별할 때도 쓰임

int Account::compare_balance(const Account &other)
{
	if(this == &other)
	{
		std::cout << "같은 객체" << endl;
	}
}

*/
#pragma endregion
#pragma region const Class
/*
const : 객체에도 쓸 수 있음
const 객체의 함수를 부르게 되면 어떤 일이 생기는가?

const Player villian{"Villian", 100, 55};
//이렇게 처리하면 처음 생성할 때 집어넣은 값 외에 값을 바꾸려 시도하면 컴파일 에러가 남..
get등으로 처리된 함수도 호출하려 하면 에러가 남 >> 객체를 바꿀 수 있다고 판단(컴파일러가)하여 에러를 일으킴

class Player{
private:
//
public:
	std::string get_name() const; //함수 프로토타입 뒤에 const를 붙여 이것은 함수의 값을 바꾸는 것이 아니라고 컴파일러에 전달해야 함.. 또한 해당 함수를 호출할 때 값이 바뀌려고 하면 에러를 발생시킴
	void display_object() const{
		cout << "" <<endl;
	}
}
*/
#pragma endregion
#pragma region static class member
/*
static으로 선언할 수 있음
data가 class자체에 속해있을 때 (객체마다가 아니라)

메소드가 static으로 선언되어있다면? 객체와 무관하게 호출됨

class Player{
private:
	static int num_players;
public:
	static int get_num_players();
}

내부에서 호출할 때는
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
struct 라는 키워드로 struct를 만들 수 있음
struct는 C언어에서 온 것
class와 거의 비슷함
기본적으로 member들이 public임

struct에는 메소드를 선언하면 안 됨

class는 getter, setter를 선언하고 메서드를 집어넣을 수 있음
*/
#pragma endregion
#pragma region Friend of class
/*
friend : 함수 혹은 클래스 중에 클래스의 공개되지 않은 멤버에 접근 가능한 것
해당 함수, 클래스는 클래스의 멤버가 아님

function : non-member function
다른 클래스의 member메서드가 될 수 있음
class: 다른 클래스인데 클래스의 private 멤버에 접근 가능한 클래스

friendship : granted
class내부에서 friendship을 보장해야 함
function prototype에서 friend라는 키워드를 넣어야 함

friendship : 양쪽으로 보장되는 것이 아님..
한쪽에서 접근 가능하지만 다른 쪽에서는 접근이 불가능할 수도 있음

friendship은 연결되지 않음
A와 B가 friend, B와 C가 friend, A는 C의 friend가 아님...

class Player{

	friend void display_player(Player &p);
	std::string name;
	//
	...
};

class Player{
	friend void Other_class::display_player(Player &p); //이러면 해당 클래스의 해당 메서드는 Player의 private 속성에 접근할 수 있게 됨
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
friend는 필요한 때에만 쓰여야 함... > 되도록 최소로 쓰여야 한다


*/
#pragma endregion



int main() {

	Player* pl = new Player; // 객체 생성
	pl->name = "";

	delete pl; //객체 삭제... >> 삭제하는 것은 매우 중요 : 메모리 관리

	Player ex; //객체 생성
	ex.name = "무엇";
	ex.age = 20;
	ex.talk("무엇이 말을 했다");
	
	//포인터로 생성하면 반드시 new로 만들어야 함...
	Player* en = new Player;
	(*en).name = "아무개";
	(*en).age = 38;
	en->talk("아무개의 이야기");
	
	delete en; //포인터로 생성한 객체는 반드시 삭제해야 함!!!

	Account enaccount;//객체 생성
	enaccount.name = "Frank's account";
	enaccount.balance = 5000;
	enaccount.deposit(1000);
	enaccount.withdraw(500);

#pragma region CopyConstructor with Shallow copy

#pragma endregion

	return 0;
}