#include <stdio.h>
#include <stdlib.h>
int heater(int);
int main()
{
    int temp;
    printf("Enter water temperature : ");
    scanf("%d",&temp);
    heater(temp);
    return 0;
}
int heater(int t){
if(t>=0 && t<=30){
    printf("The required heating time = 7 mins: ");
}
else if(t>=30 && t<=60){
    printf("The required heating time = 5 mins: ");
}
else if(t>=60 && t<=90){
    printf("The required heating time = 3 mins: ");
}
 else if(t>=90 && t<=100){
    printf("The required heating time = 1 mins: ");
}
else{
    printf("Not valid input");
return 0;
}





}
