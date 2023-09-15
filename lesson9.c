#include <stdio.h>
//只打印数字字符
int main()//程序入口
{
    char ch = '\0';//向内存申请1byte的空间ch来存放\0
    while((ch = getchar()) != EOF)//while循环语句➡️将getchar获取的字符的ascii码值存到空间ch中➡️不等于-1
    {
        if  (ch < '0' || ch >'9')//若ch（中的ascii码值）小于字符0（的ascii码值）或大于字符9（的ascii码值）
            continue;//continue：跳过本次循环后面的代码块➡️去while行判断下一次循环
        putchar(ch);//打印
    }
    return 0;
}