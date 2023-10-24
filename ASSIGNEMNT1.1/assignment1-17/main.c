#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=0;
   int count=0;

   printf("Enter number : ");
   scanf("%d",&x);
   if(x==0){
    count=1;
   }
   else{
   while(x!=0){
    x=x/10;
    count++;
   }
   }
   printf("number of digits = %d",count);
    return 0;
}
