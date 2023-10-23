#include <stdio.h>
#include <stdlib.h>
#define N 100
int main()
{
   int arr[N];
   int size = 0;

   printf("enter the size of array : ");
   scanf("%d",&size);

   for(int i=0;i<size;i++){
   printf("enter the [%d] element : ",i+1);
   scanf("%d",&arr[i]);
   }

   printf("your array elements are:\n");
   for(int i =0; i<size;i++){
    printf("%d\t",arr[i]);
   }




    return 0;
}
