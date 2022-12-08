#include<stdio.h>

int main(){
	
	extern const int a;  //告诉编译器a在外部 去外部找a  
	printf("a= %d\n",a);
	
	system("pause");
	return 0;
}
