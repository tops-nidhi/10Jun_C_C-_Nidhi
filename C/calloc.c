#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no,i;
    int *ptr;
    printf("Enter the length:");
    scanf("%d",&no);
    ptr=(int*)calloc(no,sizeof(int));
    printf("\nEnter value:\n");
    for(i=0;i<=no;i++)
    {
        printf("\nvalue-%d:\t",i+1);
        scanf("%d",&ptr[i]);
    } 
    printf("\nValue is:");
    for(i=0;i<=no;i++)
    {
        printf("\nvalue-%d:\t%d",i+1,ptr[i]);
    }
    
}
