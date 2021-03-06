#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <assert.h>
#include <stdio.h>

//int main()
//{
//	// 1  2  1  2  3  4  5  8  9  10
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	//memmove可以胜任内存的重叠拷贝
//	memmove(arr3 + 2, arr3, 20);
//	//C语言标准：memcpy函数可以拷贝不重叠的就可以了
//	//当下发现：VS2013环境下的memcpy可以处理重叠拷贝
//	memcpy(arr3 + 2, arr3, 20);
//
//	return 0;
//}

////void* my_memcpy(void* dest, const void* src, size_t count)
////{
////	char* ret = dest;
////	assert(dest != NULL);
////	assert(src != NULL);
////
////	while (count--)
////	{
////		*(char*)dest = *(char*)src;
////		++(char*)dest;
////		++(char*)src;
////	}
////	return ret;
////}
//
//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//
//	return ret;
//}
//
//
//int main()
//{
//	//int arr1[] = { 1, 2, 3, 4, 5 };
//	//int arr2[10] = { 0 };
//	//arr1中的数字拷贝到arr2中
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//	// 1  2  1  2  3  4  5  8  9  10
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	my_memmove(arr3, arr3 + 2, 20);
//
//
//	//my_memcpy不能胜任重叠拷贝的
//	//my_memcpy(arr3+2, arr3, 20);
//
//	//memmove可以胜任内存的重叠拷贝
//	//memmove(arr3+2, arr3, 20);
//	//C语言标准说：memcpy函数可以拷贝不重叠的就可以了
//	//当下发现：VS2013环境下的memcpy可以处理重叠拷贝
//	//memcpy(arr3+2, arr3, 20);
//
//	return 0;
//}


//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00 ...
//	//01 00 00 00 02 00 00 00 05 00 00 00 ...
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//
//	int ret = memcmp(arr1, arr2, 9);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);
//
//	int arr[10] = { 0 };
//	//40 个字节
//	//01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 ...
//	memset(arr, 1, 10);//这里的10改的是10个字节
//
//	return 0;
//}


//声明一个结构体类型
//声明一个学生类型，是想过学生类型来创建学生变量（对象）
//描述学生：属性-名字+电话+性别+年龄

//struct Stu
//{
//	char name[20];//名字
//	char tele[12];//电话
//	char sex[10];//性别
//	int age;
//} s4,s5,s6;//全局变量
//
//struct Stu s3;//全局变量
//
//int main()
//{
//	//创建的结构体变量
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

////匿名结构体类型
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], *p;

//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;

//int main()
//{
//	psa = &sa;
//	return 0;
//}
//
//typedef struct Node
//{
//	double d;
//	int data;//4
//	struct Node* next;//4/8
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//
//	return 0;
//}

//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct S s = {'c', 100, 3.14, "hello bit"};
//	struct S s = { 'c', {55.6, 18}, 100, 3.14, "hello bit" };
//
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//
//	return 0;
//}