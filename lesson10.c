#include <stdio.h>
//转换以下ASCII码（73...)为对应字符并输出
int main()//程序入口
{
    int arr[]={73,32,99,97,110,32,100,111};//先用数组将这些ascii码值存起来
    int i = 0;
    int sz=sizeof(arr)/sizeof(arr[0]);//整个数组大小除以单个数组元素的大小=数组 arr 的大小➡️即元素个数
                                      //这是计算元素个数的方法
    while(i<sz)//当i的值小于数组 arr 的大小
    {
        printf("%c",arr[i]);//将ascii码值用字符的形式打印出来
        i++;//i自增
    }
    return 0;
}
