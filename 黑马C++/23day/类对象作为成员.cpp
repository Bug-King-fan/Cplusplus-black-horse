#include<iostream>
#include<string>
using namespace std;

class Phone{
public:	
	Phone(){
		cout<<"手机的默认构造函数调用\n";
	}
	~Phone(){
		cout<<"手机的析构函数调用\n";
	}
	Phone(string name){
		cout<<"手机的有参构造函数\n";
		m_phonename=name;
	}
	
	string m_phonename;
};

class Game{
public:
	Game(){
		cout<<"游戏的默认构造函数\n";
	}
	~Game(){
		cout<<"游戏的析构函数\n";
	}
	
	Game(string name){
		cout<<"游戏的有参构造函数\n";
		m_gamename=name;
	}
	string m_gamename;
};

class Person{
	
	
	public:
		
		Person(){
			cout<<"person的默认构造函数\n";
		}
		Person(string name){
			m_name=name;
		}
		Person(string name,string phonename,string gamename):m_name(name),m_phone(phonename),m_game(gamename){
			cout<<"person有参构造\n";
		} 
		~Person(){
			cout<<"person的析构函数\n";
		}
		void playgame(){
			cout<<m_name<<"拿着"<<m_phone.m_phonename<<"手机，玩着"<<m_game.m_gamename<<endl;
		}
		
		string m_name;
		Phone  m_phone;
		Game   m_game;
};
//类对象作为类成员之后，构造的顺序先将类对象一一构造，之后在构造自己，
//析构顺序相反，先构造的后析构 


void test1(){
	Person p("Frank","腰子14","GTA 5");
	p.playgame(); 
	
}

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
