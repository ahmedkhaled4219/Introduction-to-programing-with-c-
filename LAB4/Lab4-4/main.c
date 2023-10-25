#include <stdio.h>
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int main()
{

    char x;
    x=getch();

    if(x != -32){
        printf("Normal key \n");
        printf("Its ascii value = %d",x);
    }
    else {
        x=getch();
       printf("Extended key  \n");
       printf("Its ascii value = %d",x);

}
    return 0;
}
