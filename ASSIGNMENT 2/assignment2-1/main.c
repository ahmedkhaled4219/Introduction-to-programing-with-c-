#include <stdio.h>
#include <stdlib.h>
int cube(int x){

int result= x*x*x;
printf("result = %d",result);
}

int main()
{
    int num=0;
    printf("enter number: ");
    scanf("%d",&num);
    cube(num);
    return 0;
}
