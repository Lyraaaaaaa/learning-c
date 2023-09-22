#include <stdio.h>
//将三个整数由大到小输出

void swap (int *px,int *py)
{
    int tmp;
    tmp=*px;
    *px=*py;
    *py=tmp;
}

int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c );

   if (a<c)
   {
       swap(&a,&c);
   }

   if(a<b)
   {
       swap(&a,&b);
   }

   if(b<c)
   {
       swap(&b,&c);
   }

    printf("%d %d %d\n",a,b,c);
    return 0;
}