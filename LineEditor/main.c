#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#define RIGHT 77
#define LEFT 75
#define ENTER 13
#define BACKSPACE 8
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{

    char str[100];
    char input=0;
    int count =0;
    int position=0;
    int flag=0;

    printf("Enter your word : ");

     while(flag!=1){
         input=getch();
         if(input == ENTER){
            flag = 1;
         }else{
      str[count]=input;
      printf("%c",str[count]);
      count++;
    }
    }
      system("cls");
     for(int i=0;i<count;i++){
         printf("%c",str[i]);
     }
     printf("\n\n(Press Enter to show your update)");
     position=count;
     gotoxy(position,0);
     //printf("%d",count);
while(1){
     input=getch();
     if(input==-32){
        input=getch();

    switch(input){
case LEFT:
    position--;
if(position<0){
        position=0;
        }
        gotoxy(position,0);
     break;
case RIGHT:
    position++;
    if(position == count+1){
        position = count;
        //gotoxy(position,0);
    }
    gotoxy(position,0);
    break;
}
}
else if(input==BACKSPACE){
  for(int i=position;i<count;i++){
   str[i]=str[i+1];
}
count--;
}
else if(input!=-32 && input!=ENTER && input!=BACKSPACE){
    for(int i=count;i>=position;i--){
        str[i+1]=str[i];
    }
    str[position]=input;
    position++;
    count++;
}
else if(input==ENTER){
     system("cls");
     for(int i=0;i<count;i++){
         printf("%c",str[i]);
     }
     printf("\n\n(Press Enter to show your update)");
     position=count;
     gotoxy(position,0);
}
}
 return 0;
}







