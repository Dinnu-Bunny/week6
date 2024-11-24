#include<stdio.h>
int main()
{
	int i,j,c=0;
	char s1[15],s2[10];
	printf("Enter String1");
    scanf("%s",s1);
    printf("Enter string2");
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++)
		c++;
	for(j=c;s2[j-c]!='\0';j++)
		s1[j]=s2[j-c];
	printf("%s",s1);
	return 0;
}
