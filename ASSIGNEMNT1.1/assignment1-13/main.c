#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int flag=1;
    printf("Enter number :");
    scanf("%d",&x);

    for(int i=2;i*i<=x;i++){

        if(x%i==0){
            flag=0;
        }
        else{
             flag=1;
        }
    }
    if(flag==0 || x==0 || x==1){
            printf("not prime");
        }
        else{
            printf("prime");
        }
    return 0;
}
