#include"header.h"
void first_occur()
{
	char s[100],w[100];  
	int i=0,k=0,c,index;

	printf("Enter  the string : ");
	gets(s);
	printf("Enter word to be searched: ");
	gets(w);
	while(s[i]!='\0')
	{

		if(s[i]==w[0])
		{
			k=1;
			for(c=1;w[c]!='\0';c++)
			{
				if(s[i+c]!=w[c])
				{
					k=0;
					break;
				}
			}
		}
		if(k==1)
		{
			index=i;
		}
		i++;
		k=0;     
	}
	if(k==1)
		printf("\nword %s  is first occurred at location:%d \n",w,index);
	else
		printf("\nword is not occurred in the string\n ");
}
void palin()
{
	char str[100];
	int i, len, flag;
	flag = 0;

	printf("\n Please Enter any String :  ");
	gets(str);

	len = strlen(str);

	for(i = 0; i < len; i++)
	{
		if(str[i] != str[len - i - 1])
		{
			flag = 1;
			break;	
		} 
	}
	if(flag == 0)
	{
		printf("\n %s is a Palindrome String", str);
	}
	else
	{
		printf("\n %s is Not a Palindrome String", str);
	}	
}
void concat()
{

	char a[100], b[100];

	printf("Enter the first string\n");
	gets(a);

	printf("Enter the second string\n");
	gets(b);

	strcat(a, b);

	printf("after concatenation: %s\n", a);
	printf("the string length is %d",strlen(a));
}
