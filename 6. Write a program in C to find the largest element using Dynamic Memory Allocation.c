#include<stdio.h>
int main()
{
    int *ptr,*m;
    int i,n,j;
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
      for(i=0;i<n-1;i++)
     { for(j=i+1;j<n;j++)
    {
        if(ptr[i]>ptr[j])
        {  m=ptr[i];
           ptr[i]=ptr[j];
           ptr[j]=m;

        }
    } }


      //for(i=0;i<n;i++)
    printf(" largest number is %d",ptr[n-1]);
    free(ptr);
    return 0;

}

