#include <stdio.h>

int main() //输入1-5输出weekday,输入6-7输出weekend
{
    int day=0;
    printf("please enter the numer:");
    scanf("%d",&day);

    switch(day) {
        case 1:
        case2 :
        case 3:
        case 4:
        case 5:
            printf("weekday!\n");//多个case匹配同一个执行语句
            break;

        case 6:
        case 7:
            printf("weekend!\n");
            break;

        default:
            printf("wrong number");
            break;
    }
    return 0;
}