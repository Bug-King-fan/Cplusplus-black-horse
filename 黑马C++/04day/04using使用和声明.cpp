#include<iostream>
using namespace std;

namespace King{
	int sunwukongID=10;
}

void test1(){
	int sunwukongID=20;
	// using 声明   注意避免二义性！ 
	// 写了using声明后，下一行代码说明了以后看到的 sunwukongID 是用King下的
	// using King::sunwukongID;
	// 但是编译器又有就近原则 ，出现二义性。 
	
	cout<<sunwukongID<<endl;  //20
}

//using编译指令
namespace LOL{
	int sunwukongID=30;
}
 void test2(){
 	//int sunwukongID=20;
 	//using编译指令
	using namespace King;  //打开房间   King房间 
	using namespace LOL;   //打开房间   LOL 房间 
	//如果打开多个房间，也要避免二义性问题 
	cout<<LOL::sunwukongID<<endl;    //30
	cout<<King::sunwukongID<<endl;   //10
 }

int main(){
	
	test1();
	test2();
	
	system("pause");
	return 0;
}
