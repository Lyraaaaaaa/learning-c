#include <stdio.h>
//编写一个程序:用户输入的成绩等级,输出相应的评语
int main()//程序入口
{
    char grade;//向内存申请1byte的空间grade
    printf("please enter ur score:");//输出
    scanf("%c",&grade);//输入

    switch(grade) //多分支情况用switch:根据switch后面表达式的值来决定匹配哪个case语句,从case语句进去
    {
        case 'A'://用case语句来定义不同的情况,每个case后面跟着一个常量/表达式➡️表达一个可能的条件
            printf("brilliant\n");//执行语句
            break;//代码块末尾用break语句来跳出switch语句,以避免执行其余代码块

        case 'B':
            printf("good\n");
            break;

        case 'c':
            printf("middle\n");
            break;

        case 'D':
            printf("not bad\n");
            break;

        case 'E':
            printf("fail\n");
            break;

        default://所有case都不匹配就走default
            printf("wrong sentence");
            break;
    }
    return 0;
}