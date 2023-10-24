#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x =0;
    printf("Enter your number:");
    scanf("%d",&x);

    if(x%2 == 0 && x!=0){
         printf("even");
    }
    else if(x%2==1){
         printf("odd");
    }
    else {
        printf("zero");
    }
    return 0;
}
