#include<stdio.h>
#define N_VALUES 5                //定义了一个常量N_VALUES将其值设置为5
                                  //使用宏定义可以在代码中多次引用N_VALUES(无需重复输入数字5)
int main()
{
    float values[N_VALUES];      //声明一个名为values的浮点数数组+分配一块连续内存来存储浮点数数组values(大小为N_VALUES 即5个元素)
    float *vp;                   //声明指向浮点数的指针变量vp

    for (vp = &values[0]; vp < &values[N_VALUES];)
        //将指针vp初始化为指向数组values的首元素values[0]的地址
        //只要指针vp指向的地址小于数组values最后一个元素values[N_VALUES-1]的地址➡️一直执行循环
    {
        *vp++ = 0;   // 后置++ ➡️先使用再自增
                     //*vp++=0➡️先*vp=0➡️再vp++
    }
    return 0;
}