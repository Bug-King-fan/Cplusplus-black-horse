/*list ����  list��һ��˫��ѭ������  ��֧���������*/
/*
��ӡ������iterator���������� 
list ͷ�ڵ������� 
	(1)����
		list<type>li
		list<type>li2(li.begin(),li.end())   [beg,end)
		list<type>li2(n,elem)  n��elem��li2 
	(2)����/ɾ��
		li.push_back(elem)
		li.pop_back()
		li.push_front(elem)
		li.pop_front()
		li.insert(itreator,elem) ��iteratorλ�ò���elem ���������ݵ�λ�� 
		li.insert(iterator,n,elem) iteratorλ�ò���n��elem�޷���
		li.insert(iterator,beg,end) iteratorλ�ò�����[beg,end)����Ԫ�� 
		li.clear()
		li.erase(beg,end) ɾ��[beg,end)����Ԫ�� 
		li.erase(iterator) ɾ��������λ��Ԫ��
		li.remove(elem) ɾ��������ֵ��elem��ƥ�������Ԫ�� 
	(3)��С
		li.size()
		li.empty()
		li.resize() ͬvector
	(4)��ֵ
		li.assign(beg,end) 
		li.assign(n,elem)
		l1.swap(lst)  ����
	(5)���ݴ�ȡ
		li.front() 
		li.back()
	(6)��ת/����
		li.reverse()  �ı�ԭ������
		ע�⣺���в�֧��������ʵĵ���������������ϵͳ�ṩ���㷨
			  �����֧��ϵͳ�ṩ���㷨������������ṩ		 
		li.sort()  ��С����
		
		li.sort(mycmp)  �Ӵ�С 
		bool mycmp(int v1,int v2){
			return v1 > v2;
		}
		�����Զ����������� �����Լ��ƶ�������򣡣���
		
		remove()ɾ���Զ����������ͣ�
			����������public��
			bool operator==(TYPE &p){
				if(this->����1==p.����1&&this->����2==p.����2&&~~~~&&this->����n==p.����n){
					return true;
				}
				retrun false;
			}
		 
*/			
}
#include<iostream>
#include<list>
using namespace std;
int main(){
	return 0;
} 
