                      //求n的阶乘（递归与迭代）
#include <stdio.h>

int factorial (int n) //定义一个返回值为整型的函数factorial
{
    if(n<=1)
        return 1;
    else
        return n* factorial(n-1);  //5！=5*4*3*2*1
}                                     //函数体结束

int main()//程序开始
{
    int i;
    printf("enter a number:");
    scanf("%d",&i); //输入值
    int m;
    m=factorial (i);//调用factorial函数

    printf("The result is :%d\n",m);

    return 0;
}