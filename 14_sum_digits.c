#include <stdio.h> //Pre-Process directive to include standard input output header file
int main() //main function body
{
  int Number, Reminder, Sum=0; //variable declaration

  printf("Please Enter any number\n"); 
  scanf("%d", &Number);//This will scan (read) the number entered by user.

  while(Number > 0)//Using while loop.
  {
  	//This is the formula to calculate sum of digits.
     Reminder = Number % 10;
     Sum = Sum+Reminder;
     Number = Number / 10;
  }

  printf("Sum of the digits of Given Number = %d\n", Sum);

  return 0;
}