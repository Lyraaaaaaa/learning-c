#include<stdio.h>
                          //写一个函数找出两个整数中的最大值

 int get_max(int x,int y) // 自定义函数get_max
                          // return type➡️int
                          // function name➡️get_max
                          // parameters➡️x,y （num1和num2是以整型的形式传递过来,所以要以整型接收）
{
    if (x>y)
        printf("最大值是：%d\n", x);
    else if (x == y)
        printf("两个都是：%d\n", x);
    else
        printf("最大值是：%d\n", y);
}
                                       //以上是函数体
int main()//程序入口
{
    int num1=0;
    int num2=0;
    printf("enter 2 number:");
    scanf("%d %d",&num1,&num2);

    int m = get_max (num1,num2);//将输入的num1,num2以参数的形式传递给getMax函数
                                      // ➡️getMax得到最大值后会产生返回值➡️将返回值存到空间m中
    return 0;
}