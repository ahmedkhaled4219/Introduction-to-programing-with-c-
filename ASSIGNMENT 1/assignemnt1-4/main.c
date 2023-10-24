#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r=0;
    float area=0;
    float circ=0;
    float pi=3.1415;

    printf("Enter circle radius : ");
    scanf("%f",&r);

    area=pi*(r*r);
    circ=2*pi*r;

    printf("Area of circle =%f\n Circumference of circle =%f\n",area,circ);
    return 0;
}
