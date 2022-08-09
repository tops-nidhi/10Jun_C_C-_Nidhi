#include<stdio.h>
int main()
{
	int i,no,ans;
    char ch[20];
    FILE *fptr;
    printf("Enter No of that you want to print table:");
    scanf("%d",&no);
    fptr=fopen("D:/Nidhi batch/10june_C_C++/File i_o/read_File.txt","w");
    for ( i = 1; i <= 10; i++)
    {
        ans=no*i;
        fprintf(fptr,"\n%d*%d=%d",no,i,ans);
        
    }
    
    fclose(fptr);
}
