#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int c=20;
    int * parr[10]={&a,&b,&c};//parr是指针数组➡️存放指针的数组

    int i ;
    for (i=0;i<3;i++)
    {
        printf("%d\n",*(parr[i]));//parr[i]里面是地址➡️通过*得到地址所指对象
    }
    return 0;
}
