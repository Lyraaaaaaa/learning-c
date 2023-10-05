#include <stdio.h>
#include<assert.h>
size_t my_strlen(const char * str) //str指向数组首元素h
{
    size_t count = 0;
    assert(str);                   //assert是一个宏定义,用于验证程序在某个点处是否满足预期条件
    while (* str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
   char arr[]="hello world";
   size_t n;
   n = my_strlen (arr);              //arr作为参数传递给str
   printf("%u",n);
    return 0;
}

