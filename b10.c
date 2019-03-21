#include<stdio.h>
 int main()
 {
 int p,q,j=1;
 scanf("%d",&p);
 q=p;
 while(p!=0)
 {
  p=p/10;
  if(p!=0)
  j++;
 }
 printf("%d",j);
 }
