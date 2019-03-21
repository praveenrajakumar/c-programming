
#include<stdio.h>
int main()
{
	int i,n,K,s=0,a[n];
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<K;i++)
	s=s+a[i];
	printf("sum of 1st %d num is %d",K,s);
return 0;
}
