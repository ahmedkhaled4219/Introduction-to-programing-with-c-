#include <stdio.h>
#include <stdlib.h>
#define N 100
int main()
{
    int arr[N];
    int size = 0;
    int max=0,min=0;
   printf("enter the size of array : ");
   scanf("%d",&size);

   for(int i=0;i<size;i++){
   printf("enter the [%d] element : ",i+1);
   scanf("%d",&arr[i]);
   }
    max=arr[0];
    min=arr[0];

   for(int i=0;i<size;i++){

    if(arr[i]>max){
        max=arr[i];
    }
    if(arr[i]<min){
       min=arr[i];
       }
   }
    printf("the maximum element is: %d\n",max);
    printf("the minimum element is: %d",min);




    return 0;
}
