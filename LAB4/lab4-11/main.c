#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    printf("Enter your word : ");
   scanf("%s",str);

   int length=0;
   int i=0;

   while(str[i]!='\0'){
    i++;
    length=i;
   }
   for(int i=0;i<length;i++){
    str[i]=str[i]-32;
   }
   printf("word in UPPERCASE is -> %s",str);
   ;
    return 0;
}
