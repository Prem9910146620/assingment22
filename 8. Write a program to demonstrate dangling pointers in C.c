#include<stdio.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf(" before Free %d",*ptr);
    free(ptr);

    printf("\n after Free %d",*ptr);
    return 0;
}
