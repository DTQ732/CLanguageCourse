#if 0 // 如果要运行该文件，把0改为1，并把其他文件的1（如果有），改为0

#include <stdio.h> // 标准io头文件，day01.c

int main() // 程序开始
{
	int num; // 声明一个变量
	num = 1; // 赋值语句，将1赋值给num
	printf("I am a simple "); // 在屏幕上输出 I am a simple 
	printf("computer.\n"); // 紧接着I am a simple后，输出computer. 然后换行 \n以为回车换行。
	// 以反斜杠 "\" 开头的表示转义字符，表示其后的字符要被转义成其他意义。
	// 当需要打印不可显(键盘无法输入，屏幕无法显示)的特殊字符时使用转义字符，
	printf("My favorite number is %d because it is first.\n", num); // 打印语句，并把"%d"，替换为num的值
	return 0; // 返回0，暂时理解为main必须以return 0; 结束
}

#endif