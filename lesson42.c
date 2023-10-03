#include <stdio.h>
#include <stdlib.h>

struct int_list                                         //定义名为int_list的结构体类型
{
    int * elements;                                     //指向整数类型数据的指针变量elements
    size_t capacity;                                    //定义一个无符号整型变量capacity➡️表示当前分配的内存可容纳的最大元素数量
    size_t size;                                        //定义一个无符号整型变量size➡️表示当前存储的元素数量
};
typedef struct int_list int_list_t;                     //为定义的结构体int_list更名为int_list_t

void list_init(int_list_t * list,size_t initialcapacity)//函数list_init的定义(无返回值)
                                                        //函数接收一个指向int_list_t类型的指针变量list和一个无符号整型变量initialcapacity
{



}


int main()
{
    int_list_t list;
    list_init( &list,10);

    return 0;
}