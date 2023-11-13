#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
void reserves(char* str)
{
    assert (str);
    int len = strlen(str);
    char *left = str;
    char *right = str + len - 1;
    while(left<right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}
int main()
{
    char arr[300] = {0};
    printf("请输入：");
    scanf("%s",arr);
    reserves(arr);
    printf("逆序结果：%s\n",arr);
    return 0;
}