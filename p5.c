
#include<stdio.h>
#include<string.h>
 
int digit(char);
 
int main(){
 
    char R[1000];
    int i=0;
    long int number =0;
 
    printf("Enter any roman number\n");
    scanf("%s",R);
 
    while(R[i]){
 
         if(digit(R[i]) < 0){
             printf("Invalid roman digit : %c",R[i]);
             return 0;
         }
 
         if((strlen(R) -i) > 2){
             if(digit(R[i]) < digit(R[i+2])){
                 printf("Invalid roman number");
                 return 0;
             }
         }
 
         if(digit(R[i]) >= digit(R[i+1]))
             number = number + digit(R[i]);
         else{
             number = number + (digit(R[i+1]) - digit(R[i]));
             i++;
         }
         i++;
    }
 
    printf("Its decimal value is : %ld",number);
 
    return 0;
 
}
 
int digit(char c){
 
    int value=0;
 
    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case 'D': value = 500; break;
         case 'M': value = 1000; break;
         case '\0': value = 0; break;
         default: value = -1; 
    }
 
    return value;
}
