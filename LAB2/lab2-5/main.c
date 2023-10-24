#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=0;
   int y=0;
   int sum=0;
   char ope;

   printf("enter your numbers ");
   scanf("%d %d",&x,&y);
  printf("enter your operation \n");
   scanf(" %c",&ope);
if(ope=='/' && y==0){
    printf("zero is not valid");
};

   switch(ope){

   case '+':
   sum=x+y;
   printf("%d",sum);
   break;
     case '-':
   sum=x-y;
   printf("%d",sum);
   break;
     case '*':
   sum=x*y;
   printf("%d",sum);
   break;
     case '/':
   sum=x/y;
   printf("%d",sum);
   break;




   }
    return 0;
}
