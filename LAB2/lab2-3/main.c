#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x =0;
    int y=0;
    int z=0;
    printf("Enter your numbers:");
    scanf("%d %d %d",&x,&y,&z);

 if(x>=y && x>=z){
    printf("the largest number is: %d",x);
 }
 else if (y>=z && y>=x){
    printf("the largest number is: %d",y);
 }
 else
    printf("the largest number is: %d",z);
    return 0;
}
