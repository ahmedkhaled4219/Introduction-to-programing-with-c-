#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0;
    int num2=0;
    int result=0;

    printf("Enter your numbers : ");
    scanf("%d %d",&num1,&num2);

    result=((num1+num2)*3)-10 ;
    printf("Result = %d\n",result);



    return 0;
}
