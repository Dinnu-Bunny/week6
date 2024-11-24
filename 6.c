#include<stdio.h>
int main()
{
	int i,c;
	char str[15],s;
	printf("Enter the String");
	scanf("%s",str);
	printf("Enter the character");
	scanf("%c",&s);
	for(i=0;str[i]!+'\0';i++)
		str[i]=s;
	
}
