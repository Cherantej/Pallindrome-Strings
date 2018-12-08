#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	printf("Enter a string:");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	if(strcmp(s1,s2)==0)
	printf("String is a pallindrome");
	else
	printf("Not a pallindrome string");
	getch();
}
