#include<iostream>
#include<vector>
using namespace std;
int main(){
	/*  vector��������̬��
	
		�ռ�Ҫ��չʱ��������һ�����ʵĿռ��ַ���ٰ�ԭ�������ݸ��ƹ�ȥ
		��ַǰ�����ı� 

	vector<int>v;  ���� 
	v.push_back(i);  //β�� 
	v1.pop_back()   βɾ 
	v.capacity()  �鿴���� ��չ����/������֪�� 
	vector<int>v2(v1.begin(),v1.end())
	vector<int>v2(n,m);  ��ʼ��Ϊn��m
	v1=v2  ��ֵ 
	v2.assign(v1.bedin(),v1.end()) ��ֵ
	v2.assign(n,m)  ����ͬ v2(n,m) 
	v.swap(v2)  v��v2Ԫ�ؽ���
	����
		v1 : 1 2 3 4 5
		v2 : 2 5 9 7 
		v1.swap(v2);
		v1 : 2 5 9 7
		v2 : 1 2 3 4 5
	v1.size()  ͳ��Ԫ�ظ���
	v1.empty() �п� ��1 �ǿ�0
	v1.resize(int num)����ָ����������Ϊnum �ݱ䳤���Ĭ��ֵ����̳������ֱ�ɾ��
	v1.resize(int num,elem) ����ָ����������Ϊnum �ݱ䳤��elem��䣬��̳������ֱ�ɾ��
	v1.reserve(int len) Ԥ��len��Ԫ�س��ȣ�����ʼ����Ԫ�ز��ɷ��� 
	
	v1.at(i)  ��������Ϊi��ֵ 
	v1.front()  ���ص�һ��Ԫ��
	v1.back()  �������һ��Ԫ��
	v1.insert(iterator it,int m)  ��m������it(������)λ�� 
	v1.insert(iterator it,int n,int m)  ��n��m������it(������)λ��
	����
		v1 = 1 2 3 4 5 
		v1.insert(v1.begin+1,50);
		v1 = 1 50 2 3 4 5 
	v1.erase(iterator it) ɾ��itλ�õ����� ������һ�����ݵ�λ�� 
	v1.erase(iterator it1,iterase it2) ɾ�� [it1,it2)��Ԫ�� ������һ�����ݵ�λ�� 
	v1.clear()����������� 
	*/
	return 0;	
	/*  swap������ 
	vector<int>v;
	for(int i=0;i<100000;i++){
		v.push_back(i);
	}
	cout<<v.capacity()<<endl;  // >100000
	cout<<v.size()<<endl;  //  100000
	
	v.resize(3);
	cout<<v.capacity()<<endl;  // >100000  �˷��˿ռ� 
 	cout<<v.size()<<endl;  //  3  
	
	//����swap
	vector<int>(v).swap(v); 
	cout<<v.capacity()<<endl;  // 3
 	cout<<v.size()<<endl;  //  3 
	*/
	
	/*�������  --��������� 
	vector<int>v{1,2,3,4,5,6,7,8,9}
	for(vector<int>::reverse_iterator it = v.rbegin(); it!=v.rend();i++){
		cout<<*it<<" ";
	}
	
	//vector��������������ʵ�����  ֧����Ծʽ����
	vector<int>::iterator itBegin() = v.begin();
	itBegin = itBegin + 3;
	//�������д�������������������������ʵ�����
	// �� list������iterator��������֧��������� 
	 
	*/
}
















