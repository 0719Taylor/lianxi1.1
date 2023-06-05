#define _CRT_SECURE_NO_WARNINGS 1

//包含一个叫stdio.h的文件
//std--标准 standard input output
#include <stdio.h>		


int a = 100;//全局变量
int main()
{
	int a = 10;//局部变量   当局部变量和全局变量的名字重复时，局部变量的优先级大于全局变量
	printf("%d\n",a);
	return 0;
}

















//int main()
//{
//	short age = 20;//向内存申请2个字节=16bit位，用来存放20
//	float weight = 95.6f;//向内存申请4个字节，存放小数
//	printf("%d\n",sizeof(char));   //1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}
















//
//int main()          //主函数-程序的入口-main函数有且只有一个
//{
//	printf("hehe");//printf--pirnt function--打印函数
//	return 0;
//}


//int 是整型的意思
//main前面的int表示main函数调用返回一个整型值
//int main()
//{
//
//	return 0;
//}