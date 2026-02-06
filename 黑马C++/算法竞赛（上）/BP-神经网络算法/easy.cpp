/*使用数组保存数据（简易版 与另一个main执行一个 要将main注掉）*/
#include <iostream>
#include <map>
#include<math.h>
using namespace std;

//权重
double w1 = 0.1;
double w2 = 0.4;
double w3 = -0.2;
double w4 = 0.2;
double w5 = 0.2;
double w6 = -0.5;

//计算值、输出值
double i1;
double i2;
double i3;
double o1;
double o2;
double o3;

//sigmoid激活函数
double sigmoid(double x) {
	return (1 / (1 + exp(-x)));
}

//正向计算，返回误差值
double TError(double x, double y, double z) {
	i1 = w1 * x + w3 * y;
	o1 = sigmoid(i1);
	i2 = w2 * x + w4 * y;
	o2 = sigmoid(i2);
	i3 = w5 * o1 + w6 * o2;
	o3 = sigmoid(i3);
	return (o3 - z) * (o3 - z);
}

//BP过程，更新权重
void  BP(double x, double y, double z) {
	double c1, c2, c3; //定义残差
	//计算残差
	c3 = (z - o3) * o3 * (1 - o3);
	c1 = c3 * w5 * o1 * (1 - o1);
	c2 = c3 * w6 * o2 * (1 - o2);
	//更新权重
	w1 = w1 + x * c1 * 0.6;
	w2 = w2 + x * c2 * 0.6;
	w3 = w3 + y * c1 * 0.6;
	w4 = w4 + y * c2 * 0.6;
	w5 = w5 + o1 * c3 * 0.6;
	w6 = w6 + o2 * c3 * 0.6;
}

//验证函数
double Verify(double x, double y) {
	i1 = w1 * x + w3 * y;
	o1 = sigmoid(i1);
	i2 = w2 * x + w4 * y;
	o2 = sigmoid(i2);
	i3 = w5 * o1 + w6 * o2;
	o3 = sigmoid(i3);
	return o3;
}

int main(){
	double terror; // 误差
	int t = 0;  //整体迭代的次数
	//训练神经网络所用的数据集
	double dataSet[20][3] = {
		{5.3,3.7,0.2},
		{4.8,3.0,0.3},
		{5.1,3.8,0.4},
		{4.4,3.0,0.2},
		{5.4,3.4,0.4},
		{5.0,3.4,0.4},
		{5.1,3.3,0.5},
		{5.1,3.7,0.4},
		{5.7,3.8,0.3},
		{5.4,3.9,0.4},
		{5.1,3.5,0.2},
		{4.9,3.0,0.2},
		{4.6,3.1,0.2},
		{5.4,3.9,0.4},
		{5.0,3.4,0.2},
		{4.4,2.9,0.2},
		{5.4,3.7,0.2},
		{5.8,4.0,0.2},
		{5.0,3.5,0.6},
		{4.9,3.1,0.1},
	};
	for (int i = 0; i < 20; i++) {
		terror = TError(dataSet[i][0], dataSet[i][1], dataSet[i][2]);  //正向传播
		BP(dataSet[i][0], dataSet[i][1], dataSet[i][2]);   //反向传播
		//	cout << "w1,w2,w3,w4,w5,w6,误差的值分别是：" << w1 << "," << w2 << "," << w3 << "," << w4 << "," << w5 << "," << w6 << "," << terror << endl << endl << endl;
		if (terror < 0.0001 && t>0) break;  //保证每个样本都计算一次并且误差足够小就结束迭代
		if (i == 19) {
			i = 0;
			t++;
		}
	}
	//使用验证函数对经过学习后的神经网络进行验证
	double verify;
	verify = Verify(5.1, 3.9);
	std::cout << "实际结果是：0.2    " << "计算结果是：" << verify << endl;
	verify = Verify(4.6, 3.4);
	std::cout << "实际结果是：0.3    " << "计算结果是：" << verify << endl;
	verify = Verify(5.4, 3.9);
	std::cout << "实际结果是：0.4    " << "计算结果是：" << verify << endl;
}
