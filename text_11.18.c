#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int FindNum(int* arr[3][3], int k,int *px,int *py)
{
    int x= 0;//这个x是新创建的
    int y = *py-1;//这个y也是新创建的
    while(x <= *px-1 && y >= 0 )
    {
        if(arr[x][y] > k)
        {
            y--;

        }
        else if (arr[x][y] < k)
        {
            y++;
        }
        else
        //解引用来赋值x,y，实现调用地址同时返回改变后的值 ；
        *px = x;
        *py = y;
        return 1;
    }
}
int main ()
{
    int x = 3;
    //定义的row;
    int y = 3;
    //定义的col;
    int arr[3][3] = {{1,2,3,},{4,5,6,},{7,8,9}};
    int k =7;//要寻找数；


    //返回型参数
    int ret = FindNum(arr,k,&x,&y);
    
    if(ret == 1)
    {
        printf("找到了\n");
        printf("下标是：%d %d \n" , x , y);
    }
    else
        printf("找不到了\n");
    return 0;
}



int is_letf_move(char* str1, char* str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1 != len2)
    {

    }
    strncat(str1, str1, 6);
    printf("%s ",str1);
    printf("%s " ,str2);
    char* ret = strstr(str1, str2);
    return 0;
}


int main(void)
{
    char arr1[1000] = "abcdef";
    char arr2[] = "cdef";
    int ret = is_letf_move(arr1,arr2);
    if(ret == 1)
    {
        printf("");
    }
    else
    {
        printf("");
    }
    return 0;
}