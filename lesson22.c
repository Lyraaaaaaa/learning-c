#include <stdio.h>

 //打印100-200之间的素数
int main()
{
    int i = 0;
    for (i=100;i<=200;i++)    //i➡️100-200的数字
    {
        int flag = 1;          //设flag为1时是素数
        int j = 0;
        for (j=2;j<=i-1;j++)   //j➡️2到i-1的数字
        {                      //素数是只能被1和它本身所整除的数
            if (i % j == 0)    //i➗j余数为0➡️i可以被j整除➡️非素数
            {
                flag=0;        //非素数➡️flag为0
                break;
            }
        }
        if (flag == 1)
            printf("%d\n",i);
    }

    return 0;
}