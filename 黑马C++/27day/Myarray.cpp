#include"Myarray.h"
Myarray::Myarray(){
	this->m_Capacity = 100;
	this->m_size = 0;
	this->pAddress = new int[this->m_Capacity];	
}
Myarray::Myarray(int capacity){
	cout<<"有参函数构造调用\n";
	this->m_Capacity = capacity;
	this->m_size = 0;
	this->pAddress = new int[this->m_Capacity];
}
Myarray::Myarray(const Myarray &array){
	cout<<"调用拷贝构造函数\n";
	this->pAddress = new int [array.m_Capacity];  //深拷贝 
	this->m_size = array.m_size;
	this->m_Capacity = array.m_Capacity;
	for(int i=0;i<array.m_size;i++){
		this->pAddress[i] = array.pAddress[i];
	}
}
Myarray::~Myarray(){
	if(this->pAddress != NULL){
		cout<<"调用析构函数\n";
		delete []this->pAddress;
		this->pAddress = NULL;
	}
}
void Myarray::push_back(int val){
	//越界用户自己处理 
	this->pAddress[this->m_size] = val;
	this->m_size++;
}
int Myarray::get_data(int index){
	return this->pAddress[index];
}
void Myarray::set_data(int index,int val){
	this->pAddress[index] = val;
}

