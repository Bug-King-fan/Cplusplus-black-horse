#include<iostream>
#include<fstream> //�ļ���дͷ�ļ� 

using namespace std;

void test1(){
	string filename="E:\\����C++\\IO��\\source.txt";
	string filename2="E:\\����C++\\IO��\\target.txt";
	//���ַ������ļ��� 
	//ifstream ism(filename,ios::in);//ֻ����ʽ���ļ� 
	//ifstream д�ļ��� 
	ifstream ism;
	ism.open(filename,ios::in);
	//ostream ���ļ��� 
	ofstream osm(filename2,ios::out | ios::app);//ֻд��ʽ 
	//ios::appΪ����ģʽ���Ḳ��ԭ�м�¼ 
	
	if(!ism){
		cout<<"��ʧ��"<<endl;
		return ;
	}
	//���ļ�
	char ch;
	//����ַ���ȡ 
/*
	while(ism.get(ch)){
		cout<<ch;
		osm.put(ch); //��put���ַ�д�� 
	} 
*/
//���ȷ�ʽ�ѣ�  >>  << 
	string s;
	while(ism>>s){ //�Կո��س�Ϊ������־ 
		osm<<s<<endl; //������Ҫ��ӣ���������� 
	}
	//�ر��ļ�
	ism.close();
	osm.close();
	
}

//�������ļ����� 

class person{
	public:
		person(){
			
		}
		person(int age,int id):age(age),id(id){
			
		}
		void show(){
			cout<<"age"<<age<<" id"<<id<<endl;
		}
		private:
			int id;
			int age;
}; 

void test2(){
	
	person p1(10,20);
	person p2(30,40);
	//��p1 p2д���ļ���
	//p1 p2 �Զ�������ʽ�����ڴ��� ������
	string filename2="E:\\����C++\\IO��\\target.txt";
	ofstream osm(filename2,ios::out | ios::binary);
	//ios::binary �Զ����Ʒ�ʽ���ж�д
	osm.write((char*)&p1,sizeof(person));//�����Ʒ�ʽд�ļ� ����char*ģʽ����ַ
	//.write((char *)��ַ,�����С) 
	osm.write((char*)&p2,sizeof(person));
	osm.close();
	
	//���������ļ�
	ifstream ism(filename2,ios::in|ios::binary);
	person p3,p4;
	ism.read((char*)&p3,sizeof(person));//�ļ�������
	ism.read((char*)&p4,sizeof(person));
	//.read((char*)��ַ,Ҫ���Ĵ�С); 
	
}

//�ı�ģʽ ����>>��<<���ж�ȡд�� ������cin �� cout  
void test3(){
	/*
	ִ�д˳���֮ǰ�������ں͸ó���Դ�ļ�ͬĿ¼���ֶ�����һ�� in.txt �ļ����������ڲ��洢���ַ���Ϊ��
		10 20 30 40 50
	*/
	int x,sum=0;
    ifstream srcFile("in.txt", ios::in); //���ı�ģʽ��in.txt����
    if (!srcFile) { //��ʧ��
        cout << "error opening source file." << endl;
        return ;
    }
    ofstream destFile("out.txt", ios::out); //���ı�ģʽ��out.txt��д
    if (!destFile) {
        srcFile.close(); //�������ǰ�������ǹر���ǰ�򿪹����ļ�
        cout << "error opening destination file." << endl;
        return ;
    }
    //��������cin������ifstream����
    while (srcFile >> x) {
        sum += x;
        //������ cout ����ʹ�� ofstream ����
        destFile << x << " ";
    }
    cout << "sum��" << sum << endl;
    destFile.close();
    srcFile.close();
    return;
}

int main(){
	test1();
	//text2();
	return 0;
} 
