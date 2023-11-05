#include <stdio.h>

void get_foot(int arr[], int n)
{
    int num;
    printf("输入一个数字：");
    scanf("%d", &num);
    int left = 0;
    int right = n - 1;
    int mid;
    
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == num)
         {
            printf("找到了下标为: %d\n", mid);
            break;
        } else if (arr[mid] > num)
         {
            right = mid - 1;
        } else 
        {
            left = mid + 1;
        }
    }
    if (left > right) {
        printf("找不到\n");
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    get_foot(arr, sz);
    return 0;
}
