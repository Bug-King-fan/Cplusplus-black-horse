#include<iostream>
using namespace std;

/*
	ö�٣��Զ�����������͡�
	enum ö����{
		ö��ֵ����  //�޷ֺ�
	};
	
	ö��ֵ�����ʽ��
		��ʶ��1,��ʶ��2,��ʶ��3,������,��ʶ��n

	ö��Ԫ����Ϊ���������г�ʼֵ��
	enum ö����{
		��ʶ��1 [ = ֵ ],
		��ʶ��2 [ = ֵ ],
		��ʶ��3 [ = ֵ ],
		��ʶ��... [ = ֵ ],
		��ʶ��n [ = ֵ ]
	};
*/

enum city {
	shanghai,    //0
	beijing,     //1
	nanjing,     //2
 
	tianjing=5,  //5
	guangzhou    //6
};

void ff(enum city x) {
	switch (x) {
	case 0: cout << "�Ϻ�" << endl; break;
	case 1: cout << "����" << endl; break;
	case 2: cout << "�Ͼ�" << endl; break;
	case 5: cout << "���" << endl; break;
	case 6: cout << "����" << endl; break;
	default: cout << "�Ƿ�����" << endl;
	}
}

void test1() {
	enum city c1, c2, c3, c4, c5;
	int i = 7;
	c1 = (enum city)i;//ǿתö����
	c2 = nanjing;
	c3 = (enum city)5;
	c4 = shanghai;
	c5 = guangzhou;

	ff(c1);
	ff(c2);
	ff(c3);
	ff(c4);
	ff(c5);
	cout << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << endl;
}

int main() {

	test1();

	system("pause");
	return 0;
}