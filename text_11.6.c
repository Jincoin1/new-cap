#include <stdio.h>
#include <stdlib.h>
/*
int cheak_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = cheak_sys();
	if (ret == 1) {
		printf("小端\n");
	}
	else{
		printf("大端\n");
	}
//	return 0;
//}
//
//
//int main()
//{
//    int i = 0;
//    for(i=1;i<10;i++){
//        int j = 0;
//        for(j=1;j<i;j++){
//            printf("%d*%d=%d\n",i,j,i*j);
//        }
//        printf("\n");
//    }
//    return 0;
//}
int my_strlen(char* arr, int sz)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < sz; i++) {
		if (arr[i] == '\0') {
			return count;
		}
		else {
			count++;
		}
	}
}
void print(int len)
{
	printf("%d\n", len);
}
int main()
{
	char arr[] = "abcdef";
	int sz = sizeof(arr) / sizeof(arr[0]);
	int len = my_strlen(arr,sz);
	print(len);
	return 0;
}
*/
int main()
{
    int a,b,c,max;
    printf("请输入三个数字:> ");
    scanf("%d %d %d",&a,&b,&c);
    max = a;
    if(max<b){
        max = b;
    }
    if(max<c){
        max = c;
    }
    printf("max=%d\n",max);
    return 0;
}