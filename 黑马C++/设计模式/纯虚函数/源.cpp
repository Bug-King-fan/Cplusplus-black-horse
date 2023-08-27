#define __CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<iterator>
#include <iomanip>


using namespace std;
using ll = long long;

//纯虚函数语法：
// virtual 类型 函数名(参数...) = 0; 
//一个具有纯虚函数的类叫抽象类！
//抽象类不能实例化！！！
//纯虚函数类可发生多继承 但父类指针只能调用自己含有的虚函数

//图形类
class shape {
public:
	virtual double GetArea() = 0;
protected:
	double a;//长
	double b;//宽
};

//一个普通类继承一个抽象类必须重写纯虚函数
//不重写的话还是一个抽象类
//正方形
class Rect :public shape {
public:
	Rect(double a) {
		this->a = a;
	}
	virtual double GetArea() {
		cout << "正方形面积=";
		return a * a;
	}
};

//园类
class Circle :public shape {
protected:
	int r;
public:
	Circle(int r) {
		this->r = r;
	}
	virtual double GetArea() {
		cout << "圆形面积=";
		return r * r * 3.14;
	}
};

//简化main函数 面向抽象类写一个架构接口
void PrintArea(shape* p) {
	printf("%.3lf\n", p->GetArea());
}


class Is1 {
public:
	virtual void func1(int a) = 0;
	virtual void func3(int a, int b, int c) = 0;
};

class Is2 {
public:
	virtual void func2(int a, int b) = 0;
};

class isc :public Is1, public Is2 {
public:
	virtual void func1(int a) {
		cout << "func1(int)..." << endl;
	}
	virtual void func3(int a, int b, int c) {
		cout << "func1(int int int)..." << endl;
	}
	virtual void func2(int a, int b) {
		cout << "func1(int int)..." << endl;
	}
};

void i1(Is1* p) {
	p->func1(5);
	p->func3(10, 20, 30);
	//无法调用func2(100,200);
}
void i2(Is2* p) {
	//无法调用p->func1(5);
	//无法调用p->func3(10, 20, 30);
	p->func2(100, 200);
}

void test() {
	Is1* s1 = new isc;
	i1(s1);
	//不能传递i2(s1);
	Is2* s2 = new isc;
	//不能传递i1(s2);
	i2(s2);
}

int main() {

	shape* sp = new Rect(2.523);
	PrintArea(sp);
	
	shape* cs = new Circle(3);
	PrintArea(cs);

	cout << "--------------------" << endl;
	test();

	return 0;
}