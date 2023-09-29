#include<stdio.h>
#include<string.h>

                                  //第一种写法
int my_strlen1(char * str)         //定义名为my_strlen的函数
                                  //参数str是一个指向字符的指针,它指向传递进来的字符串的首字符,并返回一个整数类型
{
    int count = 0;               //声明count用于统计字符串的长度
    while (*str != '\0')         //循环检查*str所指向的字符是否为字符串的终止符\0
    {
        count++;                //每当循环到一个非空字符时,count的值会增加1➡️用于记录字符串的长度
        str++;                  //指针str向后移动一个位置,指向下一个字符
    }
    return count;               //返回count的值,即字符串的长度
}


                                 //第二种写法   (指针 - 指针)
int my_strlen2(char * str)
{
    char * start = str;         //声明指针变量start
                                //将传递的指向字符串首字符a的地址赋值给start
    while (*str != '\0')
    {
        str++;                 //每次循环迭代时将指针str向后移动一个位置
    }
    return (str-start);        //函数返回的是指针str的当前位置与起始地址start的差值➡️字符串的长度
}


int main()                    //程序开始
{
   int len1 = my_strlen1("abcdef");//调用自定义函数my_strlen
                                     //将字符串作为函数参数传递时,实际传递的是指向字符串首字符a的地址
                                     //➡️将返回的长度值存储在整数类型的变量len中
   printf("%d\n",len1);

    int len2 = my_strlen2("abcdef");
    printf("%d\n",len2);

    return 0;
}