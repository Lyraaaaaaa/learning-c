#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
    int *p = (int*)malloc(40);    //用malloc分配40byte的内存块
                                  //malloc返回的是void*类型指针
                                  // ➡️将malloc的返回值强制类型转换为int*➡️赋值给int*类型的指针变量p
    if (p == NULL)
    {
        printf("内存分配失败:%s\n",strerror(errno));  //用strerror函数获取具体错误信息
        return 1;                                   // 返回值为1➡️表示程序异常结束
    }
    int i=0;
    for (i=0;i<10;i++)
    {
        *(p+i)=i;    //用指针运算符*(p+i)来访问和赋值内存块中的元素
                     // 将0到9依次赋值给分配的内存块中的元素
    }
    for(i=0;i<10;i++)
    {
        printf("%d",*(p+i));  //用指针运算*(p+i)来访问内存块中的元素
    }
    free(p);              //用free函数释放动态分配的内存(以免出现内存泄漏)
    return 0;
}
