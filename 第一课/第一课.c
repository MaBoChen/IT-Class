#define _CRT_SECURE_NO_WARNINGS

//第一个C语言程序

#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//数据类型

//int main()
//{
//	printf("%zu\n", sizeof(char));
//	//1
//	printf("%zu\n", sizeof(short));
//	//2
//	printf("%zu\n", sizeof(int));
//	//4
//	printf("%zu\n", sizeof(long));
//  //4
//	printf("%zu\n", sizeof(long long));
//	//8
//	printf("%zu\n", sizeof(float));
//	//4
//	printf("%zu\n", sizeof(double));
//	//8
//	return 0;
//}

//变量、常量
// 
//int main()
//{
//	int age = 20;
//	double price = 66.6;
//	return 0;
//}

//int b = 20;
// 
//int main()
//{
//	short age = 20;
//	int high = 180;
//	float weight = 88.5;
//	return 0;
//}

//全局，局部变量
//局部变量优先使用
// 
//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a=%d\n",a);
//	return 0;
//}

//变量使用——加法
// 
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = n1 + n2;
//	printf("%d\n", sum);
//	return 0;
//}

// 变量的作用域和生命周期
// 
//int main()
//{
//      {
//		int a = 100;
//	    printf("%d\n", a);
//      }
//
//	  printf("%d\n", a);//报错，局部变量应用不到全局
//	  return 0;
//}

//Ps:

//extern int a;
//void test()
//{
//	printf("test-->%d\n", a);
//}
//
//int main()
//{
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//
//	return 0;
//}