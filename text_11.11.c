#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 1
//
//int cmp_sz(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//    int arr[] = { 9,2,3,6,4,8};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int x = 0;
//    for (x = 0; x < sz; x++) {
//        printf("%d\t", arr[x]);
//    }
//    printf("\n");
//    qsort(arr, sz, sizeof(arr[0]), cmp_sz);
//    int i = 0;
//    for (i = 0; i < sz; i++) {
//        printf("%d\t", arr[i]);
//    }
////}
////int main()
////{
////    test1();
////    return 0;
////}
//struct Stu {
//    char ch[20];
//    int age;
//};
//
////
////int cmp_Stu_by_age(const void* e1, const void* e2)
////{
////  return  ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
////}
////void test2()
////{
////    struct Stu s[3] = { {"zhangshan",20},{"lishi", 30},{"wangwu" , 10} };
////    int sz = sizeof(s) / sizeof(s[0]);
////    qsort(s, sz, sizeof(s[0]), cmp_Stu_by_age);
////    int i = 0;
////    for (i = 0; i < sz; i++) {
////        printf("%d\t", s[i].age);
////    }
////}
////int main()
////{
////    test2();
////    return 0;
////}
////
//
//
//
//
//int cmp_Stu_by_name(const void* e1, const void* e2)
//{
//    return strcmp(((struct Stu*)e1)->ch, ((struct Stu*)e2)->ch);
//}
//void test3()
//{
//    struct Stu s[3] = { {"zhangshan" ,20},{"lishi", 30},{"wangwu" , 10}};
//    int sz = sizeof(s) / sizeof(s[0]);
//    qsort(s, sz, sizeof(s[0]), cmp_Stu_by_name);
//    int i = 0;
//    for (i = 0; i < sz; i++) {
//        printf("%s\t", s[i].ch);
//    }
//}
//int main()
//{
//    test3();
//    return 0;
//}
//
//


void Swap(char* num1, char* num2, int width)
{
    int i = 0;
    char ret = 0;
    for (i = 0; i < width; i++) {
        ret = *num1;
        *num1 = *num2;
        *num2 = ret;
        *num1++;
        *num2++;
    }
}





void bobblu_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
    int f = 0;
    for (f = 0; f < sz - 1; f++)
    {
        int j = 0;
        for (j = 0; j < sz - 1 - f; j++) {
            if (cmp((char*)base + j * width, (char*)base + 1 + j * width > 0)) {
                Swap((char*)base + j * width, ((char*)base + (1 + j )* width),width);
            }
        }
    }
}



int cmp_int(const void* e1, const void* e2)
{
    return  *((int*)e1) - *((int*)e2);
}
void test5() 
{
    int arr[] = { 9,7,5,3,2,1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    bobblu_sort(arr, sz, sizeof(arr[0]), cmp_int);
    int x = 0;
    for (x = 0; x < sz; x++) {
        printf("%d\t", arr[x]);
    }
}
int main()
{
    test5();
    printf("\n");
    return 0;
}
