/*
	cout.flush() 刷新缓存区
	
	cou.put(char) 向缓存区写字符 -- 输出字符  存在链式反应
	cout.put('A').put('K')<<endl;  // AK 
	
	cout.write(string,string_len); //二进制流输出
	cout.write("hello world",strlen("hello world")) << endl;
	
	格式化输出
	int number = 10;
	cout.unsetf(ios::dec); //卸载默认的十进制输出方式 
	cout.setf(ios::showbase); //设置显示基数  Ox 16进制  O 八进制 
	cout.setf(ios::oct); //安装八进制输出格式
	cout<<number<<endl;  // O12  八进制 
	
	cout.unsetf(ios::oct);
	cout.setf(ios::hex);
	cout<<number<<endl; //十六进制
	
	cout.width(n) //设置输出位宽n位 //右对齐（） 
	int a = 25;
	cout<<a<<endl; //--------25 //默认为空格 此处-代表空格  
	cout.fill('*') //用*填充空位 //即上面显示为  //********25 
	
	cout.setf(ios::left)  //设置左对齐 即 // 25******** 
	cout.set(ios::right)  //右对齐 （默认）
	
通过控制符设置输出格式
	头文件 iomanip
		int number2 = 10;
		cout << hex  //16进制输出 
			 << setiosflags(ios::showbase)  //显示基 
			 << setw(10)    //设置宽度 
			 << setfill('*')  //设置填充符 
			 << setiosflags(ios::left)  //左对齐 
			 << numbers2
			 << endl;  //0xa*******
*/
