#include <stdio.h>
#include <stdlib.h>
void check_alpha(char x){

if((x>='a' && x<='z')||(x>='A' && x<='Z')){
    printf("yes");
}
else{
     printf("no");
}
}

int main()
{
   char y;
   printf("Enter character: ");
   scanf(" %c",&y);
   check_alpha(y);


    return 0;
}
