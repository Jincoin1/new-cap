#include <stdio.h>
#include <stdlib.h>
int main()

{
    int i = 0;
    int line = 0;
    scanf("%d",&line);
    for(i=0;i<line;i++){
        int j =0;
        for(j=0;j<line-1-i;j++){
            printf(" ");
        }
        for(j=0;j<2*i+1;j++){
            printf("*");
        }printf("\n");
    }
    for(i=0;i<line-1;i++)
    {
        int j =0;
        for(j=0;j<=i;j++){
            printf(" ");
        }
        for(j=0;j<2*(line-1-i)-1;j++)
        {
            printf("*");
        }printf("\n");
    }

    return 0;
}

//交换函数
void move(int*arr , int sz)
{
    int left = 0; //左边
    int right = sz-1;//右边
    while(left<right)//满足左边小于右边进入循环
    {
    //左边找偶数数字；%2余1则跳过进行left++
    while(left<right && arr[left]%2==1){
        left++;
    }
    //右边（就是从后面）找奇数，%2余0跳过进行right--
    while(left<right && arr[right]%2==0){
        right--;
    }
    //定义变量，进行交换数值；
    int tmp = arr[left];
    arr[left] = arr[right];
    arr[right] = tmp;
    }
}
void print(int*arr , int sz)
{
    int i =0;
    for(i=0;i<sz;i++)
    {
    printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[]={1,2,3,4,6,7,8,9};
    int sz = sizeof(arr)/sizeof(arr[0]);
    move(arr,sz);
    print(arr , sz);
    printf("\n");
    return 0;






}