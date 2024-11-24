#include<stdio.h>
int main()
{
	int i,c=0;
	char str[15];
	printf("Enter the string str");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
		c++;
	for(i=0;i<((c+1)/2);i++)
	{
		char t;
		t=str[i];
		str[i]=str[c-i-1];
		str[c-i-1]=t;
	}
    printf("%s",str);
    return 0; 
}
