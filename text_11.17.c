#include <stdio.h>
#include <stdlib.h>
#include <string>
int main()
{
    char a[1000] = {0};
    int i =0;
    for(i=0;i<1000;i++)
    {
        a[i] = -1-i;                                                                                                                                                                                                                                                                                          

    }
    printf("%d",strlen(a));
    return 0;
}




#include <stdio.h>
#include <stdlib.h>
int main (void )
{
    int i =0;
    int j =0;
    for(i=0;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%2d " , i,j,i*j);
        }
        printf("\n");
    }


    return 0;

}