#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int y =0;
    printf("Enter numbers :");
    scanf("%d %d",&x,&y);

    if(x>y){
        printf("Not equal\n");
        printf("%d is greater",x);
    }
    else if(x<y){
        printf("Not equal\n");
        printf("%d is greater",y);
    }
    else
        printf("Equal\n");

    return 0;
}
