#include<stdio.h>

int main()
{
 char ip;
 printf("Enter char: ");
 scanf("%c",&ip);
 if (ip == 'a' || ip=='e' || ip=='i' || ip=='o' || ip=='u')
 {
	printf("Vowel\n");
 }
 else if(ip =='A'||ip=='E'||ip=='I'||ip=='O'||ip=='U')
 {
	printf("Vowel\n");
 }
 else
 {
 	printf("Consonant\n");
 }
 return 0;
} 
