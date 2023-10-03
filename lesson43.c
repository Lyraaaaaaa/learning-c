#include<stdio.h>

int main()
{
  int arr1[10]={1,2,3,4,5,6,7,8,9,10};

  int *p = arr1;              //将数组arr首元素地址赋给int类型的指针变量p
  int i2;
  for (i2=0;i2<10;i2++)
  {
      printf("%d\n",*(p+i2));
  }

   int (*p1)[10]= &arr1;       //将整个数组arr的地址赋给数组指针int(*p2)[]
   int i ;
   int sz;
   sz=sizeof(arr1)/sizeof(arr1[0]);
   for (i=0;i<sz;i++)
   {
       printf("%d\n",*(*p1+i));    //p1是指向数组的,*p=数组名=数组首元素地址
                                   //所以说*p本质上是数组首元素地址
   }


    char * arr2[5]={0};       //arr2是5个字符指针类型元素的数组,每个元素指向一个char类型的字符串
    char *(*p2)[5]=&arr2;     //将数组arr2的地址赋给数组指针p2,p2指向具有5个字符指针char*类型元素的数组的地址

    return 0;
}