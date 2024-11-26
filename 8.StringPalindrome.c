#include<stdio.h>
int main()
{
	int n,i,j=0;
	char ch[n];
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the word");
	scanf("%s",ch);
	int t=0;
	for(i=0;ch[i]!='\0';i++)
	{
		j=j+1;
	}
		for(i=0;i<(j/2);i++)
		{	
			if(ch[i]==ch[j-i-1])
			t=1;
			else
			{
				t=0;
				break;
			}
		}
		if(t==1)
		printf("Palindrome");
		else
		printf("Not a palindrome");
	return 0;
}
