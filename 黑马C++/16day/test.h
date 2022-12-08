#pragma once  //防止头文件重复编译

//解决C++中调用C的代码  出现外部地址无法解析时再使用 
#ifdef  __cplusplus //两个 _ 
extern "C" {
#endid  
//之间所有C的函数/代码 都可以用C的方式链接 

#include<stdio.h>
void show();


#ifndef  __cplusplus //两个 _ 
}
#endid  
