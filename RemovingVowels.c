#include<stdio.h>
int main()
{
	int i,n;
	char str[n];
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the string");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117||str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85)
		str[i]=32;
	}
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
