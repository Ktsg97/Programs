#include<stdio.h>

int main()
{
	int n1,n2,gcd,lcm;
	printf("Enter n1: ");
	scanf("%d",&n1);
	printf("Enter n2: ");
	scanf("%d",&n2);
	for(int i=1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i ==0)
		{
			gcd = i;
		}
	}
	lcm = (n1*n2)/gcd;
	printf("LCM is: %d\n",lcm);
	return 0;
}
