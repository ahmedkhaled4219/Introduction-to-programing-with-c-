#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COLUMN 3
int main()
{

    int arr[ROW][COLUMN]={{1,2,3},{4,5,6}};

    for(int i=0;i<COLUMN;i++){
       float sum =0;
      for(int j=0;j<ROW;j++){
     sum+=arr[j][i];
    }
    printf("average of column %d = %f\n",i+1,sum/2);

    }

    return 0;
}



