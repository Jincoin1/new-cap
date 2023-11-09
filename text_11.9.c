
#include <stdio.h>
#include <stdlib.h>
//char * my_strcpy(char* dest, const char* src)
//
//int main()
//{
//	char (*pf)(char*,char*) = my_strcpy;
//	char (*pfArr[4])(char*,char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };
//	printf("%s\n", pfArr[4]('w', 'f'));
//	printf("%s\n", pf);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x / y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int main()
//{
//
//	int (*parr[3])(int, int) = { Add,Sub, Mul };
//	int (*p)(int, int) = Add;
//	int i = 0;
//	for (i = 0; i < 3; i++) 
//	{
//		printf("%2d\t", (*parr[i])(6, 2)); //8,3,12;
//	}
//	printf("%d\t", p(6,2));//8
//	return 0;
//void test1(int* stc)
//{
//	printf("%d\n", (*stc));
//}
//void test2(char* stc)
//{
//	printf("%c\n", (*stc));
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}
#include <stdio.h>
int main()
{
	char arr[6] = "abcdef";
	int* p = arr;
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < 6; i++) {
		printf("%c\t", p[i]);
	}return 0;
}//
///出现了问题    Segmentation fault (core dumped)///
