#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3]={{10,11,12},{12,14,15},{16,17,18}};
    int result[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            result[i][j]=matrix[i][j]+matrix2[i][j];

        }
    }
     for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
              printf("%d \n",result[i][j]);
     }
     }
    return 0;
}
