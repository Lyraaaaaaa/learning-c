#include  <stdio.h>
//输入19970101,输出year:1997 month:01 date:01（分三行输出）
int main()
{
    //输入数据
    int year  = 0 ;
    int month = 0 ;
    int date  = 0 ;
    scanf("%4d%2d%2d",&year,&month,&date);//输入4位的整数➡️%4d,输入一个2位的整数➡️%2d

    //输出数据
    printf("year=%d\n",year);
    printf("month=%02d\n",month);//%➡️格式说明符的开始,0➡️表示使用零进行填充,
                                 // 2➡️表示要显示的最小字段宽度是2,d➡️表示参数是一个十进制整数
    printf("date=%02d\n",date);  //当值不足两位➡️用0进行填充以保证两位对齐
                                 // 值是3➡️输出03,值是12➡️输出12
    return 0;
}