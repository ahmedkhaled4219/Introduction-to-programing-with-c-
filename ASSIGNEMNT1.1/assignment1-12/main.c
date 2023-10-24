#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int x=0;
    int factorial=1;
    printf("Enter number : ");
    scanf("%d",&x);

    for(int i=1;i<=x;i++){
        factorial*=i;
    }
    printf("factorial = %d",factorial);
    return 0;
}
