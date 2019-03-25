#include <stdio.h>
#include<string.h>
int main(void) 
{
	char p[10];
	scanf("%s",p);
	printf("%s",strcat(p,"."));
	return 0;
}
