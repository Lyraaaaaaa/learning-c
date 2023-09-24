#include <stdio.h>
//1.实现函数init(),初始化数组为全0
//2.实现print()打印数组的每个元素
//3.实现reverse()函数完成数组元素的逆置

void init(int arr[],int sz)//传递的数组用arr[]接收,传递的数组个数用sz接收
{
    int i;//i是下标
    for ( i=0 ; i<sz ; i++ )
    {
        arr[i]=0;          //1.实现函数init(),初始化数组为全0
    }
}

void print(int arr[],int sz)
{
    int i;//i是下标
    for ( i=0 ; i<sz ; i++ )
    {
        printf("%d\n",arr[i]); //2.实现print()打印数组的每个元素
    }
    printf("\n");
}

void reverse(int arr[],int sz)
{
    int left;        //创建变量left
    left =0;         //将第一个元素的下标赋值给left
    int right;       //创建变量right
    right =sz - 1;   //将最后一个元素的下标赋值给right

    while( left<right )
    {
        int tmp ;                 //创建临时变量tmp
        tmp = arr[left];
        arr[left]=arr[right];
        arr[right]=tmp;           //完成了两个元素的交换
                                  // 将左指针位置的元素与右指针位置的元素进行交换

        left++;                   //通过增加left,减少right,向数组中间移动指针
        right--;                  // 循环体会继续执行下一轮的交换操作➡️直到left不再小于right为止
                                  // 数组的元素反转操作就完成了
    }
}

int main()
{
    int arr[]={1,2,3,4,5}; //创建数组arr
    int sz=sizeof(arr)/sizeof(arr[0]);           //元素个数sz

    print(arr,sz);//调用print函数来打印数组arr                 (12345)

    reverse(arr,sz);//调用reverse函数

    print(arr,sz);//调用print函数来打印数组arr                  (54321)

    init(arr,sz);//调用名为init的函数
                 // 将数组arr和元素个数sz作为参数传递给init函数
                 // ➡️通过init函数可以访问并操作数组arr中的元素

                 print(arr,sz);//调用print函数来打印数组arr      (00000)
    return 0;
}