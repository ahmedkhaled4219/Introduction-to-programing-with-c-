#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#define UP 72
#define DOWN 80
#define COL 50
#include "standardtype.h"
void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
  void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }




struct student {
    char name[10];
    char gender;
    int age;
    int id;
};
int scan_struct_Students(struct student s[]);
void print_struct_Students(struct student s[],int size );
 int count=0;
int main() {

struct student students[100];
int postion = 0;
char press=0;
while(1){


    if(postion==0){
     system("cls");
    gotoxy(COL,5);
    SetColor(4);
    printf("New");

    gotoxy(COL,10);
    SetColor(15);
    printf("Display");

    gotoxy(COL,15);
    SetColor(15);
    printf("Exit");
}
else if (postion == 1){
    system("cls");
    gotoxy(COL,5);
    SetColor(15);
    printf("New");

    gotoxy(COL,10);
    SetColor(4);
    printf("Display");

    gotoxy(COL,15);
    SetColor(15);
    printf("Exit");

}
else if(postion==2){
   system("cls");
    gotoxy(COL,5);
    SetColor(15);
    printf("New");

    gotoxy(COL,10);
    SetColor(15);
    printf("Display");

    gotoxy(COL,15);
    SetColor(4);
    printf("Exit");

}

press=getch();
if(press==-32){
 press=getch();
switch(press){

case 80:
    postion++;
    if(postion > 2){
        postion=0;
    }
     break;
case 72:
    postion--;
    if(postion<0){
        postion=2;
    }
    break;
}
}
else if(press==13){
    switch(postion){

case 0:
    system("cls");
    scan_struct_Students(students);
    getch();
     break;
case 1:
    system("cls");
   print_struct_Students(students,count);
    getch();
    break;
case 2:
    system("cls");
    gotoxy(50,10);
    printf("Exit");
    getch();
    break;
    }

}
else{

}
}


return 0;


}

int scan_struct_Students(struct student s[]){

 int i = count;

 char flag='y';

    do{
            if(flag=='y' || flag=='Y'){
         printf("Enter name [%d] : ",i+1);
       //scanf("%[^\n]%*c",s[i].name);
        scanf("%s",s[i].name);
          // gets(s[i].name);
        printf("Enter age [%d] : ",i+1);
        scanf("%d",&s[i].age);
        printf("Enter ID [%d] : ",i+1);
        scanf("%d",&s[i].id);
        printf("Enter Gender [%d] : ",i+1);
        scanf(" %c",&s[i].gender);
        fflush(stdin);
         printf("To add new student enter Y : \n");
        printf("To exit enter N : \n");
        flag=getch();

         i++;
         count++;
    }
    else{
        flag=='n';
         getch();

    }
     }
       while( flag!='n' && flag!='N' );
    }


void print_struct_Students(struct student s[],int size ){
    printf("----------------- Display -------------------- \n");
    for(int i=0; i<size; i++){
        printf("student name  = %s \n", s[i].name);
        printf("student age is [%d] = %d \n",i+1,s[i].age);
        printf("student id is [%d] = %d \n",i+1,s[i].id);
        printf("student gender is [%d] = %c \n",i+1,s[i].gender);
        printf("....................................\n");
    }
}










