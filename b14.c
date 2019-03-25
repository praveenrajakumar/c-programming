#include<stdio.h>
int main()
{
int p,d,i;
scanf("%d %d",&p,&d);
for(i=(p+1);i<d;i++)
{
if(i%2!=0)
printf("%d",i);
}
return 0;
}
