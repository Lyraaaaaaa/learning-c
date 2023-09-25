#include <stdio.h>
//不创建临时变量实现2个数的交换
int main()
{
    int a = 3;
    int b = 5;
    printf("before a=%d b=%d\n",a,b);
    a = a ^ b;//a=3^5
    b = a ^ b;//b=a^b=3^5^5➡️5^5=0➡️b=3^0=3=原来的a
    a = a ^ b;//a=a^b=3^5^3➡️3^3=0➡️a=0^5=5=原来的b
    printf("after a=%d b=%d\n" ,a,b);
    return 0;
}