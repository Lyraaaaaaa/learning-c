#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

int main()
{
    int *p=(int*)malloc(40);//用malloc函数动态分配40byte(10个int)的内存
                            //将返回的指针赋值给p
                            //malloc返回的是void*类型的指针➡️需要将其转换成int*类型的指针
                            //如果内存分配失败➡️malloc将返回NULL
    if(p==NULL)             //检查分配内存是否成功
    {
        printf("%s\n",strerror(errno));
        return 1;
    }
    int i ;
    for (i=0;i<10;i++)    //for循环用于将1到10存储在分配的内存块中
    {
        *(p+i)=i+1;       //用 *(p+i) 给对应位置赋值
    }
    int*ptr = realloc(p,80);  //用realloc函数重新分配先前分配的内存➡️将其大小增加到80byte(20个int)
                              //新分配的内存指针赋给ptr


    if(ptr != NULL)     //如果ptr的值不是 NULL➡️说明内存重新分配成功
    {
        p = ptr;        //将ptr的值赋给p➡️p指针将指向该新内存块
    }
    return 0;
}