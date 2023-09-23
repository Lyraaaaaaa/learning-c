#include<stdio.h>

int main()
{
    int arr[3][4]={0};
    int sz = sizeof(arr);
    printf("%d\n",sz);

    //通过计算算出二维数组的行数与列数
    printf("%d\n",sizeof(arr)/sizeof(arr[0]));//行数=总数组的大小➗第一行的大小
    printf("%d\n",sizeof(arr[0])/sizeof(arr[0][0]));//列数=第一行的大小➗第一个元素的大小

    return 0;
}