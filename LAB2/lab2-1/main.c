#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x =0;
    printf("Enter your number:");
    scanf("%d",&x);

    if(x>0){
       printf("positive");
    }
    else
         printf("negative");
    return 0;
}
