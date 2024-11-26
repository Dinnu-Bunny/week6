#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the value of n");
	scanf("%d",&n);
	char str[n];
	printf("Enter the string");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
		printf("%c",str[i]);
		break;
	    }
	}
	return 0;
}
