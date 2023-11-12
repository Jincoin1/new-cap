#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stu
{
    char name[20];
    int age;
};


void Swap(char* buft1,char*buft2,int width)
{
    int i = 0;
    char ret= 0;
    for(i=0;i<width;i++)
    {
        ret = *buft1;
        *buft1 = *buft2;
        *buft2 = ret;
        *buft1++;
        *buft2++;

    }
}

void bobblu_sort(void* base, int sz , int width,int (*cmp)(const void*e1,const void*e2))
{
    int x=0;
    for(x=0;x<sz-1;x++)
    {
        int j =0;
        for(j=0;j<x-1-x;j++)
        {
            if(cmp((char*)base + j *width,(char*)base +(j+1)*width)>0){

            Swap((char*)base+j*width,((char*)base+(1+j)*width),width);
            }
        }
    }
}


int cmp_Stu_by_age(const void*e1, const void*e2)
{
    return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
    //return strcmp(((struct Stu*)e1)->age,((struct Stu*)e2)->age);
}
void text()
{
    struct Stu s[3] = {{"zhangshan",20} , {"lishia", 10},{"wangwu", 30 }};
    int sz  = sizeof(s)/sizeof(s[0]);
    qsort(s , sz , sizeof(s[0]) , cmp_Stu_by_age);
    int i = 0;
    for(i=0;i<sz;i++)
    {
        printf("%s\t", s[i].age);
    }    
    
}
int main()
{
    text(); 
    return 0;
}





