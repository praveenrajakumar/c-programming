#include<stdio.h>
void main()
{
  char a;
  printf("Enter a character to know whether it is vowel or not\n");
  scanf("%c",&a);
  if(a=='A'||a=='a'||a=='e'||a=='E'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
    printf("The character %c is vowel\n",a);
  else
    printf("The character %c is constant\n",a);
}
