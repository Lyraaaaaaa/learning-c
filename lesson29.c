#include<stdio.h>
//这段代码是用冒泡排序(Bubble Sort)的算法将数组的数据排为升序

void bubble_sort(int arr[],int sz) //数组传参时,形参有2种写法➡️(1)数组形式 (2)指针形式
                            //arr作为数组本质是数组首元素的地址➡️地址传过来要用指针接收➡️这里的arr是指针变量
                            //数组作为函数的参数传递时,参数的本质是一个指向数组的指针(而不是数组本身)
{
    int i;                                //i趟冒泡排序
    for (i = 0; i < sz - 1; i++)          //n个元素需要(n-1)趟冒泡排序
    {
        int j;                            //从for进来➡️这里是一趟冒泡排序➡️相邻两个元素比较➡️假设下标为j
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])      //如果前一个元素>后一个元素➡️交换
            {
                int tmp;
                tmp = arr[j];             //开始交换
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }

    }
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, sz);//名为bubble_sort的函数(对谁排序就选谁传参)➡️要对arr数组排序➡️将数组名arr传过去
                     //数组传参的时候只需数组名(不用➕[])
                     //注意:传参arr传的是数组首元素的地址➡️地址用指针接收

    int i;
    for (i = 0;i < sz;i ++)
    {
        printf("%d",i);
    }
    return 0;
}