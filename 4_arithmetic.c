  
#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):");
    scanf("%c", &operator);
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b);
    switch(operator)
    {
        case '+':
            printf("%.lf + %.lf = %.lf",a, b, a+b);//addition function
            break;

        case '-':
            printf("%.lf - %.lf = %.lf",a, b, a-b);//subtraction funtion
            break;

        case '*':
            printf("%.lf * %.lf = %.lf",a, b, a*b);//multiplication function
            break;

        case '/':
            printf("%.lf / %.lf = %.lf",a, b, a/b);//division function
            break;
    printf("Error encountered by the input values");//default
    }
    return 0;
}