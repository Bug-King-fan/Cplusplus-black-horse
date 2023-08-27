#include<iostream>
using namespace std;
using ll = long long;

class BMW {
public:
	void run() {
		cout << "启动：" << endl;
	}
};


//开车去上班  BMW和person是依赖关系 车作为形参处理
class person {
public:
	void gowork(BMW &car) {
		car.run();
	}
};

//开车去上班  BMW和person是关联关系 车和人是固定关系
class person2 {
public:
	void gowork() {
		car->run();
	}
	BMW *car;
};

int main() {



	return 0;
}