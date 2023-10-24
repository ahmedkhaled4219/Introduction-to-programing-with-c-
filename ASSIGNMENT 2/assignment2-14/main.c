#include <stdio.h>
#include <stdlib.h>
int fibonacci(int);
int main()
{
    int num;
    printf("Enter limit : ");
    scanf("%d",&num);
    printf("0 1 ");
    for (int i = 2; i <= num; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int x){
if(x==0 || x==1){
    return x;
}
else{
    return fibonacci(x-1)+fibonacci(x-2);
}
}
