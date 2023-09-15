#include <stdio.h>

int main()
{
    int num = 1;
    do{
        if(num==5)
            continue;
        printf("%d\n",num);
        num++;
    }
        while(num<=10);
    return 0;
}