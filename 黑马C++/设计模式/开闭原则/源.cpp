#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<iterator>

using namespace std;
using ll = long long;

//开闭原则 对扩展开放 对修改关闭
//即增加功能是通过增加代码实现的而不是修改源代码

class abstructcaculator { //有纯虚函数的类称为抽象类
public:
	virtual void SetOperatorNumber(int a, int b) = 0;
	virtual int GetResult() = 0; //纯虚函数 
};

class Plus :public abstructcaculator {
public:
	virtual void SetOperatorNumber(int a, int b) {
		this->M_A = a;
		this->M_B = b;
	}
	virtual int GetResult() {
		return M_A + M_B;
	}
private:
	int M_A;
	int M_B;
};

class Sub :public abstructcaculator {
public:
	Sub(int a, int b) {
		this->M_A = a;
		this->M_B = b;
	}
	virtual void SetOperatorNumber(int a, int b) {
		this->M_A = a;
		this->M_B = b;
	}
	virtual int GetResult() {
		return M_A - M_B;
	}
private:
	int M_A;
	int M_B;
};

class Multiply :public abstructcaculator {
public:
	virtual void SetOperatorNumber(int a, int b) {
		this->M_A = a;
		this->M_B = b;
	}
	virtual int GetResult() {
		return M_A * M_B;
	}
private:
	int M_A;
	int M_B;
};

void test1() {
	abstructcaculator* c = new Plus;
	c->SetOperatorNumber(1, 5);
	cout << c->GetResult() << endl;
	delete c;
	c = NULL;

	c = new Sub(5, 1);
	cout << c->GetResult() << endl;
	delete c;
	c = NULL;
}

int main() {

	test1();

	return 0;
}