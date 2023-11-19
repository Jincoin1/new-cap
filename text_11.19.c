/*写一个自定义函数my_strcop实现复制的函数功能；
指针的方式
*/

#include <stdio.h>
#include <assert.h>
#include <string.h>
char* my_strcoy(char*dest , const char* str)
{
     assert( dest != NULL);//断言指针
    assert (str != NULL);
    char* ret = dest;
    while(*dest++ = *str++)
    {
        ;
    }
    return dest;//返回地址
}
int main()
{
    char arr1[]="abcdef";
    char arr2[]="bint";

    my_strcop(arr1 , arr2);
    printf("%s \n",arr1);
    return 0;
}


#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strcop(char* dest , char*str)
{
    if( *str == '\0')
    {
        *dest  = '\0';
        return dest ;
    }
    *dest = *str;
    my_strcop(dest++ , str++);

}


int main()
{
    char arr1[] = "abcdef";
    char arr2[] = "bint";
    my_strcop(arr1,arr2);
    printf("%s ",arr1);
    return 0;
}
 