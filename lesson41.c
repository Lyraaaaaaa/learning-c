#include <stdio.h>
int main()
{
    char ch = 'w';//声明字符变量ch并将其初始化为字符'w'
    char *pc=&ch;//声明指向字符类型的指针变量pc,将变量ch的地址赋给指针变量pc
    *pc ='b';//使用指针变量pc来访问ch的值,通过*运算符解引用该指针并将字符'b'赋值给ch
             //➡️通过指针pc修改ch的值
    printf("%c\n",ch);

    char * p ="abcdef";//把字符串首字符a的地址赋值给了p
    printf("%s\n",p);//p里面是a的地址➡️从a开始打印直到\0结束

    return 0;
}