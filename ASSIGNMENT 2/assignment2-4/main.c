#include <stdio.h>
#include <stdlib.h>
void calculator(int,int,char);

int main()
{
    int x=0;
    int y=0;
    char ope;

   printf("enter your numbers ");
   scanf("%d %d",&x,&y);
  printf("enter your operation \n");
   scanf(" %c",&ope);
   calculator(x,y,ope);
    return 0;
}

void calculator(int num1,int num2,char ope){

if(ope=='/' && num2==0){
    printf("zero is not valid");
};
if(ope!='/' && ope!='*' && ope!='+' && ope!='-'){
    printf("Not valid operation");
}
int sum=0;
switch(ope){

   case '+':
   sum=num1+num2;
   printf("%d",sum);
   break;
     case '-':
   sum=num1-num2;
   printf("%d",sum);
   break;
     case '*':
   sum=num1*num2;
   printf("%d",sum);
   break;
     case '/':
   sum=num1/num2;
   printf("%d",sum);
   break;
}
}
