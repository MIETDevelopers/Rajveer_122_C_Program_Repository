#include <stdio.h>//header file
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);//scanning the number
    if(num % 2 == 0)
        printf("%d is even.", num);//number is even
    else
        printf("%d is odd.", num);//number is odd

    return 0;
}