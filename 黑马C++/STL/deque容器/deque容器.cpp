#include<iostream>
#include<deque>
using namespace std;
/* deque����(˫�˶���)
	(1)����
		deque<int>d;
		deque<int>d2(d1.begin(),d1.end())
		deque<int>d2(n,m);  ��ʼ��Ϊn��m 
	(2)��ֵ 
		d1=d2  ��ֵ 
		d2.assign(d1.bedin(),d1.end()) ��ֵ
		d2.assign(n,m)  ����ͬ d2(n,m)
		d1.swap(d2)  d1��d2Ԫ�ؽ��� 
	����
	//iterator ��ͨ������ reverse_iterator ��������� const_iterator ֻ�������� 
		for(deque<int>::const_iterator it = d1.begin();it!d1.end();it++){
			cout<<*it<<" ";
		}
	(3)�򵥲��� 
		d1.size()  ͳ��Ԫ�ظ���
		d1.empty() �п� ��1 �ǿ�0
		d1.resize(int num)����ָ����������Ϊnum �ݱ䳤���Ĭ��ֵ����̳������ֱ�ɾ��
		d1.resize(int num,elem) ����ָ����������Ϊnum �ݱ䳤��elem��䣬��̳������ֱ�ɾ��
	(4)˫�˲���ɾ��
	 	d1.push_back(i)  β�� 
	 	d1.push_front(i) ͷ�� 
		d1.pop_back()    βɾ 
		d1.pop_front()   ͷɾ
	(5)���ݴ�ȡ
		d1.at(i)
		d1[i]
		d1.fornt()  ���ص�һ������ 
		d1.back()   �������һ������
	(6)����
		d1.insert(iterator it,int m)  ��m������it(������)λ�� 
		d1.insert(iterator it,int n,int m)  ��n��m������it(������)λ�� 
		d1.insert(iterator it,beg,end) ��itλ�ò���[beg,end)�����Ԫ��
	(7)ɾ��
		d1.clear() ȫ�����
		d1.erase(iterator it) ɾ��itλ�õ����� ������һ�����ݵ�λ�� 
		d1.erase(iterator it1,iterase it2) ɾ�� [it1,it2)��Ԫ��	  ������һ�����ݵ�λ�� 
*/
int main(){
	return 0;
} 
