#include <stdio.h>
//打印1000-2000年之间的闰年
int main()
{
    int year;
    for ( year = 1000; year <= 2000; year++)
             //先找出1000-2000的数
        if( (year%4 == 0) && (year % 100 != 0 ) || (year % 400 == 0) )
            //闰年的判断规则:(1)能被4整除，且不能被100整除是闰年 (2)能被400整除是闰年
        printf("%d\n",year);
    return 0;
}