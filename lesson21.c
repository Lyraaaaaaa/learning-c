#include <stdio.h>
//写一个函数可以交换2个整型变量的内容

void swap(int* px,int* py)//整型指针变量px接收变量a的地址,整型指针变量py接收变量b的地址
{                           //将a的值赋值给*px所指向的内存位置上
    int z = 0;
    z=*px; //int*px = &a ➡️ *px = a ➡️ z=a
    *px=*py;// a = b
    *py=z;//b = z
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);

    printf("交换前a=%d b=%d\n",a,b);
    swap(&a,&b);//传递a和b的地址
    printf("交换后a=%d b=%d\n",a,b);

    return 0;
}