#include <stdio.h>
int main()
{
    int ch = getchar();//用getchar函数获取一个字符并将其ascii码值存放至ch
    printf("%c\n",ch);//打印ch的方法一:将ch当中的ascii码值以字符的形式输出
    putchar(ch);//打印ch的方法二：putchar打印ch
    return 0;
}