  
#include<stdio.h>//header file
int main(){
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;
	scanf("%f %f %f %f", &raduisOfCircle, &sideOfSquare, &legthOfRectangle, &breadthOfRectangle);
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));//formula for area of circle
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));//formula for perimeter of circle
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));//formula for area of square
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));//formula for perimeter of square 
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));//formula for area of rectangle 
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));//formula for perimeter of rectangle
	return 0;
}