#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>

int main()
{
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

  int col,row,i,size,totalSize;

          printf("please enter size of magic box : ");
          scanf("%d",&size);

          totalSize =size * size ;
          row=1;
          col=(size+1)/2;
          i=1;

          if(size%2==0){
             printf("please enter odd number \n");
          }

          while(i<=totalSize &&size%2!=0){

          gotoxy(col*5,row);
          printf("%5d",i);
          delay(1);

          if(i%size==0){
            row++;
          }
          else {
            row--;
            col--;
          }
          if(row==0){
                row=size;

          }
          if(col==0){
            col=size;
          }
          i++;
        };

    return 0;
}
