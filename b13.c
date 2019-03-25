#include<stdio.h>
int main(void)
{
  int n,p=0,temp=0,i;
  printf("Enter the number:");
  scanf("%d",&p);
p=n/2;
for(i=2;i<=p;i++)
{
  if(n%i==0)
  {
  printf("the number is not prime");
  temp=1;
  break;
}
}
    if(temp==0);
    {
    printf("the number is prime");
     }
     return 0;
}
