#include<stdio.h>

int main()
{
    int month;
    printf("please enter the number:");
    scanf("%d",&month);

    if (month >= 1 && month <= 12)
    {
        if (month >= 1 && month <= 3)
            printf("It's spring now!");
        else if (month >= 4 && month <= 5)
            printf("It's summer now!");
        else if (month >= 6 && month <= 8)
            printf("It's autumn now!");
        else
        printf("It's winter now!");
    }
    else
        printf("wrong number!");
    return 0;
}