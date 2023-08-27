#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<iterator>

/*
！！！	父类指针可以直接指向子类对象
！！！	父类引用可以直接引用子类对象
		子类对象可以初始化、赋值父类对象
		子类可以调用父类方法
*/

using namespace std;
using ll = long long;

class yuebuqun {
public:
	yuebuqun(string kongfu) {
		this->kongfu = kongfu;
	}
	/* 不加virtual
	void fight() { //虚函数 和虚继承没有关系！
		cout << "岳不群使出" << this->kongfu << endl;
	}
	*/
	virtual void fight() { //虚函数 和虚继承没有关系！
		cout << "岳不群使出" << this->kongfu << endl;
	}
	string kongfu;
};

class lingpingzhi :public yuebuqun {
public:
	lingpingzhi(string kongfu) :yuebuqun(kongfu) {

	}
	//如果父类中有同名虚函数，子类可重写次虚函数，当父类指针指向子类对象时
	//传递父类调用父类方法 传递子类调用子类方法
	virtual void fight() {
		cout << "林平之使出" << this->kongfu << endl;
	}
private:

};

//不加函数virtual 
//编译器默认做安全处理 
//不管传递是什么类型变量，均执行父类方法
void herofight(yuebuqun& hero) {
	cout << "调用打人方法" << endl;
	hero.fight();
}

//多态发生的三个必要条件：
//1、要有继承关系
//2、要有虚函数重写
//3、父类指针或引用 指向 子类对象

int main() {

	yuebuqun ybq("辟邪剑谱");
	ybq.fight();
	lingpingzhi lpz("葵花宝典");
	lpz.fight();
	cout << "-----------------" << endl;
//不加vritual
	//herofight(ybq);
	//herofight(lpz);
	//cout << "-----------------" << endl;
//加virtual
	herofight(ybq);
	herofight(lpz);
	cout << "-----------------" << endl;

	return 0;
}