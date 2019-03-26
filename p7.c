#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[40],temp;
    int n;
    scanf("%s",str);
    if(strlen(str)%2==0)
    {
        for(n=0;n<=strlen(str);n+=2)
        {
        temp=str[n];
       str[n]=str[n+1];
       str[n+1]=temp;
        }
    }
    else
    {
        for(n=0;n<=strlen(str);n+=3)
        {
        temp=str[n];
       str[n]=str[n+1];
       str[n+1]=temp;
        }
    }
printf("%s",str);
return 0;
}
