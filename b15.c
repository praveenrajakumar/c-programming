#include <stdio.h>
int main(){
	int n1,n2,result,i;
	printf("Enter the lowest limit :");
	scanf("%d",&n1);
	printf("Enter the highest limit :");
	scanf("%d",&n2);
	for(i=n1+1;i<n2;i++){
		result = i % 2;
		if(result != 0)
			continue;
		
		else
			printf("\n%d",i);
	}
	
	return 0;
}
