#include<iostream>
#include<string>
#include <limits>
using namespace std;

int main(){

    cout << "bool所占字节数 " << sizeof(bool) << endl;
    cout << "最大值：" << (numeric_limits<bool>::max)() << endl;
    cout << "最小值：" << (numeric_limits<bool>::min)() << endl;

    cout << "char所占字节数" << sizeof(char) << endl;
    cout << "最大值：" << (numeric_limits<char>::max)() << endl;
    cout << "最小值：" << (numeric_limits<char>::min)() << endl;

    cout << "signed char所占字节数" << sizeof(signed char) << endl;
    cout << "最大值：" << (numeric_limits<signed char>::max)() << endl;
    cout << "最小值：" << (numeric_limits<signed char>::min)() << endl;

    cout << "unsigned char所占字节数" << sizeof(unsigned char) << endl;
    cout << "最大值：" << (numeric_limits<unsigned char>::max)() << endl;
    cout << "最小值：" << (numeric_limits<unsigned char>::min)() << endl;

    cout << "wchar_t所占字节数" << sizeof(wchar_t) << endl;
    cout << "最大值：" << (numeric_limits<wchar_t>::max)() << endl;
    cout << "最小值：" << (numeric_limits<wchar_t>::min)() << endl;

    cout << "short所占字节数" << sizeof(short) << endl;
    cout << "最大值：" << (numeric_limits<short>::max)() << endl;
    cout << "最小值：" << (numeric_limits<short>::min)() << endl;

    cout << "int所占字节数" << sizeof(int) << endl;
    cout << "最大值：" << (numeric_limits<int>::max)() << endl;
    cout << "最小值：" << (numeric_limits<int>::min)() << endl;

    cout << "unsigned所占字节数" << sizeof(unsigned) << endl;
    cout << "最大值：" << (numeric_limits<unsigned>::max)() << endl;
    cout << "最小值：" << (numeric_limits<unsigned>::min)() << endl;

    cout << "long所占字节数" << sizeof(long) << endl;
    cout << "最大值：" << (numeric_limits<long>::max)() << endl;
    cout << "最小值：" << (numeric_limits<long>::min)() << endl;

    cout << "long long所占字节数" << sizeof(long long) << endl;
    cout << "最大值：" << (numeric_limits<long long>::max)() << endl;
    cout << "最小值：" << (numeric_limits<long long>::min)() << endl;

    cout << "unsigned long所占字节数" << sizeof(unsigned long) << endl;
    cout << "最大值：" << (numeric_limits<unsigned long>::max)() << endl;
    cout << "最小值：" << (numeric_limits<unsigned long>::min)() << endl;

    
    cout << "double所占字节数" << sizeof(double) << endl;
    cout << "最大值：" << (numeric_limits<double>::max)() << endl;
    cout << "最小值：" << (numeric_limits<double>::min)() << endl;

    cout << "long double所占字节数" << sizeof(long double) << endl;
    cout << "最大值：" << (numeric_limits<long double>::max)() << endl;
    cout << "最小值：" << (numeric_limits<long double>::min)() << endl;

    cout << "float所占字节数 " << sizeof(float) << endl;
    cout << "最大值：" << (numeric_limits<float>::max)() << endl;
    cout << "最小值：" << (numeric_limits<float>::min)() << endl;

    cout << "size_t所占字节数 " << sizeof(size_t) << endl;
    cout << "最大值：" << (numeric_limits<size_t>::max)() << endl;
    cout << "最小值：" << (numeric_limits<size_t>::min)() << endl;


    return 0;
}