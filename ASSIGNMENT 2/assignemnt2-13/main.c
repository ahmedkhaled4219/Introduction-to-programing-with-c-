#include <stdio.h>
#include <stdlib.h>
int floor(float,float);

int main()
{
    float x,y;
    printf("Enter the two floating numbers : ");
    scanf("%f %f",&x,&y);
    floor(x,y);
    return 0;
}
int floor(float n1, float n2){
float sum = n1+n2;
int value = (int)sum;

printf("Floor value of sum = %d\n",value);

}
