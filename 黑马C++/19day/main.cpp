#include<iostream>
using namespace std;

/*  ����
	�����������
	�����������������
	�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
*/
class Cube{
	
	private:
		
		int L;//�� 
		int W;//�� 
		int H;//��
	
	public:
		
		void set_L(int l){
			L=l;
		} 
		
		void set_W(int w){
			W=w;
		}
		
		void set_H(int h){
			H=h;
		}
		
		int get_L() const {  //����const �ͱ�ʾ�����ڲ������޸ĳ�Ա������ֵ  
			return L;
		}
		
		int get_W() const{
			return W;
		}
		
		int get_H() const{
			return H;
		}
		
		void getCubeS(){
			cout<<"���: "<<2*L*W + 2*W*H +2*L*H<<endl;
		}
		
		void getCubeV(){
			cout<<"���: "<<L*W*H<<endl;
		}
		
		//ͨ����Ա�����ж��Ƿ����
		bool cmp_class(Cube &c){
			bool ret = L == c.get_L() && W == c.get_W() && H == c.get_H() ;
			return ret;
		}
		 
		
}; 

void test1(){
	Cube c1;
	c1.set_L(10);
	c1.set_W(10);
	c1.set_H(10);
	
	c1.getCubeS();
	c1.getCubeV();
}

//ȫ�ֺ����ж������������Ƿ����
bool Cmp(Cube &c1,Cube &c2){
	//���ý�ʡ�˿ռ俪��
	if(c1.get_L() == c2.get_L() && c1.get_H() == c2.get_H() && c1.get_W() == c2.get_W()){
		return true;	
	}
	else {
		return false;
	}
} 

void test2(){
	
	Cube c1,c2,c3;
	
	c1.set_L(10);
	c1.set_W(10);
	c1.set_H(10);
	
	c2.set_L(10);
	c2.set_H(10);
	c2.set_W(10);
	
	c3.set_H(30);
	c3.set_L(30);
	c3.set_W(30);
	
	if(Cmp(c1,c2)){
		cout<<"c1,c2���\n";
	}
	else{
		cout<<"c1,c2�����\n";
	}
	
	if(Cmp(c1,c3)){
		cout<<"c1,c3���\n";
	}
	else{
		cout<<"c1,c3�����\n";
	}
	
} 

void test3(){
	Cube c1,c2,c3;
	
	c1.set_L(10);
	c1.set_W(10);
	c1.set_H(10);
	
	c2.set_L(10);
	c2.set_H(10);
	c2.set_W(10);
	
	c3.set_H(30);
	c3.set_L(30);
	c3.set_W(30);
	
	//ͨ����Ա�����ж��������Ƿ����
	bool ret2=c1.cmp_class(c2) ; 
	if(ret2){
		cout<<"c1��c2���\n";
	} 
	else{
		cout<<"c1��c2�����\n";
	}
	
	bool ret3=c1.cmp_class(c3) ; 
	if(ret3){
		cout<<"c1��c3���\n";
	} 
	else{
		cout<<"c1��c3�����\n";
	}	
	
}

void func(const Cube & first){   //����ֻ�����ɸ��� ��ô����const���α����ڶ�Ӧ���Ա�������const 
	cout<<first.get_L()<<endl;
}

int main(){
	
	//test1();
	//test2();
	test3(); 
	
	system("pause");
	return 0;
}
