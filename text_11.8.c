#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int arr[5] = {1,2,3,4,5};
    int*p =arr;
    int i =0;
    for(i=0;i<5;i++){
        printf("%d\t",*(p+i));
    }
    return 0;
}*/
void print1(int arr[3][5], int x, int y)
{
	int j = 0;
	int i = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}printf("\n");
	}
}
void print2(int (*p)[5], int x, int y)
{
	int j = 0;
	int i = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}
int main()
{
	int arr[4]= {1,2,3,4};
	int b = 3;
	int c = 54;
	int* pa[3] = { &arr,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("%p ", *(pa + i));
	}
	//printf("%p ", pa+i);
	printf("%p ", arr);
	return 0;
}
int main()
{
    int i =0 ;
    for(i=1;i<10;i++)
    {
        int j =0;
        for(j=1;j<i;j++)
        {
            printf("%d*%d=%2d ",i,j,i*j);
        }printf("\n");

    }return 0;
}
