#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int y =0;
    int z=0;
    printf("Enter numbers :");
    scanf("%d %d %d",&x,&y,&z);

    if(x<y && x<z){
        printf("the smallest is %d\n",x);
    }
   else if(y<x && y<z){
        printf("the smallest is %d\n",y);
    }
    else
         printf("the smallest is %d\n",z);
    return 0;
}
