#include<iostream>
#include<string>
using namespace std;

class Phone{
public:	
	Phone(){
		cout<<"�ֻ���Ĭ�Ϲ��캯������\n";
	}
	~Phone(){
		cout<<"�ֻ���������������\n";
	}
	Phone(string name){
		cout<<"�ֻ����вι��캯��\n";
		m_phonename=name;
	}
	
	string m_phonename;
};

class Game{
public:
	Game(){
		cout<<"��Ϸ��Ĭ�Ϲ��캯��\n";
	}
	~Game(){
		cout<<"��Ϸ����������\n";
	}
	
	Game(string name){
		cout<<"��Ϸ���вι��캯��\n";
		m_gamename=name;
	}
	string m_gamename;
};

class Person{
	
	
	public:
		
		Person(){
			cout<<"person��Ĭ�Ϲ��캯��\n";
		}
		Person(string name){
			m_name=name;
		}
		Person(string name,string phonename,string gamename):m_name(name),m_phone(phonename),m_game(gamename){
			cout<<"person�вι���\n";
		} 
		~Person(){
			cout<<"person����������\n";
		}
		void playgame(){
			cout<<m_name<<"����"<<m_phone.m_phonename<<"�ֻ�������"<<m_game.m_gamename<<endl;
		}
		
		string m_name;
		Phone  m_phone;
		Game   m_game;
};
//�������Ϊ���Ա֮�󣬹����˳���Ƚ������һһ���죬֮���ڹ����Լ���
//����˳���෴���ȹ���ĺ����� 


void test1(){
	Person p("Frank","����14","GTA 5");
	p.playgame(); 
	
}

int main(){
	
	test1();
	
	system("pause");
	return 0;
}
