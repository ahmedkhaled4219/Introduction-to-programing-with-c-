#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    int last=0;
    int ans=0;
    int size=0;
printf("Enter the number of digits : ");
scanf("%d",&size);
printf("Enter the number : ");
scanf("%d",&num);

while(size!=0){

    last=num%10;
    ans=ans*10+last;
    num=num/10;
    size--;
}
    printf("reversed number = %d",ans);
    return 0;
}
