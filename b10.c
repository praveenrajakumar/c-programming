 #include<stdio.h>
 int main()
 {
 int a,b,j=1;
 scanf("%d",&a);
 b=a;
 while(a!=0)
 {
  a=a/10;
  if(a!=0)
  j++;
 }
 printf("%d",j);
 }
