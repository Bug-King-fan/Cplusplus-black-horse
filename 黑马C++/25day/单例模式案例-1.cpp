#include<iostream>
using namespace std;

//������ϯ��
//���� ����ģʽ Ϊ�˴������ж��󣬲��ұ�ֻ֤��һ������ʵ��
class ChairMan{
	private:
		ChairMan(){
			cout<<"����������ù��캯��\n";
		}
		
		ChairMan(const ChairMan&c){
			
		} 
		
		static ChairMan * singleMan; //�������� 
	
	public:
		//�ṩ get���� ������
		static ChairMan*  get(){
			return singleMan;
		}
};
ChairMan * ChairMan::singleMan = new ChairMan;//staticҪ�����ʼ�� 

void test1(){
/*	p���캯����public��ͨ��new�ɴ��������Ա���� 
	ChairMan c1;//ջ�ϴ��� 
	ChairMan *c2 = new ChairMan;  //���ϴ��� 
	ChairMan *c3 = new ChairMan;  //������ù��캯�� 
���캯����private �ں� ȫ�����󲻿ɴ���	
*/

/*	ChairMan *m1 = ChairMan::singleMan;
	ChairMan *m2 = ChairMan::singleMan;
	�������� 
*/
	
//��ChairMan::singleManΪpublicʱ�ɸı䣬���Է���private
//���� �޷�ֱ�ӷ����� ��Ҫ�ṩ�ӿ�   ChairMan::get() Ϊ�ӿ� 
//	ChairMan::singleMan = NULL;

//ChairMan::get() ���ص���singleMan  ������ 
	ChairMan *m1 = ChairMan::get();   //ͬ��m1ָ��ָ��Ψһ�Ĺ��õ� singleMan 
	ChairMan *m2 = ChairMan::get();   
	if(m1 == m2){  //��ͬ 
		cout<<"m1��m2��ַ��ͬ\n";
	}
	else{
		cout<<"m1��m2��ַ��ͬ\n"; 
	}
/*	
	ChairMan *m3 = new ChairMan(*m1);  //���ÿ������캯�� 
	if(m2 == m3){ //��ͬ �д�����һ���µĶ��� 
		cout<<"m2��m3��ַ��ͬ\n";
	}
	else{
		cout<<"m2��m3��ַ��ͬ\n"; 
	}
	�������캯��˽�л��󲻿�ͨ������ 
*/
}

int main(){
	
	cout<<"main����\n"; //�����Ĵ����������������� 
	test1();

	system("pause");
	return 0;
}
