#include<stdio.h>
int main()
{
    int *ptr,c;
    int i=0,size=0,sum=0;
    printf("enter the size of array\n");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory allocation is failed \n");
      return 0;
    }
    printf("\n entered %d value \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }

     for(i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("avarage is %d \n",sum/size);

    free(ptr);
    return 0;


}
