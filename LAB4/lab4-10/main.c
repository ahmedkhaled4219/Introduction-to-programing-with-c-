#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100];
   char alpha[100];
    printf("Enter your word : ");
   scanf("%s",str);

   int length=0;
   int i=0;

   while(str[i]!='\0'){
    i++;
    length=i;
   }
   for(int i=0;i<length;i++){
    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
        alpha[i]=str[i];
    }
   }
printf(" Alphabet only -> %s",alpha);

    return 0;
}
