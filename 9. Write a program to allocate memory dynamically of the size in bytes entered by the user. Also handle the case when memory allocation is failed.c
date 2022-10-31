
#include<stdio.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    if(ptr==NULL)
    {
        printf("memory allocation is failed");
        return 0;
    }
    return 0;

}
