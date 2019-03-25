#include <stdio.h>
 
int main(void) 
 
{
int i,low,high,k;
printf("\n enter the start range:");
scanf("%d",&low);
printf("\n enter the end range");
scanf("%d",&high);
printf("\n the prime numbers between %d and %d are:",low,high);
for(i=low;i<=high;i++)
{
for(k=2;k<=i;k++)
{
if(i%k==0)
break;
}
if(i==k)
printf("\n%d",k);
}
return 0;
}
