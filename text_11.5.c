//辗转相除法；
//求最大公约数；
/*
int my_division(int num1, int num2) {
    int ret = 0;
    while (num1 % num2)
    {
        ret = num1 % num2;
        num1 = num2;
        num2 = ret;
    }
    return num2;
}
#include <stdio.h>
int main()
{
    int m = 0;
    int i = 0;
    printf("请输入两个数字：");
    scanf("%d %d", &m,&i);
    if (m < i) {
      int ahead = m^(m ^ i);
      int before = i^(m ^ i);
      printf("最大公约数= %d\n", my_division(ahead, before));
    }
    else {
        printf("最大公约数= %d\n", my_division(m, i));
    }return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*试除法求素数个数求100-200中的*/
int main()
{
    int i = 0;
    int count = 0;//素数个数
    for (i = 101; i <= 200; i += 2)
 {
    int j = 0;
    for (j = 2; j < sqrt(i); j++)
    {
        if (i % j == 0) {
            break;
        }
    }
    if (j > sqrt(i)) {
        count++;
        printf("%d ", i);
    }
 }
    printf("count = %d\n",count);
    return 0;
}
