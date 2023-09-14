#include <stdio.h>

int main()//程序入口
{
    int n=1;//向内存申请4byte的空间n来存放1
    int m=2;//向内存申请4byte的空间m来存放2

    switch(n)//根据switch后面的值判断从哪个case进
    {
        case 1:m++;//n=1➡️m=2+1=3（没有break往下走）
        case 2:n++;//n=1+1=2（没有break往下走）
        case 3://switch嵌套
            switch(n)//根据switch后面n的值判断从哪个case进
            {
                case 1:n++;//n=2 !=1➡️跳过
                case 2:m++;n++;//m=3+1=4 n=2+1=3
                break;//跳出这个switch
            }
        case 4://case3后面没有break➡️从这儿进
            m++;//m=4+1=5
            break;//跳
        default:
            break;
    }
    printf("m=%d,n=%d\n",m,n);//m=5,n=3
    return 0;
}