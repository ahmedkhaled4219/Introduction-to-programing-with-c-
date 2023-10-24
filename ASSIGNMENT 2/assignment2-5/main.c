#include <stdio.h>
#include <stdlib.h>
void even_odd(int);

int main()
{
    int num=0;
    printf("Enter number : ");
    scanf("%d",&num);
    even_odd(num);
    return 0;
}

void even_odd(int x){
if(x%2==0){

    printf("0");
}
else {

printf("1");
}
}
