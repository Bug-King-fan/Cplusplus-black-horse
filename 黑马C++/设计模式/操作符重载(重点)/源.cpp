#if 1
#//实现一个复数类的 += ，-=, 前++，后++，前--，后--， << , >> ，等操作符重载
#include<iostream>

class Comolex
{
public:
    Comolex();
    ~Comolex();

    Comolex(int a, int b);//初始化构造函数 
    void printComplex();//显示

    Comolex& operator+= (const Comolex& another);//+=
    Comolex& operator-= (const Comolex& another);//-=
    Comolex& operator++ ();//前++
    Comolex& operator++ (int);//后++
    Comolex& operator-- ();//前--
    Comolex& operator-- (int);//后--

    friend std::istream& operator>>(std::istream& is, Comolex& temp);//右移操作符>>
    friend std::ostream& operator<<(std::ostream& os, Comolex& temp);//左移操作符<<

private:
    int rea_num;//实数
    int img_num;//虚数
};
//对于左移<<和右移>>操作符而言，他必须是作为友元函数来重载
//因为class a(10) ;cout<<a;   -->cout.operator<<(a);
//如果放在类中定义，就成了a.operator<<(cout);
//调用顺序不一样
std::istream& operator>>(std::istream& is, Comolex& temp);
std::ostream& operator<<(std::ostream& os, Comolex& temp);

//Comolex.cpp

//初始化构造函数
Comolex::Comolex(int a, int b)
{
    this->rea_num = a;
    this->img_num = b;
}
//显示
void Comolex::printComplex()
{
    std::cout << "( " << this->rea_num << ", " << this->img_num << "i )" << std::endl;
}
//重写+=运算符
//int a;
//a += 20;//+=（a,int ),返回改变后的a
Comolex& Comolex::operator+= (const Comolex& another)
{
    this->rea_num += another.rea_num;
    this->img_num += another.img_num;
    return *this;
}

//重写-=运算符
//int a = 10;
//a -= 2;//（a,int ) 返回修改后的a
Comolex& Comolex::operator-= (const Comolex& another)
{
    this->rea_num -= another.rea_num;
    this->img_num -= another.img_num;
    return *this;
}
//重写前++
//int a = 10;
//++a;//（a)返回被修改后的a
Comolex& Comolex::operator++ ()
{
    this->rea_num++;
    this->img_num++;
    return *this;
}
//重写后++
//int a = 10;
//a++//1.返回a原来的值，2.将a的值加一
Comolex& Comolex::operator++ (int)//重载后++，后--，都要在形参列表中写一个(亚元)参数int,只是一个标记
{
    Comolex temp(this->rea_num, this->img_num);

    this->rea_num++;
    this->img_num++;

    return temp;
}

//前--
//int a = 10;
//--a;//(a)返回修改后的a
Comolex& Comolex::operator-- ()
{
    this->rea_num--;
    this->img_num--;

    return *this;
}

//后--
Comolex& Comolex::operator-- (int)
{
    Comolex temp(this->rea_num, this->img_num);

    this->rea_num--;
    this->img_num--;

    return temp;
}

//int a;
//cin >> a;//operator>>(cin,a); 将a赋值，同时返回cin
std::istream& operator>>(std::istream& is, Comolex& temp)
{
    std::cout << "实部:";
    is >> temp.rea_num;
    std::cout << "虚部:";
    is >> temp.img_num;

    return is;
}

std::ostream& operator<<(std::ostream& os, Comolex& temp)
{
    os << "(" << temp.rea_num << "," << temp.img_num << ")";

    return os;
}
#endif