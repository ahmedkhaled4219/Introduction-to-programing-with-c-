#include <stdio.h>
#include <stdlib.h>
int Myswap(int,int);
int main()
{
    int x,y;
    printf("Enter numbers : ");
    scanf("%d %d",&x,&y);
    Myswap(x,y);
    return 0;
}

int Myswap(int n1,int n2){
int temp;
temp=n1;
n1=n2;
n2=temp;
printf("numbers after swapping : %d %d",n1,n2);

}
