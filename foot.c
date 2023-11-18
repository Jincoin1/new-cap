#include <stdio.h>
#include <string.h>
int is_letf_move(char* str1, char* str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if(len1 != len2)
    {
        return 0;
    }
    //1. 在str1字符串中追加一个str1字符串
    strncat(str1, str1, 6);
    //2 判断str2指向的字符串是否是str1指向的字符串的子串；

    char* ret = strstr(str1, str2);
                //strstr-用来找子串的

    if(ret == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}


int main(void)
{
    char arr1[1000] = "abcdef";
    char arr2[] = "cdef";
    int ret = is_letf_move(arr1,arr2);
    if(ret == 1)
    {
        printf("YES");
    }
    else
    {
        printf("FALSE");
    }
    return 0;
}