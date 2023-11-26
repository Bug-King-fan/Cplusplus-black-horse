#include<iostream>

using namespace std;

//template<typename T>  template<class T>

template<typename T>
void print(T n) {
    cout << n << endl;
}

template<class Name_type, class Age_type>
class person {
public:
    person(Name_type name, Age_type age) {
        m_name = name;
        m_age = age;
    }

    void show() {
        cout << this->m_name << this->m_age << endl;
    }

    Name_type m_name;
    Age_type m_age;
};

void test01() {
    person<string, int> p("Tom", 20); //必须显示指定类型
    p.show();
}

template<int N>
class Array {
public:
    int m_array[N];

    void getN() {
        cout << N << endl;
    }
};

void test02() {
    Array<10> arr; //10必须是常量,指定为模板的N
    arr.getN();
}

int main() {
    print("hello");
    print<string>("hello::string");
    print(5);

    test01();
    test02();

    return 0;
}