#include<stdio.h>

int main()
{
	int i,num;
	int sum = 0;
	printf("Enter the range: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum = sum +i;
	}
	printf("The sum is: %d",sum);
	return 0;
}
