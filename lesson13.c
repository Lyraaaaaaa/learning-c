#include <stdio.h>
int main()
{
    int i = 0;
    for (i=1;i<=10;i++)//i=0是初始化,i<=10是判断,i++是调整
    {
        if(i == 5)//若i等于5
            continue;//continue是跳出此次循环回到调整部分,所以打印的时候没有5

        printf("%d\n",i);//打印
    }
    return 0;
}
