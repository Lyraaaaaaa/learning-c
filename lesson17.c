#include <stdio.h>
int  main()//在一个有序数组中查找具体的某个数字
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int k = 7; //假设要找7

    int i = 0;//向内存申请4byte的空间i,初始化
    int sz=sizeof(arr)/sizeof(arr[0]);//计算数组元素个数
    for (i=1;i <= sz;i++)//i循环去找k
    {
        if (arr[i] == k)//如果下标为i的元素=k=7
        {
            printf("I FIND IT,下标是：%d\n", i);//输出
            break;//跳出
        }
        if (i == sz) {//如果走到了最后一个元素
            printf("I can not find it");//查询失败
        }
    }
    return 0;
}









