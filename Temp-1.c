#include<stdio.h>

struct employe
{
	char empname[25],address[30];
	int empno,empage;
}e1[5];
int main()
{
// 	struct employe e1;
	int emp,i;
	
	for(i=1;i<=2;i++)
	{
	printf("enter the emp-no:");
	scanf("%d",&e1[i].empno);
	printf("emp-name:");
	scanf("%s",&e1[i].empname);
	printf("adress:");
	scanf("%s",&e1[i].address);
	printf("emp-age ofemploye : ");
	scanf("%d",&e1[i].empage);
	
	
	}

	for( i=1;i<=2;i++)
	{
	printf("%d %s %s %d\n",e1[i].empno,e1[i].empname,e1[i].address,e1[i].empage);
	}

	
}
