#include<iostream>
using namespace std;

//创建主席类
//需求 单例模式 为了创建类中对象，并且保证只有一个对象实力
class ChairMan{
	private:
		ChairMan(){
			cout<<"创建对象调用构造函数\n";
		}
		
		ChairMan(const ChairMan&c){
			
		} 
		
		static ChairMan * singleMan; //类内声明 
	
	public:
		//提供 get方法 访问类
		static ChairMan*  get(){
			return singleMan;
		}
};
ChairMan * ChairMan::singleMan = new ChairMan;//static要类外初始化 

void test1(){
/*	p构造函数在public中通过new可创建多个成员对象 
	ChairMan c1;//栈上创建 
	ChairMan *c2 = new ChairMan;  //堆上创建 
	ChairMan *c3 = new ChairMan;  //都会调用构造函数 
构造函数在private 内后 全部对象不可创建	
*/

/*	ChairMan *m1 = ChairMan::singleMan;
	ChairMan *m2 = ChairMan::singleMan;
	共享数据 
*/
	
//当ChairMan::singleMan为public时可改变，所以放入private
//但是 无法直接访问了 需要提供接口   ChairMan::get() 为接口 
//	ChairMan::singleMan = NULL;

//ChairMan::get() 返回的是singleMan  ！！！ 
	ChairMan *m1 = ChairMan::get();   //同过m1指针指向唯一的公用的 singleMan 
	ChairMan *m2 = ChairMan::get();   
	if(m1 == m2){  //相同 
		cout<<"m1与m2地址相同\n";
	}
	else{
		cout<<"m1与m2地址不同\n"; 
	}
/*	
	ChairMan *m3 = new ChairMan(*m1);  //调用拷贝构造函数 
	if(m2 == m3){ //不同 有创建了一个新的对象 
		cout<<"m2与m3地址相同\n";
	}
	else{
		cout<<"m2与m3地址不同\n"; 
	}
	拷贝构造函数私有化后不可通过编译 
*/
}

int main(){
	
	cout<<"main调用\n"; //类对象的创建先于主函数调用 
	test1();

	system("pause");
	return 0;
}
