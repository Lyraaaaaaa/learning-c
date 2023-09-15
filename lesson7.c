#include<stdio.h>
//这里的代码适当修改可以用来清理缓冲区
int main()
{
    int ch = 0;//向内存申请4byte的空间ch来存放0
    while((ch = getchar()) != EOF)//ch被赋值上getchar,即读到的字符存到ch里
                                  //(ch=getchar)整体若不等于eof➡️说明读取到正常字符
    {                             //EOF=End Of File➡️是#define定义的-1
    putchar(ch);//打印ch里的字符
    }          //“control+z“➡️使getchar返回EOF➡️程序停止
    return 0;
}