#include <stdio.h>

int main()
{
    char password[20]={0};//向内存申请20个char(20个byte）的连续空间password,并将所有元素初始化为零
                                             // (每个字节都会被设置为二进制表示的零,即所有位都为0)
    printf("enter the password plz:");
    scanf("%s",password);//输入密码123

    getchar();//键盘输入了“123\n”➡️scanf只拿走了123➡️留下\n在输入缓冲区让getchar读取

    printf("请确认密码(Y/N):>");
    int i = getchar();//用getchar函数获取字符将其ascii码值存放到i里
    if (i == 'Y')//==是相等运算符➡️用于比较两个值是否相等
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}