#include <stdio.h>
//打印二维数组
int main()
{
    int arr1[3][4]={1,2,3,4,5,6,7,8,1,2,3,4};

    int i;
    for ( i=0 ; i<3 ; i++ )//i行
    {
        int j;
        for( j=0 ; j<4 ; j++ )//j列
        {
            printf("%d\n", arr1[i][j]);//输出二维数组中每个元素

            printf("&arr1[%d][%d]=%p\n", i, j, &arr1[i][j]);//输出每个元素的地址
        }
    }
    return 0;
}