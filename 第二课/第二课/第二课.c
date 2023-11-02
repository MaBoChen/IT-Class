#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//const int a = 10;
//	////a = 20;//a是已经被锁定的常变量
//	//printf("%d\n", a);
//
//	//const int n=10;
//	//int arr[10] = {0};//arr[]内必须是常量值，常变量与常量不一样
//
//	//return 0;
//}

//#define MAX 100
//#define STR "abcdef"
//
//int main()
//{
//	//printf("%d\n", MAX);
//	//int a = MAX;
//	//printf("%d\n", a);
//	//printf("%s\n", STR);
//	//MAX = 200;//err
//
//	return 0;
//}

// enum Color
//{
//	//枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//
////性别
//enum Sex
//{
//	//枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};

//Ps.
//int main()
//{
//	int num = 10;
//	enum Color c = RED;
//	return 0;
//}

#include <string.h>

//int main()
//{
//	char ch = 'w';
//	char arr1[] = "abcdef";//字符串默认最后有\0结束符
//	char arr2[] = { 'a','b','c','d','e','f','\0' };
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//求字符串长度的一个函数，string length-->strlen,要包含头文件 string.h
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	printf("abc\0def");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//创建指针变量p，并赋值为NULL
//	int* p = NULL;
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("写代码：%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//
//	return 0;
//}
