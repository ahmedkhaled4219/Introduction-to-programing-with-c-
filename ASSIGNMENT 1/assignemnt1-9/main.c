#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade =0;

    printf("Enter your grade:");
    scanf("%d",&grade);

    if(grade>=50 && grade<65){
        printf("pass");
    }
    else if (grade>=75 && grade<85){
        printf("very good");
    }
     else if (grade>=65 && grade<75){
        printf("good");
    }
     else if (grade>=85 && grade<100){
        printf("excellent");
    }
    else if (grade>100 || grade<0){
       printf("range from 0 to 100");
    }
    else
        printf("fail");
    return 0;
}
