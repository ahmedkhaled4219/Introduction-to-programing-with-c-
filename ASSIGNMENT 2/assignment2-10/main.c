#include <stdio.h>
#include <stdlib.h>
void CountHoles(int);

int main()
{
    int x=0;
    printf("Enter your number : ");
    scanf("%d",&x);
    CountHoles(x);
    return 0;
}

void CountHoles(int n){

int holes=0;

while(n!=0){
    int last=n%10;
    switch(last){
    case 0:
    case 4:
    case 6:
    case 9:
        holes+=1;
        break;
    case 8:
        holes+=2;
        break;
    default:
        holes+=0;
        break;
    }
    n=n/10;
}
printf("Number of holes = %d",holes);
}
