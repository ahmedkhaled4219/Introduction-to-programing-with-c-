#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 80;
    int y = 20;
    int z = 60;
    if(x>=y && x>=z){
        printf("the largest number is : %d\n",x);
    }
    else if(y>=x && y>=z){
        printf("the largest number is : %d\n",y);
    }
    else{
        printf("the largest number is : %d\n",z);
    }

    return 0;
}
