#include <stdio.h>

struct peo
{
    char name[20];
    char tele[12];
    char sex[5];
    int high;
}p1,p2;            //创建2个结构体变量:p1 p2
struct peo p3,p4;  //创建2个结构体变量:p3 p4
                                                 //以上4个结构体变量是全局变量

void print1(struct peo * p5)
                                          //函数接受一个指向struct peo类型的指针参数p5➡️使用printf打印通过指针p5访问的结构体成员的值
{
    printf("%s %s %s %d\n",p5->name,p5->tele,p5->sex,p5->high);        //结构体指针->成员变量
}

void print2(struct peo p)
                                        //函数接受struct peo类型的值参数p(而不是指针)➡️直接访问结构体参数p的成员
{
    printf("%s %s %s %d\n",p.name,p.tele,p.sex,p.high);              //结构体变量.成员变量
}

int main()                                //通过指针方式和直接访问方式打印出结构体p5的成员值
{
    struct peo p5={"chris","18618191919","male",188}; //创建1个结构体变量 p5
                                             //p5结构体变量是局部变量

    print1(&p5);
    print2(p5);   //p5是实参,p是形参
     return 0;
}