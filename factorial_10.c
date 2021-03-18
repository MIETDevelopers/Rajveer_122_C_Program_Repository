#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    //input
    for(i=1;i<=number;i++){    
      fact=fact*i;   //Formula 
  }    
  printf("Factorial of %d is: %d",number,fact);    //output.
return 0;  
}