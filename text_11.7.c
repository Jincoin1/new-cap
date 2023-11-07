#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int i,x,j;
    int max =0;
    printf("请输入三个数字：");
    scanf("%d %d %d",&i,&j,&x);
    int max = i;
    if(max<j){
        max = j;
    }
    if(max<x){
        max = x;
    }
    printf("最大数：%d\n",max);
    return 0;
}
*/
#include <Windows.h>
int main()
{
    printf("I");
    SleepEx(1500,TRUE);
    printf("am");
    SleepEx(1500,TRUE);
    printf("king");
    return 0;
}
//int main()
//{
//    char arr[] = "abcdfe";
//    int* p = arr;
//    printf("%s", p);
//    return 0;
//}
//int main()
//{
//	char arr[] = "abdcef";
//	printf("%p\n", arr);
//	printf("%c\n", arr[0]);
//	printf("%p\n", &arr);
//	return 0;
//}
void Binary_Search(int L,int R,int k,int*arr)
{
	while (1)
	{
		int mid = (L + R) / 2;
		if (arr[mid] > k) {
			R = mid - 1;
		}
		else if (arr[mid] < k) {
			L = mid + 1;
		}
		else {
			printf("找到了= %d\n", mid);
			break;
		}
	}

		if (L > R)
		{
			printf("错误\n");
		}
	
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 6;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	Binary_Search(left, right,k,arr);
	return 0;
	
}
//void buy(int* arr)
//{
//	int m = 3;
//	printf("%d\n", arr[m]);
//}
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	buy(arr);
//	return 0;
//}