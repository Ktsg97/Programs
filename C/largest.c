#include<stdio.h>

int main()
{
 int a = 10,b = 15, c = 12;
 int max;
 max = (a>b) ? (a>c ? a : c) : (b>c ? b : c);
	/* If a>b is true, check a>c. If a>c is true print a else c.
	   If a>b is false,check b>c. If b>c is true print b else c.*/
 printf("Largest no. is: %d",max);
 return 0;
}
