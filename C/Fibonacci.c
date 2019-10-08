#include<stdio.h>

int main()
{
	int t1=0,t2=1,t3,limit;
	printf("Enter limit: ");
	scanf("%d",&limit);
	for(int i =0;i<=limit;i++)
	{
		printf("%d\t",t1);
		t3 = t1 + t2;
		t1 = t2;
		t2 = t3;
	}
	return 0;
}
