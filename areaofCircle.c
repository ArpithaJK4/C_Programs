
//write a c program to compute area of circle use the #define statement to define pi value
#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area;


    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;


    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}
