#include<stdio.h>
int main()
{
	int i;
	char str[10];
	printf("Enter the String");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65&&str[i]<=91)
		str[i]=str[i]+32;
	}
	printf("%s",str);
	return 0;
}
