#include<stdio.h>
int main(void)
{
  int p,i,fact=1;
  scanf("%d",&p);
  for(i=1;i<p;i++)
{
  fact=fact*i;}

  printf("%d",fact);
return 0;
}
