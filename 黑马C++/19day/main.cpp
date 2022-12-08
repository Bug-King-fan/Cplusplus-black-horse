#include<iostream>
using namespace std;

/*  需求：
	设计立方体类
	求出立方体面积和体积
	分别用全局函数和成员函数判断两个立方体是否相等
*/
class Cube{
	
	private:
		
		int L;//长 
		int W;//宽 
		int H;//高
	
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
		
		int get_L() const {  //加上const 就表示函数内部不可修改成员变量的值  
			return L;
		}
		
		int get_W() const{
			return W;
		}
		
		int get_H() const{
			return H;
		}
		
		void getCubeS(){
			cout<<"面积: "<<2*L*W + 2*W*H +2*L*H<<endl;
		}
		
		void getCubeV(){
			cout<<"体积: "<<L*W*H<<endl;
		}
		
		//通过成员函数判断是否相等
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

//全局函数判断两个立方体是否相等
bool Cmp(Cube &c1,Cube &c2){
	//引用节省了空间开销
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
		cout<<"c1,c2相等\n";
	}
	else{
		cout<<"c1,c2不相等\n";
	}
	
	if(Cmp(c1,c3)){
		cout<<"c1,c3相等\n";
	}
	else{
		cout<<"c1,c3不相等\n";
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
	
	//通过成员函数判断立方体是否相等
	bool ret2=c1.cmp_class(c2) ; 
	if(ret2){
		cout<<"c1，c2相等\n";
	} 
	else{
		cout<<"c1，c2不相等\n";
	}
	
	bool ret3=c1.cmp_class(c3) ; 
	if(ret3){
		cout<<"c1，c3相等\n";
	} 
	else{
		cout<<"c1，c3不相等\n";
	}	
	
}

void func(const Cube & first){   //设置只读不可更改 那么想用const修饰必须在对应类成员函数后加const 
	cout<<first.get_L()<<endl;
}

int main(){
	
	//test1();
	//test2();
	test3(); 
	
	system("pause");
	return 0;
}
