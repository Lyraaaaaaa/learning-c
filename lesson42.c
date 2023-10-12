#include <stdio.h>
#include <stdlib.h>
typedef struct list_t
{
    int * elements;
    size_t capacity;
    size_t size;
}int_list_t;

void list_init(int_list_t*list,size_t initialcapacity)
{
    list->capacity=initialcapacity;
    list->size=0;
    list->elements=(int*)malloc(initialcapacity * sizeof(int));
}

void list_push(int_list_t*list,int element)
{
    if (list->size >= list->capacity)
    {
        size_t newcapacity=list->capacity *2;
        list->elements =(int*)realloc(list->elements,newcapacity*sizeof(int));
        list->capacity=newcapacity;
    }
    {
        list->elements[list->size]=element;
        list->size ++;
    }

}

int list_length(const int_list_t*list)
{
    return list->size;
}

int list_get (const int_list_t*list,int index)
{
    if (index >= 0 && index <= list->size)
    {
        return list->elements[index];
    }
    printf("error");
    return 1;
}

int list_remove(int_list_t*list,int index)
{
        if (index >= 0 && index <= list->size)
        {
            int removedelement = list->elements[index];
        size_t i;
        for (i = index; i < list->size - 1; i++)
        {
            list->elements[i] = list->elements[i + 1];
        }
        list->size--;
        return removedelement;
        }

    printf("error");
    return 1;
}

void list_delete(int_list_t*list)
{
    free(list->elements);
        list->elements=NULL;
        list->size=0;
        list->capacity=0;
}

int main()
{
    int_list_t list;
    list_init(&list,10);

    list_push(&list,5);
    list_push(&list,10);
    list_push(&list,15);

    int length;
    length = list_length(&list);
    printf("length of list=%d\n",length);

    int element;
    element=list_get(&list,1);
    int removedelement;
    removedelement=list_remove(&list,0);

    length=list_length(&list);
    printf("the length after removed=%d\n",length);

    list_delete(&list);

    return 0;
}