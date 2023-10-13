
                          //静态分配实现顺序表➡️初始化顺序表
#define Maxsize 10        //定义最大长度
typedef struct{           //定义结构体+重命名为SqList
    int data[Maxsize];    //用静态的整型数组data存放数据➡️所以是静态顺序表
    int length;           //顺序表的当前长度
}SqList;                  //SqList=Sequence list

void InitList (SqList * L)   //初始化顺序表➡️这个函数属于基本运算
{
    int i;
    for (i=0;i<Maxsize;i++)   //用循环遍历顺序表的data数组
        L->data[i]=0;  //将每个元素设置为0
    L->length=0; //将顺序表的长度设置为0➡️表示空表
}
int main()
{
    SqList L;               //声明顺序表L
                            //在执行这句代码时计算机就会在内存中为这个顺序表分配所需空间
                            // ➡️Maxsize*sizeof(int)和存储变量length的空间
    InitList(&L);           //调用函数,传递顺序表L的地址➡️对其进行初始化

    return 0;
}