#include <iostream>
using namespace std;
int max(int x, int y); //求最大数
int min(int x, int y); //求最小数
int add(int x, int y); //求和
void process(int i, int j, int (*p)(int a, int b)); //应用函数指针

int main()
{
	int x = 10;
	int y = 20;

	cout << "Max is: ";
	process(x, y, max);

	cout << "Min is: ";
	process(x, y, min);

	cout << "Add is: ";
	process(x, y, add);

	return 0;
}

int max(int x, int y)
{
	return x > y ? x : y;
}

int min(int x, int y)
{
	return x > y ? y : x;
}

int add(int x, int y)
{
	return x + y;
}

void process(int i, int j, int (*p)(int a, int b))
{
	cout << p(i, j) << endl;
}