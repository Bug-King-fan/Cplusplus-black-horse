#pragma once
#include<iostream>
using namespace std;

class Myarray{
	public:
		Myarray();  //Ĭ�Ϲ��죬Ĭ��100 
		Myarray(int capacity); //�û�������
		Myarray(const Myarray& array);
		~Myarray();
		
		//β�巨
		void push_back(int val); 
		//������������ֵ 
		int get_data(int index);
		//������������ֵ
		void set_data(int index,int val);
		
		
	private:
		int *pAddress; //ָ�������洢���ݵ�ָ��
		int m_size; //�����С
		int m_Capacity; //�������� 
};

