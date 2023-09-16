#include <stdio.h>

int main()//程序入口➡️计算n的阶乘
{
    int i=1;//向内存申请4byte空间i来存放1,1到n
    int n=0;
    int ret=1;
    scanf("%d",&n);

    for (i=1;i<=n;i++)//i循环
    {
        ret = ret * i;
    }
    printf("%d\n",ret);

    return 0;
}