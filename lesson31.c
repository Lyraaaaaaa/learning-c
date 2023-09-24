//交换数组
#include <stdio.h>
int main()
{                                                 //先创建2个数组
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,0};

    int sz=sizeof(arr1)/sizeof(arr1[0]);        //数组元素个数

    int i;                                      //i是下标
    for ( i=0; i<sz; i++ )
    {
        int tmp;                                //创建一个临时变量tmp,交换用
        tmp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=tmp;
    }
    for (i=0;i<sz;i++)                         //用循环的方式打印arr1数组
    {
        printf("%d",arr1[i]);
    }
    printf("\n");

    for (i=0;i<sz;i++)                         //用循环的方式打印arr2数组
    {
        printf("%d",arr2[i]);
    }
    printf("\n");
    return 0;
}