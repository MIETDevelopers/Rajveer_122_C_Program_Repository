#include<stdio.h>
 
int main(){
   int n, first = 0, second = 1, next, c; 
 
   printf("Enter the number of terms\n");
   scanf("%d",&n); // scanning the number entered by user.
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ ) //ForLoop function for the reference to the formula of the series.
   {
      if ( c <= 1 )
         next = c;
      else
      {
         //Formula to print the series.
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next); //output.
   }
   return 0;
}