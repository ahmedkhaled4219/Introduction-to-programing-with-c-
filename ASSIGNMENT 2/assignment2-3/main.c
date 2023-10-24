#include <stdio.h>
#include <stdlib.h>
void sign(int);

int main()
{
int num=0;
printf("Enter Number: ");
scanf("%d",&num);

sign(num);

    return 0;
}

void sign(int x){
if(x<0){
    printf("Negative");
}
else if(x>0){
    printf("Positive");
}
else{
    printf("Zero");
}

}

