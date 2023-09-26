#include<stdio.h>
void test1(int arr[]) //函数的声明➡️接收的是指向整数的指针
{
    printf("%d\n",sizeof(arr));//输出指针arr的大小➡️指针大小是固定的(取决于操作系统和编译器)
}                             //无论它指向的是单个整数还是整数数组,sizeof(arr)的结果将始终是指针大小

void test2(char ch[])
{
    printf("%d\n",sizeof(ch));//在函数参数中数组名ch被视为一个指针,而不是真正的数组
                              //所以说sizeof(ch)会返回指针的大小而不是字符数组的大小
}

int main()              //程序开始
{
    int arr[10] = {0};  //向内存申请一块连续空间来存放整型类型的数组arr
    char ch[10] = {0};  //在内存中分配了10byte的空间来存储一个空字符串,每个字节都被初始化为0
    printf("%d\n",sizeof(arr)); //输出数组arr所占空间大小➡️int=4byte,10个元素=4*10
    printf("%d\n",sizeof(ch));  //输出字符串所占空间大小➡️char=1byte,10个元素=1*10
    test1(arr);//调用test1函数,将arr作为参数传递出去➡️ BUT! 在C语言中当数组作为函数参数进行传递时,实际上会将数组转换为指针
    test2(ch); //调用test2函数,将字符数组ch作为参数传递出去(当数组作为函数的参数传递时,它会自动退化为指向数组第一个元素的指针)
    return 0;
}