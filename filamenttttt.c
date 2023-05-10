#include<stdio.h>

main()
{
	char email[100]="nensi333@gmail.com";
	char pass[100]="nensi@#$123";
	int i;
	
	char email1[200];
	char pass1[200];
	
	printf("enter your email=");
	scanf("%s,email1");
	
	printf("enter your pass=");
	scanf("%s,pass1");
	
	if (strcmp(email,email1)==0 && strcmp(pass,pass1)==0)
	{
		printf("login successfully");
	}
	else
	{
		printf("please type correct email or pass");
	}
}
