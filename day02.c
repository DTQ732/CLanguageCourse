#if 0 // ���Ҫ���и��ļ�����0��Ϊ1�����������ļ���1������У�����Ϊ0

#include <stdio.h> // ��׼ioͷ�ļ���day01.c

int main() // ����ʼ
{
	int num; // ����һ������
	num = 1; // ��ֵ��䣬��1��ֵ��num
	printf("I am a simple "); // ����Ļ����� I am a simple 
	printf("computer.\n"); // ������I am a simple�����computer. Ȼ���� \n��Ϊ�س����С�
	// �Է�б�� "\" ��ͷ�ı�ʾת���ַ�����ʾ�����ַ�Ҫ��ת����������塣
	// ����Ҫ��ӡ������(�����޷����룬��Ļ�޷���ʾ)�������ַ�ʱʹ��ת���ַ���
	printf("My favorite number is %d because it is first.\n", num); // ��ӡ��䣬����"%d"���滻Ϊnum��ֵ
	return 0; // ����0����ʱ���Ϊmain������return 0; ����
}

#endif