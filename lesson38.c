#include<stdio.h>

int main()
{
    int arr[10]={0};
    int * p = arr;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i;                                    //i用于控制循环的迭代次数和数组元素的访问索引
    for(i=0;i<sz;i++)
    {
        printf("%d",*(p+i));                  //用一级指针访问和打印数组中的元素
        printf("%p ------ %p\n",&arr[i],p+i); //数组元素arr[i]的地址和指针p加上偏移量i的地址
                                              //验证指针和数组地址关系➡️arr[i]=p+i
        printf("%d",arr[i]);                 //打印数组元素的方式一
        printf("%d",*(p+i));                 //打印数组元素的方式二
        printf("%d",*(arr+i));               //arr[i]本质上是*(arr+i)
    }
    return 0;
}