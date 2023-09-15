#include <stdio.h>
int main()
{
    //输入数据
    int id=0;
    float c = 0.0f;//只写0.0会被计算机识别为double类型,0.0f才是float类型
    float math =0.0f;
    float eng =0.0f;
    scanf("%d;%f,%f,%f",&id,&c,&math,&eng);

    //输出数据
    printf("The each subject score of NO.%d is %.2f, %.2f, %.2f.\n",id,c,math,eng);//%.2f➡️表示小数点后面保留2位
    return 0;
}