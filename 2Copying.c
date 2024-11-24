#include<stdio.h>
int main()
{
	int i;
	char s1[10],s2[15];
	printf("Enter String1");
    scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++)
		s2[i]=s1[i];
	for(i=0;s2[i]!='\0';i++)
		printf("%c",s2[i]);
	return 0;
}
