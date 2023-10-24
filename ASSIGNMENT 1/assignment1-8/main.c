#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x;
    double y;

    printf("Enter number to check : ");
    scanf("%d",&x);

    y=sqrt(x);
    x=sqrt(x);

    if(x==y){
        printf("Yess");
    }
    else{
        printf("No");
    }



    return 0;
}
