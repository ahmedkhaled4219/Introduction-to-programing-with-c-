#include <stdio.h>
#include <stdlib.h>
void multiple(int,int);

int main()
{
    int x,y;
printf("Enter number 1 : ");
scanf("%d",&x);
printf("Enter number 2 : ");
scanf("%d",&y);

multiple(x,y);
return 0;
}

void multiple(int num1,int num2){
if(num2==0){
    printf("Not valid input");
}
if(num1%num2==0){
    printf("%d is multiple of %d\n",num1,num2);
}
else {
   printf("%d is not multiple of %d\n",num1,num2);
}
}
