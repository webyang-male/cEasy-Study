#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//strncmp - 字符串比较
//	const char* p1 = "abczdef";
//	char* p2 =       "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	
//	return 0;
//}


//int main()
//{
//	char *p1 = "abcdefabcdef";
//	char *p2 = "def";//输出defabcdef,即第一次匹配出现的地址
//	char* ret = strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("字符串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

#include <assert.h>
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);//断言目标字符串不能为空
//	assert(p2 != NULL);//断言源字符串不能为空
//	char *s1 = NULL;
//	char *s2 = NULL;
//	char *cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		//判断源字符串是否为空,如果为空则返回目标字符串
//		return (char*)p1;//return值可自定义
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		if (*s1 == '\0')//目标字符串寻找完成,但未找到
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//
//int main()
//{
//	char *p1 = "abcccdcdef";//目标字符串
//	char *p2 = "ccd";//源字符串
//
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//


//int main()
//{
//	//192.168.31.121   .
//	//192 168 31 121 - strtok
//	//zpw@bitedu.tech   @.
//	//zpw bitedu tech - strtok
//	
//	char arr[] = "zpw@bitedu.tech";
//	char*p = "@.";
//
//	//点分十进制的表示方式
//	//char arr[] = "123@234.@234";
//	//char*p = ".@";
//
//	//buf中存储的字符串:zpw\0bitedu.tech
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	////切割buf中的字符串
//	//char*ret = strtok(arr, p);
//	//printf("%s\n", ret);//zpw
//
//	////buf中存储的字符串:bitedu\0tech
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);//bitedu
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);//tech
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret=strtok(NULL, p))
//	{
//		printf("%s ", ret);
//	}
//
//	return 0;
//}

#include <errno.h>
//int main()
//{
//	//错误码  错误信息
//	//0 -     No error
//	//1 -     Operation not permitted
//	//2 -     No such file or directory
//	//...
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//
//	//char*str = strerror(0);
//	//printf("%s\n", str);
//
//	//char*str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");//r-read 只读
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");//同一工程文件目录下新建这个文件就会输出这个
//	}
//
//	return 0;
//}

#include <ctype.h>

//int main()
//{
//	//char ch = '2';
//	////int ret = islower(ch);
//	//int ret = isdigit(ch);
//	//printf("%d\n", ret);
//
//	//char ch = tolower('q');
//	//char ch = toupper('q');
//	//putchar(ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5};
//	int arr2[5] = { 0 };
//
//	struct S arr3[] = { { "张三", 20 }, { "李四", 30 } };
//	struct S arr4[3] = {0};
//	memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}

struct S
{
	char name[20];
	int age;
};

//const void* src 源数据保护不可修改
void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}

	return ret;
}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5};
//	int arr2[5] = { 0 };
//
//	struct S arr3[] = { { "张三", 20 }, { "李四", 30 } };
//	struct S arr4[3] = {0};
//
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}


//C语言标准：
//memcpy 只要处理 不重叠的内存拷贝就可以 - 60  - 100
//memmove 处理重叠内存的拷贝 - 100



//int  main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//my_memcpy(arr+2, arr, 20);//错误,存在内存重叠
//
//	my_memmove(arr + 2, arr, 20);//处理内存重叠的情况的
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


