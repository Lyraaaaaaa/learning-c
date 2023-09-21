#include <stdio.h>
//用函数的递归➡️接收一个无符号整型值,按照顺序打印每一位

void print(unsigned int n)//定义名为print的无返回值函数
{
    if (n>9)
    {
        print(n/10);
    }
    printf("%d",n%10);
}

int main()
{
    unsigned int num=0;
    scanf("%u",&num);

    print(num);        //函数调用语句,将num作为参数传递给函数print

    return 0;
}

