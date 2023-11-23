#include <stdio.h>
#include <assert.h>

 void* my_memove(void* dest, void *src , size_t num)
{
    assert( dest && src);
    int ret = dest;
    if( dest < src)
    {
        //前->后
        while(num--)
        {
            *(char*)dest = *(char*)src;
            ++(char*)dest;     
            ++(char*)src;
        }return ret;

    }
    else
    {
        //后->前
        while(num--)
        {
            *((char*)dest + num) = *((char*)src + num); 
        }

    }return ret;
}


int main(void)
{
    int arr1[] = {1,2,3,4,5,6,7};
    int arr2[10] = {0};
    my_memove(arr1+3,arr1,sizeof(1));
    //my_memcpy不能胜任重叠拷贝；


    return 0;
}