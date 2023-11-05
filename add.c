#include <stdio.h>
/*int main()
{
    int i = 0;
    int sum = 0 ;
    while (i<=100)
    {  
        i++;
        sium += i; 
    }
    printf ("sum = %d\n");
    return 0;    
}
int main()
{
    int num = 1;
    int date = 0;
    while(date<10)
    {
        printf("第%d天所,剩桃子个数%d个\n",10-date , num);
        date += 1 ;
        num = (num + 1) * 2 ;
    }
    printf("猴子第一天摘了%d个桃子\n", num);

 return 0;   
}
int main()
{
    int i = 0;
    int count = 0;
    do
    {
        printf("hello world\n");
        count++;
    } while (i<5 && count < 50);
        printf("count=%d\n" , count);
    return 0;
}
int main()
{
    int i = 0;
    int sum = 0;
    for(i = 1 ; i<=100 ; i++)
    {
        sum += i ;
    }
    printf("sum = %d\n", sum);
    return 0;
}
int main()
{
    int i = 0;
    int g = 0;
    int t = 0;
    int h = 0;
    for(i=100;i<1000;i++)
    {
        g  = i % 10;    //个位*个位*个位
        t  = i /10 % 10;//十位*十位*十位
        h  = i/100; //百位*百位*百位
    
    if(g*g*g + t*t*t + h*h*h == i)
        {
        printf("%d\n", i );
        }
    }
 return 0;
}
int main()
{
    int i = 1;  //初始月份1月 
    int sum_date = 0;//总天数
    int moth_2 = 0;//二月份呢的天数
    int moth_date = 0;//月份的天数

    int year;
    int moth;
    int date;
again: printf("请输入一个时期：");
    scanf("%d-%d-%d", &year,&moth,&date);
    if(year %4 == 0 && year %100 != 0 || year %400 !=0)
    {
        moth_2 = 28;//平年的天数
    }
    else
    {
        moth_2 = 29;//闰年的天数
    }
if(moth>12)
    goto again;
else
    {
        while(i<moth)
        {
        switch(i)
        {
            case 1:   moth_date += 31; break;
            case 3:   moth_date += 31; break;
            case 5:   moth_date += 31; break;
            case 7:   moth_date += 31; break;
            case 8:   moth_date += 31; break;
            case 10:  moth_date += 31; break;
            case 12:  moth_date += 31; break;
            case 2:
                      moth_date += moth_2;
            break;
            case 4:   moth_date += 30;          
            break;
            case 6:   moth_date += 30;
            break;
            case 9:   moth_date += 30;      
            break;
            case 11:  moth_date += 30;
            break;
        }
        i++;
        }
       if(moth == i)
        {
            if(date<31)
            {
              date = date;
            }
            else
            {
                date = 31;
            }
            
        }
    }
    sum_date = date + moth_date;
    printf("天数是%d天\n", sum_date); 
    return 0;
}
int main()
{
    int arr[10] = {0};
    int *p = arr;
    int i;
    for( i = 0; i < 10; i++)
    {
        *(p+i) = 1;
    }
    return 0;
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = &arr;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    for(i = 1; i <= sz ; i++)
    {
        printf("%d ", *p);
        p++; 

    }return 0;
}
int my_strele(char *str)
{
    char* start = str;
    char* end = str;
    while(*end != '\0')
    {
        end++;
    }
    return end - start;
    
}
int main()
{
    char arr[] = "bit"; 
    int len = my_strele(arr);
    printf("%d\n", len);
    return 0;
}
int main()
{
    int arr[10] = {0};
    int i = 0;
    int *p = arr;
    for (i=0;i<10;i++)
    {
        *(p+i) = i;
        //printf("%d " , *(p+i));
    }
    for(i=0;i<10;i++)
    {
        printf("%d " , *(p+i));
    }
    return 0;
}
#include <stdlib.h>
int main()
{
    int num[100] = {0};
    int i;
    while(1)
    {
        for(i = 0; i< 100; i++)
        {
            if(num[1]>10)
            {
                printf("%s", num[i] % 2 ?????" : "天天开心");
            }
            else
            printf("   ");
            if(num[i]-- < 0)
                num[i] = rand() % 20;

        }
    }   system("color 2");
        printf("/n");
        return 0;
}

int main()
{
    int n;
    for(n=3;n<=100;n++)
    {
        if( n % 2 == 0)
        {
            printf("%d ", n);
        }
    } 
    printf("\n");   
    return 0 ;
}

int main()
{
    printf("以下是1-1000中出现的完美数: \n");
    int sum = 0;
    int num = 0;
    int j = 0;
    for(num = 1; num <= 1000; num++)
{  
        sum = 0;
        for(j = 1; j < num; j++)
        {
        if(num % j == 0)
            {
                sum += j;
            } 
        }
        if(sum == num)
        {
            printf("%d 是完美数\n", num); 
        }  
}      
    return 0;
}
#include <math.h>
int my_sunumber(int n)
{
    int j;
    for(j = 2; j < sqrt(n); j++)
    {
        if(n % j == 0)
        return 0;
    }
    return 1;
}
int main()
{
    int i = 0;
    for(i = 3; i <= 100; i++)
    {
        if(my_sunumber(i))
        printf("%d", i);
    }
    printf("%d", i);
    return 0;
}
void Init(int arr[] , int sz)
{
    int i;
    for (i = 0; i < sz; i++)
    arr[i] = 0;
}
int Print(int arr[], int sz)
{
    int i;
    for (i= 0; i < sz; i++)
    {
        printf("%2d ", arr[i]);
    }
    printf("\n");
}
void Reserve(int arr[], int sz）//交换数字的函数
{
    int right = sz - 1;
    int left = 0;
    while(left < right)
    {
        int tem = arr[left];
        arr[left] = arr[right];
        arr[right] = tem;
        left++;
        right--;
    }
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);
    //Init(arr, sz);
    Print(arr, sz);
    Reserve(arr, sz);//定义来交换数字的函数；
    Print(arr, sz);
    return 0;
}
int main()
{
    int j = 0;
    int i = 0;
    for(i = 1;i < 10;i++)
    {
        for( j = 1; j <= i; j++)
        {
            printf("%2d*%d=%2d", j, i, j*i);
        }
    }
    return 0 ;
}

int main()
{
    int m;
    int j;
    for(m = 1; m<10; m++)
    {
        for(j=1; j<m; j++)
        {
            printf("%d*%d=%d", m,j ,m*j );
        }
    }printf("\n");
    return 0;
}
//#include <stdio.h>
int main()
{
    int i = 0;
    int j = 0;
    int count = 0;
    printf("质数有：\n");
    for (i=3 ; i<=100; i++)//从3开始累加到100；
    {
        //在【2——i-1】中存在能把i整除的都不是素数；
        for(j =2 ; j < i; j++)//写一个2到100的数字用来找素数
        {
            if(i%j == 0)
            break;
        //上面的for循环有两种结束条件
		//1.由于 j==i 循环正常结束
		//2.由于break导致的退出，此种退出是  j一定是小于i的
        }
        if(i==j)
       {
        count++; 
        printf("%d\n", i);
       }
    }
       printf("count=%d\n", count);
    return 0;
}
int main()
{
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
   int max = arr[0];
   int sz = sizeof(arr)/sizeof(arr[0]);
   int i;
   for(i = 0; i < sz; i++)
   {
    if( arr[i] > max)
    {
        max = arr[i];
    } 
   } 
    printf("%d", max, i);
    return 0;
}

int count_num(int n)
{
    int count = 0;
    while (n)//当n=0时则为假跳出循环。
    {   
        n = n & (n-1);
    //每次&都会在该数字二进制中最右边少一个1；
    //直到n=0；
        count++;//能&几次就还有个1；
    }
    return count;//返回计入的1的个数。
}
int main()
{
    printf("输入1个整数:");
    int a = 0;
    //int m = 0;
    scanf("%d",&a);
    int count = count_num(a);
    printf("%d", count);
    return 0;
}
void print(int n  )
{
    int i;
    printf("奇数位：\n");
    for(i = 30; i >= 0 ; i-=2)
    //奇数32位中从2^0开始
    //到最后一位奇数（31）的前一位（30）
    {
    printf("%d", (n >> i) & 1);
    //二进制位右移& 1 得出
    }printf("\n");
    printf("偶数位: \n");
    for( i=31;i>=1;i-=2)
    {
        printf("%d",(n >> i) & 1);
    }printf("\n");
}
int main()
{
    int a = 0;
    printf("请输入一个整数：");
    scanf("%d", &a);
   // int m = 0;
    print(a);
    return 0;
}
    int main()
    {
        int i;
        int arr[10] = {1,3,6,8,4,9};
        int max = arr[0];//先让max赋值第一个数；通过比较不断赋值
        int sz = sizeof(arr)/sizeof(arr[0]);
        for(i=0;i<sz ;i++)
        {
            if(arr[i]>max)
            {
                max = arr[i]; 
            }
        }printf("max = %d , 小标: %d\n" , max,i);
        return 0;
    }
/////  1 1 2 3 5 8 13 21///

int main()
{
    int i = 0;
    int s[20] = {1,1};//不完全初始化 没有初始化的位 默认用0初始化
    //循环给数组赋值 注：不要越界
    for(i=0;i<18;i++)
    {
        s[i+2] = s[i] + s[i+1];
    }//输出数组的值
        for(i=0;i<20;i++)
        {
            printf("%d ",s[i]);   
        }
    printf("\n");
    return 0;
}

void printf(int *p,int sz)
{
    int i =0;
    for(i=0;i<sz;i++)
    {
        printf("%d " ,*(p+i));
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int sz = sizeof(arr)/sizeof(arr[0]);
    printf(arr , sz);
    return 0;
}
void print(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%d ",i,j,i*j);
        }printf("\n");
    }
}
int main()
{
    int i= 0;
    printf("请输入一个整数： ");
    scanf("%d",&i);
    print(i);
    return 0;
}
int my_strlen(char*str)
{
    int count = 0;
    while(*str !='\0'){
        count++;
        str++;
    }return count;
}
reverse_string(char *arr)
{
    char tmp = arr[0];//用来存放数组中数字（一开始是首元素）
    int len = my_strlen(arr);//计算数组的长度
    arr[0] = arr[len-1];//先空出一个位置来放\0
    arr[len-1] = '\0';
    if(my_strlen(arr+1)>=2)//从第二个元素开始计算字符串的长度；
    {
        reverse_string(arr+1);//递归使用
    }
    arr[len-1] = tmp;//最后赋值换位
}
int main()
{
    char arr[] ="abcdef";
    reverse_string(arr);
    printf("%s\n",arr);
    return 0;
}
int DigitSum(unsigned int num)
{
    if(num>9)
    {
        return  DigitSum(num/10) + num % 10;
    }
    else
    return num;
}
int main()
{
    unsigned int num = 0;
    scanf("%d",&num);
    int ret = DigitSum(num);
    printf("%d\n",ret);
    return 0;
}
double Pow(int n,int k)
{
    if(k<0)
    {
        return (1.0/Pow(n,-k));
    }
    else if(k==0)
    {
        return 1;
    }
    else 
    return n*Pow(n,k-1);
}
int main()
{
    int n = 0;
    int k = 0;
    printf("请输入： ");
    scanf("%d %d",&n,&k);
    double ret = Pow(n,k);
    printf("%lf\n",ret);
    return 0;
}
int main()
{
    int k = 7;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = sz -1;
    while(left<=right)
    {
        int mid = (left + right)/2;
        if(arr[mid]>k)
        {
            right = mid -1;
        }
        else if(arr[mid]<k)
        {
            left = mid +1;
        }
        else{
            printf("找到了下标是： %d\n",mid);
            break;
        }
    }
    if(left>right){
        printf("erro\n");
    }
    return 0;
}*/
#include <string.h>
int main()
{
    int i= 0;
    char password[20] = {0};
    for(i=0;i<3;i++)
    {
       printf("请输密码:> ",password);
        scanf("%s",password);
        if(strcmp(password,"123456") == 0)
        {
            printf("登入成功\n");
            break;
        }
        else
        printf("密码错误\n");
    }
    if(i==3)
        printf("密码错误\n");
        
    return 0;
}