#include<iostream>
#include<iostream>
using namespace std;

//1.ȫ�ֺ�������Ԫ���� 
//2.��Ա��������Ԫ���� 
//3.����Ϊ���������Ԫ�� 
class building{
	//��ȫ�� ���Է����ҵ�˽��   friend �ؼ��� 
	
	//����   ���� 
	public:

		building(){
			this->m_sitroom = "����";
			this->m_bedroom = "����";
		}
		string m_sitroom; //����

	private:
		string m_bedroom;   
		friend void goodGay(building *buil);

};

void goodGay(building *buil){
	cout<<"�û����ڷ���"<<buil->m_sitroom<<endl;
	cout<<"�û����ڷ���"<<buil->m_bedroom <<endl;
}
//��Ԫ����Ŀ���Ƿ���˽�г�Ա 
void test1(){
	building * buil = new building ;
	goodGay(buil);
}



int main(){
	
	test1();
	
	system("pause");
	return 0;
}
