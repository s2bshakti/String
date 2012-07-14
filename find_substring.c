#include<stdio.h>
#include<string.h>
main()
{
	int a,len_sub,len_main;
	char main[100];
	char sub[100];
	scanf("%s",main);
	scanf("%s",sub);
	len_sub=strlen(sub);
	//len_main=strlen(main);
	//printf("%d",len_main);
	a=check_present(main,sub);	
	if(a==len_sub)
	{
		printf("substring is present \n");
	}
	else
	{
		printf("substring is not present \n");
	}
}
int check_present(char* main,char* sub)
{
	int count=0;
	char prev;
	while(*sub!='\0')
	{
		while(*main!='\0')
		{	
			if(*sub==*main)
			{
				prev=*main;
				main++;
				count++;
				printf("%d",count);
				break;
			}
			else
			main++;
		}
		sub++;
		//char next=*main++;
		printf("%c",*main);
		printf("%c",prev);
		//printf("%c",next);
		if(*main!=*sub && *sub!='\0' && prev!=*main)
		return 0;	
	}	
printf(" outside while %d",count);
return count;
}
