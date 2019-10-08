#include<stdio.h>

int main()
{
	int ip,fact=1;
	printf("Enter value: ");
	scanf("%d",&ip);
	for(int i=1;i<=ip;i++)
	{
		fact = fact * i;
	}
	printf("The factorial is: %d\n",fact);
	return 0;
}

