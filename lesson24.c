#include<stdio.h>

int is_leap_year ( int y )  //自定义函数is_leap_year

{                           //函数体
    if (((y %4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
        return 1;
    else
        return 0;
}                           //函数题体

int main()                  //程序入口
{
    int year;
    for ( year = 1000; year <= 2000; year ++)
    if ( is_leap_year (year) )    //函数调用
    {
        printf("%d\n",year);
    }
    return 0;
}