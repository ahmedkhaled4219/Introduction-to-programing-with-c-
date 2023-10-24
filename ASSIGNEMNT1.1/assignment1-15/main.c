#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    int power=0;
    int result=1;
    printf("Enter number\n");
    scanf("%d",&num);
    printf("Enter power\n");
    scanf("%d",&power);

  while(power!=0){
    result*=num;
    power--;
  }
    printf("the result = %d",result);
    return 0;
}
