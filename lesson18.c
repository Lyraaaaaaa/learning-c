#include <stdio.h>
int main()//用二分查找法在一组有序数组中查找指定元素
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;//假设要找的元素为7
    int i = 0 ;
    int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数

    int left = 0;//第一个元素=1➡️其下标=0➡️即左下标=0
    int right = sz-1;//sz=元素个数➡️sz-1=最后一个元素的下标➡️即右下标=sz-1

    while(left<=right)
    {
        //以下是一次查找

        int mid = (left+right) / 2;//中间元素下标=（左下标+右下标）/2➡️中间元素下标=4对应元素5
        if ( arr[mid] < k)//如果中间元素<要找的元素➡️中间元素是5,要找的是7
        {
            left = mid+1;//中间元素是5,mid+1=6➡️将6变成left
        }
        else if (arr[mid] > k)
        {
            right= mid - 1;
        }
        else
        {
            printf("find it ，下标是：%d\n",mid);
            break;
        }
    }
    if (left > right)
    {
        printf("can not find it\n");
    }
    return 0;
}