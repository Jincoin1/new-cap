//辗转相除法；
//求最大公约数；
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
}