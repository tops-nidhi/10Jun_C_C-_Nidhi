#include<stdio.h>
int main()
{
    char fadta[20];
    int i;
    FILE *fptr;
    fptr=fopen("D:/Nidhi batch/10june_C_C++/File i_o/read_File.txt","r");
    for(i=1;i<=10;i++)
    {
		fscanf(fptr,"%s",&fadta);
    	printf("\n%s",fadta);	
	}
}
