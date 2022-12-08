#pragma once
#include<iostream>
using namespace std;

class Myarray{
	public:
		Myarray();  //默认构造，默认100 
		Myarray(int capacity); //用户给容量
		Myarray(const Myarray& array);
		~Myarray();
		
		//尾插法
		void push_back(int val); 
		//根据索引查找值 
		int get_data(int index);
		//根据索引设置值
		void set_data(int index,int val);
		
		
	private:
		int *pAddress; //指向真正存储数据的指针
		int m_size; //数组大小
		int m_Capacity; //数组容量 
};

