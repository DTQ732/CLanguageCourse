/*
* day01.c
	第一天，经典hello world!

	C语言中，以"#"号开头的语句，表面这是一个预处理指令，#include表示引入一个文件，又称包含一个文件，被包含的文件叫做头文件，一般以 ".h"结尾(header file)。
	对于include，可以理解为将该文件完整替换到include那一行。	还有其他预处理指令，后面再介绍。
	两个斜杠表示单行注释，不会对程序编译有任何影响，适当的注释可以提升程序可读性。  
*/
/* 以斜杠星号开始，型号斜杠结束的注释，可以跨多行的注释，也可以写在代码中间，但不能写在双引号之间 */
#include <stdio.h> // stdio.h 标准 输入输出(输入输出input & output简称io) 库头文件，里面声明了C语言标准委员会确定的io操作函数。键盘输入，屏幕输出。
/*
int main() // C程序总是以main函数开始，int表示返回给调用者的类型，main总是返回int值
{ // 一个语句块的开始，程序的开始
	printf("hello world!\n"); // 语句，printf表示将在窗口上输出引号内的内容，语句总是以分号结尾
	return 0; // return一个函数遇到return会直接结束，并把后面的东西返回给调用者，要与返回类型匹配
} // 程序结束
*/

// 整体代码
#include <stdio.h>
int main() 
{
	printf("hello world!\n"); 
	return 0;
}