#include<stdio.h>
#include<string.h>
void rev(char s[])
{
	int i=0,p,temp;
	p=strlen(s)-1;
	while(i<p)
	{
		temp=s[i];
		s[i]=s[p];
		s[p]=temp;
		i++;
		p--;
	}
	printf("Reverse is %s",s);
	
}
int main()
{
	char s[50];
	printf("Enter a string: ");
	scanf("%s",s);
	rev(s);
	return 0;
}
