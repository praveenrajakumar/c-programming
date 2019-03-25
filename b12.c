#include <stdio.h>
#include<math.h>
int main(void)
 {
	// your code goes here
	int n,rem,p,sum=0;
	scanf("%d",&n);
	p=n;
while(n!=0)
{
	rem=n%10;
	sum=sum*10+rem;
	n=n/10;
}
if(p==sum)
{
	printf("palindrome");
}
else
printf("not palindrome");
	return 0;
}
