/*
I/O�����������ͣ�fstream(��������ļ���)��ifstream(�����ļ���)��ofstream(����ļ���)
ע�⣺ifstream��������ظ�ʹ�ã�����ʹ��ǰ�ȵ���clear��������������
*/
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char buffer[50];
	fstream out;  //����out����
	//void open(const char* filename, openmode_mode_1 | openmode_mode_2 | ..... | openmode_mode_n);
	/*
		ios::in     Ϊ����(��)�����ļ�
		ios::out    Ϊ���(д)�����ļ�
		ios::ate    ��ʼλ�ã��ļ�β
		ios::app    ��������������ļ�ĩβ
		ios::trunc  ����ļ��Ѵ�������ɾ�����ļ�
		ios::binary �����Ʒ�ʽ
	*/
//	out.open("E://����C++//C++�����ļ�//I��O���ļ���д//test.txt", ios::in);  //���ļ�text.txt  ios::in  ��ʾֻ��	
	out.open("test", ios::in);

	cout << "test.txt ���ݣ�" << endl;
	if (out.is_open()) {
		while (!out.eof()) {  // .eof()  : �ļ�����
			out.getline(buffer, 50, '\n');
			//getline(char * arry,int n,[char m]) ��ʾ���У�һ�У��ַ��ﵽn���������ַ�m
			//ע�⣺nһ��Ҫ����arry��[]�е����������㹻�Ļ�����
			cout << buffer << endl;
		}
	
		cout << "�򿪳ɹ���\n";
	}
	else
		cout << "δ��!\n";
	out.close();
	//cin.get();//��ȡ�س�����û�еĻ�����һ������������system("pause")���
	system("pause");
}
