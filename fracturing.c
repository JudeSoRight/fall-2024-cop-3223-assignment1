//Caleb Andarge
//September 8, 2024
//COP-3223
//Programming Assignment 1: Fracture

#include <stdio.h>
#include <math.h>

double calculateDistance() {
	double x1, y1, x2, y2;
	//asking user input
	printf("Enter x1:");
	scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
	//calcualting distance
	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("distance between the two points is %.2f\n", distance);

	return 5;

}

double calculatePerimeter() {
	double x1, y1, x2, y2;
	//asking user input
	printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
	//calculating perimeter
	double width = (x2 - x1);
    double height = (y2 - y1);
    double perimeter = 2 * (width + height);
	printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

	return 3;

}

double calculateArea() {
	double x1, y1, x2, y2;
    //asking user input
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
	//calculating area
	double width = (x2 - x1);
    double height = (y2 - y1);
    double area = width * height;

    printf("The area of the city encompassed by your request is %.2f\n", area);

	return 4;
}	
double calculateWidth() {
	double x1, y1, x2, y2;
   //asking user input 
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
	//calcualting width
	double width = (x2 - x1);

    printf("The width of the city encompassed by your request is %.2f\n", width);
	return 3;
}

double calculateHeight() {
	double x1, y1, x2, y2;
    //asking user input
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
	//calculating height
	double height = (y2 - y1);

    printf("The height of the city encompassed by your request is %.2f\n", height);

	return 3;
} 

int main(int argc, char **argv) {
	calculateDistance();
	calculatePerimeter();
	calculateArea();
	calculateWidth();
	calculateHeight();
	return 0;
}
