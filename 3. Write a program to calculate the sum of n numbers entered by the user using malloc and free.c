#include<stdio.h>
int main()
{
    int *ptr;
    int i,n,sum=0;
    printf("enter the size of number \n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory allocation failed \n");
        return 0;
    }
    printf("\n enter the value \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }

     for(i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf(" \n sum is %d",sum);
    free(ptr);
    return 0;

}

