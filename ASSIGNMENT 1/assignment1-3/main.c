#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f=0.0;
    float c=0.0;

    printf("Enter temperature in c  : ");
    scanf("%f",&c);

    f= c*9/5+32;
    printf("Temperature in f =%f\n",f);
    return 0;
}
