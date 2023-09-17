#include <stdio.h>
#include <string.h>//要引用<string.h>头文件才能用strcmp函数来比较字符串

int main()//模拟用户登陆情景+只允许输入三次密码
          // 密码正确提示登陆成功,三次都输入错误就退出程序
{
    int i = 0;//输入密码的次数为i
    char code[20] = {0};//将密码放到数组当中:设密码是字符串abcdef

    for (i = 0; i < 3; i++)
    {
        printf("plz enter the code:");
        scanf("%s", code);//字符串不用&
        if (strcmp(code, "abcdef") == 0)//比较2个字符串是否相等不能用==,要用库函数strcmp
                                        //如果返回值是0➡️表示2个字符串相等
        {
            printf("correct!");
            break;
        }
    }
    if (i == 3)
    {
        printf("wrong code\n");
    }
    return 0;
}