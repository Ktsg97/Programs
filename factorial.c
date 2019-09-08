#include<stdio.h>
int main()
{
 int a,i,j=1;
 printf("Enter value: ");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
  j=j*i;
 }
 printf("Factorial of %d is :%d",a,j);
 return 0;
}
