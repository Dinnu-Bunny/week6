#include<stdio.h>
int main()
{
	int i,j=1;
	char ch[50]="Dinesh is great";
	
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==32)
		{
			j=j+1;
		}
	}
	printf("No.of words is %d",j);
	return 0;
}
