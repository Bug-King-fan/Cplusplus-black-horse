/*
	cout.flush() ˢ�»�����
	
	cou.put(char) �򻺴���д�ַ� -- ����ַ�  ������ʽ��Ӧ
	cout.put('A').put('K')<<endl;  // AK 
	
	cout.write(string,string_len); //�����������
	cout.write("hello world",strlen("hello world")) << endl;
	
	��ʽ�����
	int number = 10;
	cout.unsetf(ios::dec); //ж��Ĭ�ϵ�ʮ���������ʽ 
	cout.setf(ios::showbase); //������ʾ����  Ox 16����  O �˽��� 
	cout.setf(ios::oct); //��װ�˽��������ʽ
	cout<<number<<endl;  // O12  �˽��� 
	
	cout.unsetf(ios::oct);
	cout.setf(ios::hex);
	cout<<number<<endl; //ʮ������
	
	cout.width(n) //�������λ��nλ //�Ҷ��루�� 
	int a = 25;
	cout<<a<<endl; //--------25 //Ĭ��Ϊ�ո� �˴�-����ո�  
	cout.fill('*') //��*����λ //��������ʾΪ  //********25 
	
	cout.setf(ios::left)  //��������� �� // 25******** 
	cout.set(ios::right)  //�Ҷ��� ��Ĭ�ϣ�
	
ͨ�����Ʒ����������ʽ
	ͷ�ļ� iomanip
		int number2 = 10;
		cout << hex  //16������� 
			 << setiosflags(ios::showbase)  //��ʾ�� 
			 << setw(10)    //���ÿ�� 
			 << setfill('*')  //�������� 
			 << setiosflags(ios::left)  //����� 
			 << numbers2
			 << endl;  //0xa*******
*/
