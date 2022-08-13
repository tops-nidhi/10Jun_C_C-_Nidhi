#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two no:");
	scanf("%d%d",&a,&b);
	if(!(a>5 || b<5))
	{
		printf("\nTrue.");		
	}
	else
	{
		printf("\nFlase.");
	}
}
