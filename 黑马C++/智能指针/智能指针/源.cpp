#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<iterator>
#include<memory> //包含智能指针


using namespace std;
using ll = long long;


class A {
public:
	A(int a) {
		cout << "A()..." << endl;
		this->a = a;
	}

	void func() {
		cout << "a=" << this->a << endl;
	}

	~A() {
		cout << "~A()..." << endl;
	}
private:
	int a;
};

void test1() {
	A* ap = new A(5);
	ap->func();
	delete ap;
	ap = NULL;
}

void test2() {
	auto_ptr<A> q(new A(15));
	q->func();//
}

//自定义智能指针 重载-> 和 *
class myauto_ptr {
public:
	myauto_ptr(A* ptr) {
		cout << "myauto_ptr(A * ptr)..." << endl;
		this->ptr = ptr;
	}
	~myauto_ptr() {
		cout << "~myauto_ptr() delete..." << endl;
		if (ptr != NULL) {
			delete ptr;
			ptr = NULL;
		}
	}
	A* operator->() {
		return this->ptr;
	}
	A& operator*() {
		return *this->ptr;
	}

private:
	A* ptr;
};

void test3() {
	myauto_ptr pt(new A(30));
	pt->func();//pt->返回对象的指针 等价于pt.ptr->func()
	(*pt).func();//(*pt)返回对象本身  等价于*ptr.func()
}

/*
！！！	父类指针可以直接指向子类对象
！！！	父类引用可以直接引用子类对象
		子类对象可以初始化、赋值父类对象
		子类可以调用父类方法
*/

int main() {
	//创建一个智能指针ptr指向new <template> 的地址
	//auto_ptr 实质是一个类
	//智能指针不用考虑回收问题，会自动回收
	auto_ptr<int>ptr(new int);
	//相当于 int *b= new int; 只是智能指针不需手动delete

	*ptr = 20;
	cout << *ptr << endl;
	
	cout << "--------------------" << endl;
	
	test1();
	cout << "--------------------" << endl;
	test2();
	cout << "--------------------" << endl;
	test3();
	return 0;
}