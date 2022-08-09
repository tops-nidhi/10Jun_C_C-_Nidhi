#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no,i;
    int *ptr;
    printf("/nEnter the length:");
    scanf("%d",&no);
    ptr=(int*)malloc(no*sizeof(int));
    printf("\nEnter value:\n");
    for(i=0;i<no;i++)
    {
        printf("\nvalue-%d:\t",i+1);
        scanf("%d",&ptr[i]);
    } 
    printf("\nValue is:");
    for(i=0;i<no;i++)
    {
        printf("\nvalue-%d:\t%d",i+1,ptr[i]);
    }
    
    
    printf("\n-------------------------------------------\n");
    printf("\nEnter the new length:");
    scanf("%d",&no);
    ptr=(int*)realloc(ptr,no*sizeof(int));
    printf("\nEnter value:\n");
    for(i=0;i<no;i++)
    {
        printf("\nvalue-%d:\t",i+1);
        scanf("%d",&ptr[i]);
    } 
    printf("\nValue is:");
    for(i=0;i<no;i++)
    {
        printf("\nvalue-%d:\t%d",i+1,ptr[i]);
    }
    free(ptr);
}
